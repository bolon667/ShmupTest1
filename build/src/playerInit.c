#include "../inc/player.h"
#include "../inc/playerInit.h"

#include "../inc/global.h"
#include "../inc/maps.h"

#include "../res/sounds.h"
#include "../res/sprites.h"
#include "../res/resources.h"

//Shmup Engine

void playerInit(Vect2D_s16 levelStartPos) {
	//Create the sprite and palette for the player
	
	//$showTriggerRects$
	playerBody.sprite = SPR_addSprite(&spr_player, levelStartPos.x, levelStartPos.y, TILE_ATTR(PLAYER_PALETTE, FALSE, FALSE, FALSE));
	playerBody.gravityOn = FALSE;

	SPR_setHFlip(playerBody.sprite, facingRight);

	//Set the global position of the player, the local position will be updated once we are in the main loop
	playerBody.globalPosition = levelStartPos;

	//We set collider size of the player
	playerBody.aabb = newAABB(4, 20, 4, 24);
	//This collider is thinner because if the width is >=16 it could interfere with the lateral walls
	playerBody.climbingStairAABB = newAABB(8, 20, playerBody.aabb.min.y, playerBody.aabb.max.y);
	//Calculate where's the center point of the player
	playerBody.centerOffset.x = ((playerBody.aabb.min.x + playerBody.aabb.max.x) >> 1);
	playerBody.centerOffset.y = ((playerBody.aabb.min.y + playerBody.aabb.max.y) >> 1);

	//Default movement values
	playerBody.attack = FALSE;
	playerBody.speed = 2;
	playerBody.climbingSpeed = 1;
	playerBody.maxFallSpeed = 6;
	playerBody.jumpSpeed = 7;
	playerBody.facingDirection = 1;
	playerBody.acceleration = FIX16(.25);
	playerBody.deceleration = FIX16(.2);

	playerBody.maxAmountOfJumps = 2;
	playerBody.curAmountOfJumps = playerBody.maxAmountOfJumps;
	

	playerBounds = newAABB(
			playerBody.globalPosition.x + playerBody.aabb.min.x,
			playerBody.globalPosition.x + playerBody.aabb.max.x,
			playerBody.globalPosition.y + playerBody.aabb.min.y,
			playerBody.globalPosition.y + playerBody.aabb.max.y
		);

	

	//Commented because, if you not using default XGM driver, you will get a ear damage. It's really DANGEROUS you can get partially deaf in real life.
	
	//Setup the jump SFX with an index between 64 and 255
	// XGM_setPCM(64, sfx_jump, sizeof(sfx_jump));
	
}