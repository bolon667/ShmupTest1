void showBoss2(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		SPR_releaseSprite(entity->spr);
		//$showTriggerRects_releaseSprite$

		entity->alive = FALSE;
		return;
	}
	if(entity->activated){
		entity->timer++;
		KLog_S1("entity->state: ", entity->state);
		switch(entity->state) {
			case 0:
				if(entity->timer > 120){
					entity->state++;
					//addNew_Boss1Bullet(entity->posInt, toPointSpd(entity->posInt, playerBody.globalPosition, FIX16(1.5)));
					entity->timer = 0;
					cameraSpd.y = FIX32(-1);
				}
				
				break;
			case 1:
				if(entity->timer > 240){
					entity->state = 0;
					//addNew_Boss1Bullet(entity->posInt, toPointSpd(entity->posInt, playerBody.globalPosition, FIX16(1.5)));
					entity->timer = 0;
					cameraSpd.y = FIX32(1);
				}
				break;
		}
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		if(entity->onScreen) {
			if(entity->sprDef) {
				SPR_releaseSprite(entity->spr);
				//$showTriggerRects_releaseSprite$
			}
			
		}
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			entity->activated = TRUE;
			//$showTriggerRects_addSprite$
			VDP_setWindowVPos(FALSE, 1);
		}
        if(entity->sprDef) SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);
		//$showTriggerRects_moveSprite$
		entityCheckForBullet(entity);
		if(entity->damaged){
			char str_hp[5] = "     ";
			intToStr(entity->hp, str_hp, 1);
			VDP_drawTextBG(WINDOW, "     ", 0, 0);
			VDP_drawTextBG(WINDOW, str_hp, 0, 0);
			
		}

		//Update position
		entity->pos.x += entity->spd.x;
		entity->pos.y += entity->spd.y;
		entity->posInt.x = fix32ToInt(entity->pos.x);
		entity->posInt.y = fix32ToInt(entity->pos.y);
		entity->trigger->pos.x = entity->posInt.x;
		entity->trigger->pos.y = entity->posInt.y;

		if(entity->hp < 0){
			int i=360;
			entity->trigger->alive = FALSE;
			PAL_fadeOutAll(3,FALSE);
			stopLevel();
			VDP_setWindowVPos(FALSE, 0);

			XGM_startPlay(&mus_complete_level);
			VDP_drawImageEx(BG_A, &img_level_completed, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
			memcpy(&palette_full[0], img_level_completed.palette->data, 16 * 2);
			PAL_fadeIn(0, 63, palette_full, 3, TRUE);
			while(i > 0){
				i--;
				SYS_doVBlankProcess();	
			}
			levelNum++;
			loadLevel(levelNum, (Vect2D_s16)getLevelPos(0));
			return;
		}
		
		entity->onScreen = TRUE;
    }
}