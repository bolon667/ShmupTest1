void showRunOnScreen(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			//$showTriggerRects_addSprite$
		}

		entity->trigger->pos.x = playerBody.globalPosition.x;
		entity->trigger->pos.y = playerBody.globalPosition.y;

		//$showTriggerRects_moveSprite$
		
		entity->onScreen = TRUE;
    }
}