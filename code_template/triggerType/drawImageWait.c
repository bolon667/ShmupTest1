trigger->alive = FALSE;
PAL_fadeOutAll(3,FALSE);
stopLevel();
switch(trigger->val1){
	case 0:
		VDP_drawImageEx(BG_A, &img_game_logo, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_game_logo.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		break;
	case 1:
		VDP_drawImageEx(BG_A, &img_created_on, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_created_on.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		break;
	case 2:
		VDP_drawImageEx(BG_A, &img_by_bolon, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_by_bolon.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		break;
	case 3:
		XGM_startPlay(&mus_epic2);
		VDP_drawImageEx(BG_A, &img_boss1_logo, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_boss1_logo.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		
		break;
	case 4:
		XGM_startPlay(&mus_epic2);
		VDP_drawImageEx(BG_A, &img_boss2_logo, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_boss2_logo.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		
		break;
	case 5:
		XGM_startPlay(&mus_epic2);
		VDP_drawImageEx(BG_A, &img_boss3_logo, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_boss3_logo.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		
		break;
	case 6:
		VDP_drawImageEx(BG_A, &img_thanks_for_playing, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, VDPTilesFilled), 0, 0, FALSE, FALSE);
		memcpy(&palette_full[0], img_thanks_for_playing.palette->data, 16 * 2);
		PAL_fadeIn(0, 63, palette_full, 3, TRUE);
		while(trigger->val2 > 0){
			trigger->val2--;
			SYS_doVBlankProcess();	
		}
		
		break;
	
}
PAL_fadeOutAll(3,FALSE);
resumeLevel();
