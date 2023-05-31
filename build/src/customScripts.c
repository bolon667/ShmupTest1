#pragma once
#include "../inc/levels.h"

#include "../inc/maps.h"
#include "../inc/camera.h"
#include "../inc/global.h"
#include "../inc/player.h"
#include "../inc/updatePlayer.h"
#include "../inc/enums.h"
#include "../inc/levels.h"

#include "../res/resources.h"
#include "../res/gfx.h"
#include "../res/sprites.h"
#include "../res/sounds.h"
#include "../res/music.h"
#include "../res/images.h"

void moveBack1(){
    backXScroll++;
    backYScroll++;

    VDP_setHorizontalScroll(BG_B, backXScroll);
    VDP_setVerticalScroll(BG_B, backYScroll);
}
void showFPSWindow(){
	VDP_showFPS(FALSE);
}

void useless_script(){
    
}
void emptyScript(){};
void (* customScriptArr[])(void) = {updatePlayer, updateCamera, moveBack1, showFPSWindow, useless_script, };
