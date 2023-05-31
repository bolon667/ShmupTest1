void showEnemy1(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		//$showTriggerRects_releaseSprite$
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		if(entity->onScreen) {
			entity->trigger->alive = FALSE;
			return;
		}
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			//$showTriggerRects_addSprite$
		}
        if(entity->sprDef) SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);
		//$showTriggerRects_moveSprite$
		
		if(entity->val2 == 1){
			SPR_setPalette(entity->spr, entity->pal);
			entity->val2 = 0;
		}
		
		entityCheckForBullet(entity);
		if(entity->damaged){
			SPR_setPalette(entity->spr, PAL1);
			entity->val2 = 1;
			if(entity->hp <= 0){
				entity->trigger->alive = FALSE;
				return;
			}
		}

		entity->pos.x += entity->spd.x;
		entity->pos.y += entity->spd.y;
		entity->posInt.x = fix32ToInt(entity->pos.x);
		entity->posInt.y = fix32ToInt(entity->pos.y);
		entity->trigger->pos.x = entity->posInt.x;
		entity->trigger->pos.y = entity->posInt.y;

		entity->val1--;
		if(entity->val1 <= 0){
			entity->val1 = 10;
			entity->spd = toPointSpd(entity->posInt, playerBody.globalPosition, FIX16(0.3));
		}
		

		entity->onScreen = TRUE;
    }
}