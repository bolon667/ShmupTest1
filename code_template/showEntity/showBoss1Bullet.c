void showBoss1Bullet(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	EntityMerged* curSlave;
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

		entity->timer += 40;
		for(u16 curSlaveInd=0; curSlaveInd<entity->slave_amount; curSlaveInd++){
			curSlave = entity->slaves_arr[curSlaveInd];
			//curSlaveInd*100
			curSlave->posInt.x = entity->posInt.x + fix16ToInt(sinFix16(entity->timer+(curSlaveInd*100))*20);
			curSlave->posInt.y = entity->posInt.y + fix16ToInt(cosFix16(entity->timer+(curSlaveInd*100))*20);
			curSlave->trigger->pos.x = curSlave->posInt.x;
			curSlave->trigger->pos.y = curSlave->posInt.y;

		}

		//Update position
		entity->pos.x += entity->spd.x;
		entity->pos.y += entity->spd.y;
		entity->posInt.x = fix32ToInt(entity->pos.x);
		entity->posInt.y = fix32ToInt(entity->pos.y);
		entity->trigger->pos.x = entity->posInt.x;
		entity->trigger->pos.y = entity->posInt.y;
		
		entity->onScreen = TRUE;
    }
}