void showEnemyBullet3(EntityMerged* entity){
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
		
		entity->onScreen = TRUE;
    }
}