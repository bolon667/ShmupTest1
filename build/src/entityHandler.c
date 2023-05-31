#include "../inc/levels.h"

#include "../inc/maps.h"
#include "../inc/messages.h"
#include "../inc/global.h"
#include "../inc/enums.h"

#include "../res/resources.h"
#include "../res/images.h"
#include "../res/music.h"
#include "../res/gfx.h"
#include "../res/sprites.h"
#include "../inc/camera.h"

#include "../inc/messages.h"
#include "../inc/customScripts.h"


const EntityMerged const EntitySimple_default = {0, 0, FALSE, {0,0}, {0,0}, {0,0}, {16, 16}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, NULL, 1, FALSE, FALSE, 3, 1, 1, 0, 1, };
const Trigger const EntitySimple_defaultTrigger = {FALSE, {0, 0}, {0, 0, 8, 8}, 0, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Enemy1_default = {1, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_enemy1, 10, FALSE, FALSE, 3, 1, 1, 0, 1, };
const Trigger const Enemy1_defaultTrigger = {FALSE, {0, 0}, {0, 0, 16, 16}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Enemy2_default = {2, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_enemy2, 10, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const Enemy2_defaultTrigger = {FALSE, {0, 0}, {0, 0, 32, 32}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Enemy3_default = {3, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_enemy3, 10, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const Enemy3_defaultTrigger = {FALSE, {0, 0}, {0, 0, 32, 32}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const EnemyBullet1_default = {4, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_enemyBullet1, 1, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const EnemyBullet1_defaultTrigger = {FALSE, {0, 0}, {0, 0, 16, 16}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const RunOnScreen_default = {5, 0, FALSE, {0,0}, {0,0}, {0,0}, {16, 16}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, NULL, 1, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const RunOnScreen_defaultTrigger = {FALSE, {0, 0}, {0, 0, 20, 200}, TRIGGER_TYPE_changeCameraSpeed, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Boss1_default = {6, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_boss1, 50, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const Boss1_defaultTrigger = {FALSE, {0, 0}, {0, 0, 64, 64}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Boss2_default = {7, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_boss2, 50, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const Boss2_defaultTrigger = {FALSE, {0, 0}, {0, 0, 80, 64}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Boss3_default = {8, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_boss3, 1, FALSE, FALSE, 3, 1, 1, 0, 1, };
const Trigger const Boss3_defaultTrigger = {FALSE, {0, 0}, {0, 0, 48, 64}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const Boss1Bullet_default = {9, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_enemyBullet1, 1, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const Boss1Bullet_defaultTrigger = {FALSE, {0, 0}, {0, 0, 8, 8}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const EnemyBullet2_default = {10, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_enemyBullet1, 1, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const EnemyBullet2_defaultTrigger = {FALSE, {0, 0}, {0, 0, 16, 16}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };
const EntityMerged const EnemyBullet3_default = {11, 0, FALSE, {0,0}, {0,0}, {0,0}, {0, 0}, FALSE, NULL, 0, NULL, FALSE, {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, }, 12, &spr_boss2_bullet1, 1, FALSE, FALSE, 0, 1, 1, 0, 1, };
const Trigger const EnemyBullet3_defaultTrigger = {FALSE, {0, 0}, {0, 0, 16, 16}, TRIGGER_TYPE_hurt, -1, -1, -1, 1, FALSE, FALSE, };


const EntityBulletMerged const BulletSimple_default = {0, FALSE, FALSE, {0,0}, {0,0}, {0,0}, {0,0}, FALSE, {0, 0, 24, 24}, NULL, &spr_coin, 1, 1, FALSE, FALSE, 0, };


EntityMerged* addNew_EntitySimple(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &EntitySimple_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for EntitySimple...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &EntitySimple_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for EntitySimple!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for EntitySimple...");
    return NULL;
}

    
    
EntityMerged* addNew_Enemy1(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Enemy1_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Enemy1...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Enemy1_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Enemy1!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Enemy1...");
    return NULL;
}

    
    
EntityMerged* addNew_Enemy2(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Enemy2_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Enemy2...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Enemy2_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Enemy2!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Enemy2...");
    return NULL;
}

    
    
EntityMerged* addNew_Enemy3(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Enemy3_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Enemy3...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Enemy3_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Enemy3!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Enemy3...");
    return NULL;
}

    
    
EntityMerged* addNew_EnemyBullet1(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &EnemyBullet1_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for EnemyBullet1...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &EnemyBullet1_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for EnemyBullet1!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for EnemyBullet1...");
    return NULL;
}

    
    
EntityMerged* addNew_RunOnScreen(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &RunOnScreen_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for RunOnScreen...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &RunOnScreen_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for RunOnScreen!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for RunOnScreen...");
    return NULL;
}

    
    
EntityMerged* addNew_Boss1(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Boss1_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Boss1...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Boss1_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Boss1!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Boss1...");
    return NULL;
}

    
    
EntityMerged* addNew_Boss2(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Boss2_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Boss2...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Boss2_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Boss2!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Boss2...");
    return NULL;
}

    
    
EntityMerged* addNew_Boss3(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Boss3_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Boss3...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Boss3_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Boss3!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Boss3...");
    return NULL;
}

    
    
EntityMerged* addNew_Boss1Bullet(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &Boss1Bullet_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for Boss1Bullet...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &Boss1Bullet_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for Boss1Bullet!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for Boss1Bullet...");
    return NULL;
}

    
    
EntityMerged* addNew_EnemyBullet2(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &EnemyBullet2_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for EnemyBullet2...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &EnemyBullet2_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for EnemyBullet2!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for EnemyBullet2...");
    return NULL;
}

    
    
EntityMerged* addNew_EnemyBullet3(Vect2D_s16 posInt, Vect2D_f16 spd){
    Trigger* foundTrigger = NULL;
    KDebug_Alert("new Trigger");
    for(u16 i=0; i<curEntityAll->Trigger_size; i++){
        if(!curEntityAll->Trigger_arr[i].alive){
            memcpy(&curEntityAll->Trigger_arr[i], &EnemyBullet3_defaultTrigger, sizeof(Trigger));
            curEntityAll->Trigger_arr[i].pos = posInt;
            curEntityAll->Trigger_arr[i].alive = TRUE;
            KDebug_Alert("Success for Trigger!");
            foundTrigger = &curEntityAll->Trigger_arr[i];
            break;
        }
    }
    if(foundTrigger == NULL) {
        KDebug_Alert("Fail for Trigger and for EnemyBullet3...");
        return NULL;
    }

    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
        if(!curEntityAll->EntityMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityMerged_arr[i], &EnemyBullet3_default, sizeof(EntityMerged));
            //Changing pos
            curEntityAll->EntityMerged_arr[i].posInt = posInt;
            curEntityAll->EntityMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityMerged_arr[i].alive = TRUE;
            //Adding trigger to entity
            curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
            KDebug_Alert("Success for EnemyBullet3!");
            return &curEntityAll->EntityMerged_arr[i];
        }
    }
    KDebug_Alert("Fail for EnemyBullet3...");
    return NULL;
}

    
    


EntityBulletMerged* addNew_BulletSimple(Vect2D_s16 posInt, Vect2D_f16 spd){
    KDebug_Alert("new BulletSimple");
    for(u16 i=0; i<curEntityAll->EntityBulletMerged_size; i++){
        if(!curEntityAll->EntityBulletMerged_arr[i].alive){
            //Copying template of default values
            memcpy(&curEntityAll->EntityBulletMerged_arr[i], &BulletSimple_default, sizeof(EntityBulletMerged));
            //Changing pos
            curEntityAll->EntityBulletMerged_arr[i].posInt = posInt;
            curEntityAll->EntityBulletMerged_arr[i].pos = (Vect2D_f32){FIX32(posInt.x), FIX32(posInt.y)};
            //Changing spd
            curEntityAll->EntityBulletMerged_arr[i].spd = spd;
            //Changing making entity ALIVE
            curEntityAll->EntityBulletMerged_arr[i].alive = TRUE;
            KDebug_Alert("Success for BulletSimple!");
            return NULL;
        }
    }
    KDebug_Alert("Fail for BulletSimple...");
    return NULL;
}



EntityMerged* addNew_EntityMerged(EntityMerged* entity){
	Trigger* foundTrigger = NULL;
	// If entity have trigger
	if(entity->trigger != NULL){
		
		//Find first dead Trigger
		for(u16 i=0; i<curEntityAll->Trigger_size; i++){
			
			//If trigger found
			if(!curEntityAll->Trigger_arr[i].alive){
				KLog_S1("Adding trigger to slot: ", i);
				//Saving reference to trigger in var foundTrigger.
				foundTrigger = &curEntityAll->Trigger_arr[i]; 
				//And adding entity trigger to local trigger storage
				// KLog_S1("entity->trigger->pos.x: ", entity->trigger->pos.x);
				// KLog_S1("entity->trigger->pos.y: ", entity->trigger->pos.y);
				memcpy(&curEntityAll->Trigger_arr[i], entity->trigger, sizeof(Trigger));
				break;
			}
		}
	} else {
		KLog_S1("Cant add a trigger: ", curEntityAll->Trigger_size);
	}
	
	//Find first dead EntityMerged
    for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
		//If EntityMerged found
        if(!curEntityAll->EntityMerged_arr[i].alive){
			KLog_S1("Adding EntityMerged to slot: ", i);
            //Copying entity data from chunk to local entity storage
            memcpy(&curEntityAll->EntityMerged_arr[i], entity, sizeof(EntityMerged));

			
            //Adding trigger to entity
			if(foundTrigger != NULL){
				curEntityAll->EntityMerged_arr[i].trigger = foundTrigger;
			}
            
			//After you found entity, no need to waste resource on useless loop iterations.
			break;
        }
    }

    return NULL;
}

    
    

void entityCheckForBullet(EntityMerged* entity){
	//WARNING
	//If you wanna make an enemy which not desappearing after death, then, make sure that enemy does not call this function, otherwise you will get a MEMORY LEAK!!!
	entity->damaged = FALSE;
	AABB entityTriggerBounds = newAABB(
		entity->trigger->pos.x + entity->trigger->rect.min.x,
		entity->trigger->pos.x + entity->trigger->rect.max.x,
		entity->trigger->pos.y + entity->trigger->rect.min.y,
		entity->trigger->pos.y + entity->trigger->rect.max.y
	);
	for(u16 i = 0; i < curEntityAll->EntityBulletMerged_size; i++){
		EntityBulletMerged* curBullet = &curEntityAll->EntityBulletMerged_arr[i];
		if(!curBullet->alive){
			continue;
		}
		AABB bulletBounds = newAABB(
			curBullet->posInt.x + curBullet->aabb.min.x,
			curBullet->posInt.x + curBullet->aabb.max.x,
			curBullet->posInt.y + curBullet->aabb.min.y,
			curBullet->posInt.y + curBullet->aabb.max.y
		);
		if((bulletBounds.min.x < entityTriggerBounds.max.x) && (bulletBounds.max.x > entityTriggerBounds.min.x)){
			if((bulletBounds.min.y < entityTriggerBounds.max.y) && (bulletBounds.max.y > entityTriggerBounds.min.y)){
				entity->hp -= curBullet->damage;
				entity->damaged = TRUE;
				curBullet->preDeath = TRUE;
				return;
			}
		}
	}
}

void entityCheckForBulletBySize(EntityMerged* entity){
	entity->damaged = FALSE;
	AABB entityTriggerBounds = newAABB(
		entity->posInt.x,
		entity->posInt.x + entity->size.x,
		entity->posInt.y,
		entity->posInt.y + entity->size.y
	);
	for(u16 i = 0; i < curEntityAll->EntityBulletMerged_size; i++){
		EntityBulletMerged* curBullet = &curEntityAll->EntityBulletMerged_arr[i];
		if(!curBullet->alive){
			continue;
		}
		AABB bulletBounds = newAABB(
			curBullet->posInt.x + curBullet->aabb.min.x,
			curBullet->posInt.x + curBullet->aabb.max.x,
			curBullet->posInt.y + curBullet->aabb.min.y,
			curBullet->posInt.y + curBullet->aabb.max.y
		);
		if((bulletBounds.min.x < entityTriggerBounds.max.x) && (bulletBounds.max.x > entityTriggerBounds.min.x)){
			if((bulletBounds.min.y < entityTriggerBounds.max.y) && (bulletBounds.max.y > entityTriggerBounds.min.y)){
				entity->hp -= curBullet->damage;
				entity->damaged = TRUE;
				curBullet->preDeath = TRUE;
				return;
			}
		}
	}
}

void deleteEntityMergedTriggerByInstId(u16 instId){
	for(u16 i = 0; i < curEntityAll->EntityMerged_size; i++){
		EntityMerged* curEntityMerged = &curEntityAll->EntityMerged_arr[i];
		if(!curEntityMerged->alive){
			continue;
		}
		if(curEntityMerged->instId == instId){
			curEntityMerged->trigger->alive = FALSE;
			break;
		}
	}
}

EntityMerged* getEntityMergedByInstId(u16 instId){
	for(u16 i = 0; i < curEntityAll->EntityMerged_size; i++){
		EntityMerged* curEntityMerged = &curEntityAll->EntityMerged_arr[i];
		if(!curEntityMerged->alive){
			continue;
		}
		if(curEntityMerged->instId == instId){
			return curEntityMerged;
		}
	}
	return NULL;
}

u16 getEntityMergedIndInArrByInstId(u16 instId){
	for(u16 i = 0; i < curEntityAll->EntityMerged_size; i++){
		EntityMerged* curEntityMerged = &curEntityAll->EntityMerged_arr[i];
		if(!curEntityMerged->alive){
			continue;
		}
		if(curEntityMerged->instId == instId){
			return i;
		}
	}
	return NULL;
}

u16 getTriggerParrentIndInArr(Trigger* trigger){
	for(u16 i = 0; i < curEntityAll->EntityMerged_size; i++){
		EntityMerged* curEntityMerged = &curEntityAll->EntityMerged_arr[i];
		if(!curEntityMerged->alive){
			continue;
		}
		if(curEntityMerged->trigger == trigger){
			return i;
		}
	}
	return NULL;
}

// EntityMerged* getRandomEntityMergedByDefId(u16 instId){
// 	//DefId = EntityType
// 	//May be will add that in the future
// 	for(u16 i = 0; i < curEntityAll->EntityMerged_size; i++){
// 		EntityMerged* curEntityMerged = &curEntityAll->EntityMerged_arr[i];
// 		if(!curEntityMerged->alive){
// 			continue;
// 		}
// 		if(curEntityMerged->instId == instId){
// 			return curEntityMerged;
// 		}
// 	}
// 	return NULL;
// }


void triggerTypeFunc_changeCameraSpeed(Trigger* trigger, AABB* triggerBounds) {
cameraSpd.x = FIX16(trigger->val1);
cameraSpd.y = FIX16(trigger->val2);

}
void triggerTypeFunc_changeLevel(Trigger* trigger, AABB* triggerBounds) {
PAL_fadeOutAll(3,FALSE);
levelNum = trigger->val1;
loadLevel(levelNum, (Vect2D_s16)getLevelPos(trigger->val2));
}
void triggerTypeFunc_changeLevelv2(Trigger* trigger, AABB* triggerBounds) {
if(!(trigger->activated && !trigger->prevActivated)){
	return;
}
PAL_fadeOutAll(3,FALSE);
//val1 = level_num
//val2 = side_id
//val3 = side_offset
	
	Vect2D_s16 newStartPos;
	levelNum = trigger->val1;
	switch(trigger->val2) // position mode
	{
		case 0: //Left
			newStartPos.x = LevelFull_arr[levelNum].lvl->sizeinPx.x-playerBody.aabb.max.x-trigger->rect.max.x;
			newStartPos.y = playerBody.globalPosition.y-trigger->val3;
			break;
		case 1: //Right
			newStartPos.x = trigger->rect.max.x;
			newStartPos.y = playerBody.globalPosition.y-trigger->val3;
			break;
		case 2: //Up
			newStartPos.x = playerBody.globalPosition.x-trigger->val3;
			newStartPos.y = LevelFull_arr[levelNum].lvl->sizeinPx.y-playerBody.aabb.max.y-trigger->rect.max.y;
			break;
		case 3: //Down
			newStartPos.x = playerBody.globalPosition.x-trigger->val3;
			newStartPos.y = trigger->rect.max.y;
			break;
	}
					
	
	loadLevel(levelNum, (Vect2D_s16)newStartPos);
}
void triggerTypeFunc_deleteEntityMerged(Trigger* trigger, AABB* triggerBounds) {
trigger->alive = FALSE;
deleteEntityMergedTriggerByInstId(trigger->val1);
}
void triggerTypeFunc_drawImageWait(Trigger* trigger, AABB* triggerBounds) {
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

}
void triggerTypeFunc_executeScript(Trigger* trigger, AABB* triggerBounds) {
customScriptArr[trigger->val1]();
}
void triggerTypeFunc_forceDownPlayer(Trigger* trigger, AABB* triggerBounds) {
if((playerBody.globalPosition.y+playerBody.aabb.min.y) < (trigger->pos.y+trigger->rect.max.y)) {
		playerBody.globalPosition.y = trigger->pos.y+trigger->rect.max.y-playerBody.aabb.min.y+1;
		playerBody.velocity.fixY = 0;
	}
}
void triggerTypeFunc_forceLeftPlayer(Trigger* trigger, AABB* triggerBounds) {
if((playerBody.globalPosition.x+playerBody.aabb.max.x) > (trigger->pos.x+trigger->rect.min.x)) {
		playerBody.globalPosition.x = trigger->pos.x+trigger->rect.min.x-playerBody.aabb.max.x-1;
	}
}
void triggerTypeFunc_forceRightPlayer(Trigger* trigger, AABB* triggerBounds) {
if((playerBody.globalPosition.x+playerBody.aabb.min.x) < (trigger->pos.x+trigger->rect.max.x)) {
		playerBody.globalPosition.x = trigger->pos.x+trigger->rect.max.x-playerBody.aabb.min.x;
	}
}
void triggerTypeFunc_forceUpPlayer(Trigger* trigger, AABB* triggerBounds) {
if((playerBody.globalPosition.y+playerBody.aabb.max.y) > (trigger->pos.y+trigger->rect.min.y)) {
		playerBody.globalPosition.y = trigger->pos.y-playerBody.aabb.max.y+1;
		playerBody.curAmountOfJumps = playerBody.maxAmountOfJumps;
		playerBody.velocity.fixY = 0;
		playerBody.onGround = TRUE;
	}
}
void triggerTypeFunc_gotSomething(Trigger* trigger, AABB* triggerBounds) {
trigger->alive = FALSE;
}
void triggerTypeFunc_hurt(Trigger* trigger, AABB* triggerBounds) {

}
void triggerTypeFunc_printMessageNoStopV1(Trigger* trigger, AABB* triggerBounds) {
if(!trigger->activated && trigger->prevActivated){
	//just deactivated
	VDP_setWindowVPos(FALSE, 0);
}

if(trigger->activated && !trigger->prevActivated){
	//just activated
	for(s16 i=0; i<curMessagePacks[trigger->val1].len; i++){
		printMessageNoStop(curMessagePacks[trigger->val1].messages[i].str, FALSE, 1);
	}
}
					
}
void triggerTypeFunc_restartLevel(Trigger* trigger, AABB* triggerBounds) {
PAL_fadeOutAll(3,FALSE);
loadLevel(levelNum, (Vect2D_s16)getLevelPos(trigger->val1));
}
void triggerTypeFunc_showMessage(Trigger* trigger, AABB* triggerBounds) {
trigger->alive = FALSE;
					KLog_S1("curMessagePacks->len: ", curMessagePacks[trigger->val1].len);
					for(s16 i=0; i<curMessagePacks[trigger->val1].len; i++){
						printMessage(curMessagePacks[trigger->val1].messages[i].str);
					}
}
void triggerTypeFunc_solidObject(Trigger* trigger, AABB* triggerBounds) {
const Vect2D_s16 const playerCenterPos = {playerBody.globalPosition.x+((playerBody.aabb.min.x + playerBody.aabb.max.x)>>1), playerBody.globalPosition.y+((playerBody.aabb.min.y + playerBody.aabb.max.y)>>1)};

if(playerCenterPos.x > triggerBounds->max.x) {
	playerBody.globalPosition.x = triggerBounds->max.x - playerBody.aabb.min.x;
  	playerBody.velocity.fixX = 0;
}
else if(playerCenterPos.x < triggerBounds->min.x){
	playerBody.globalPosition.x = triggerBounds->min.x-playerBody.aabb.max.x;
	playerBody.velocity.fixX = 0;
}
if(playerCenterPos.y < triggerBounds->min.y){
	playerBody.globalPosition.y = trigger->pos.y-playerBody.aabb.max.y+1;
	playerBody.curAmountOfJumps = playerBody.maxAmountOfJumps;
	playerBody.onGround = TRUE;
}
else if(playerCenterPos.y > triggerBounds->max.y) {
	playerBody.globalPosition.y = trigger->pos.y+trigger->rect.max.y-playerBody.aabb.min.y+1;
	playerBody.velocity.fixY = 0;
}
}
void triggerTypeFunc_solidObjectOneWayUp(Trigger* trigger, AABB* triggerBounds) {
const Vect2D_s16 const playerCenterPos = {playerBody.globalPosition.x+((playerBody.aabb.min.x + playerBody.aabb.max.x)>>1), playerBody.globalPosition.y+((playerBody.aabb.min.y + playerBody.aabb.max.y)>>1)};

if(playerCenterPos.y <= triggerBounds->min.y){
	if(playerBody.velocity.fixY >= 0){
		// playerBody.velocity.fixY = 0;
		playerBody.globalPosition.y = (trigger->pos.y-playerBody.aabb.max.y)+1;
		playerBody.curAmountOfJumps = playerBody.maxAmountOfJumps;
		playerBody.onGround = TRUE;
	}
}


}
void triggerTypeFunc_solidObjectOneWayUpTransferSpeed(Trigger* trigger, AABB* triggerBounds) {
const Vect2D_s16 const playerCenterPos = {playerBody.globalPosition.x+((playerBody.aabb.min.x + playerBody.aabb.max.x)>>1), playerBody.globalPosition.y+((playerBody.aabb.min.y + playerBody.aabb.max.y)>>1)};

if(trigger->val1 == -1){
	trigger->val1 = getTriggerParrentIndInArr(trigger);
}

if(playerCenterPos.y <= triggerBounds->min.y){
	if(playerBody.velocity.fixY >= 0){
		const EntityMerged* parrent = &curEntityAll->EntityMerged_arr[trigger->val1];
		playerBody.velocity.bufferFixX += parrent->spd.x >> 4;
		playerBody.velocity.bufferFixY += parrent->spd.y >> 4;

		// playerBody.velocity.fixY = 0;
		playerBody.globalPosition.y = trigger->pos.y-playerBody.aabb.max.y+1;
		playerBody.curAmountOfJumps = playerBody.maxAmountOfJumps;
		playerBody.onGround = TRUE;
	}
}
	


}
void triggerTypeFunc_solidObjectTransferSpeed(Trigger* trigger, AABB* triggerBounds) {
const Vect2D_s16 const playerCenterPos = {playerBody.globalPosition.x+((playerBody.aabb.min.x + playerBody.aabb.max.x)>>1), playerBody.globalPosition.y+((playerBody.aabb.min.y + playerBody.aabb.max.y)>>1)};

if(playerCenterPos.x > triggerBounds->max.x) {
	playerBody.globalPosition.x = triggerBounds->max.x - playerBody.aabb.min.x;
  	playerBody.velocity.fixX = 0;
}
else if(playerCenterPos.x < triggerBounds->min.x){
	playerBody.globalPosition.x = triggerBounds->min.x-playerBody.aabb.max.x;
	playerBody.velocity.fixX = 0;
}
if(playerCenterPos.y < triggerBounds->min.y){
	playerBody.globalPosition.y = trigger->pos.y-playerBody.aabb.max.y+1;
	playerBody.curAmountOfJumps = playerBody.maxAmountOfJumps;
	playerBody.onGround = TRUE;
}
else if(playerCenterPos.y > triggerBounds->max.y) {
	playerBody.globalPosition.y = trigger->pos.y+trigger->rect.max.y-playerBody.aabb.min.y+1;
	playerBody.velocity.fixY = 0;
}

//Transfer speed

//If, object index in EnetityMertged_arr is not found, then find it 
if(trigger->val1 == -1){
	trigger->val1 = getTriggerParrentIndInArr(trigger);
}

const EntityMerged* parrent = &curEntityAll->EntityMerged_arr[trigger->val1];
playerBody.velocity.bufferFixX += parrent->spd.x >> 4;
playerBody.velocity.bufferFixY += parrent->spd.y >> 4;

}
void(* triggerTypeFuncArr[])(Trigger*, AABB*) = {triggerTypeFunc_changeCameraSpeed, triggerTypeFunc_changeLevel, triggerTypeFunc_changeLevelv2, triggerTypeFunc_deleteEntityMerged, triggerTypeFunc_drawImageWait, triggerTypeFunc_executeScript, triggerTypeFunc_forceDownPlayer, triggerTypeFunc_forceLeftPlayer, triggerTypeFunc_forceRightPlayer, triggerTypeFunc_forceUpPlayer, triggerTypeFunc_gotSomething, triggerTypeFunc_hurt, triggerTypeFunc_printMessageNoStopV1, triggerTypeFunc_restartLevel, triggerTypeFunc_showMessage, triggerTypeFunc_solidObject, triggerTypeFunc_solidObjectOneWayUp, triggerTypeFunc_solidObjectOneWayUpTransferSpeed, triggerTypeFunc_solidObjectTransferSpeed, };


void checkTriggerForPlayer(Trigger* trigger){
	if(!trigger->alive){
		return;
	}
	AABB triggerBounds = newAABB(
		trigger->pos.x + trigger->rect.min.x,
		trigger->pos.x + trigger->rect.max.x,
		trigger->pos.y + trigger->rect.min.y,
		trigger->pos.y + trigger->rect.max.y
	);
	//KLog_S1("-----------", 0);
	//KLog_S1("trigger->activated: ", trigger->activated);
	//KLog_S1("trigger->prevActivated: ", trigger->prevActivated);
	trigger->prevActivated = trigger->activated;
	if((playerBounds.min.x < triggerBounds.max.x) && (playerBounds.max.x > triggerBounds.min.x) && (playerBounds.min.y < triggerBounds.max.y) && (playerBounds.max.y > triggerBounds.min.y)){
		trigger->activated = TRUE;
			// KLog_S1("trigger->type: ", trigger->type);
			// KLog_S1("trigger->val1: ", trigger->val1);
			// KLog_S1("trigger->val2: ", trigger->val2);
			// KLog_S1("trigger->val3: ", trigger->val3);
		triggerTypeFuncArr[trigger->type](trigger, &triggerBounds);
	} else {
		trigger->activated = FALSE;
		if(trigger->prevActivated) {
			triggerTypeFuncArr[trigger->type](trigger, &triggerBounds);
		}
	}
	
}

void showBulletSimple(EntityBulletMerged* entity){
    if(!entity->alive){
		return;
	}
	if(entity->preDeath){
		if(entity->spr)	SPR_releaseSprite(entity->spr);
		//$showTriggerRects_releaseSprite$

		entity->alive = FALSE;
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		entity->preDeath = TRUE;
		return;
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSprite(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			//$showTriggerRects_addSprite$
		}
        if(entity->sprDef) {
			SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);

			//Update position
			entity->pos.x += entity->spd.x;
			entity->pos.y += entity->spd.y;
			entity->posInt.x = fix32ToInt(entity->pos.x);
			entity->posInt.y = fix32ToInt(entity->pos.y);
		}
		//$showTriggerRects_moveSprite$
		
		entity->onScreen = TRUE;
    }
}
void(* showEntityBulletFuncArr[])(EntityBulletMerged*) = {showBulletSimple, };


void showEntitySimple(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		if(entity->onScreen) {
			if(entity->sprDef) {
				SPR_releaseSprite(entity->spr);
				
			}
		}
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			
		}
        if(entity->sprDef) SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);
		//$showTriggerRects_moveSprite$
		
		entity->onScreen = TRUE;
    }
}
void showEnemy1(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
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
void showEnemy2(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
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

		entity->val1--;
		if(entity->val1 <= 0) {
			entity->val1 = 60;
			addNew_EnemyBullet1(entity->posInt, toPointSpd(entity->posInt, playerBody.globalPosition, FIX16(3.0)));
		}
		
		
		entity->onScreen = TRUE;
    }
}
void showEnemy3(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	entity->pos.x += entity->spd.x;
		entity->pos.y += entity->spd.y;
		entity->posInt.x = fix32ToInt(entity->pos.x);
		entity->posInt.y = fix32ToInt(entity->pos.y);

	Vect2D_s16 pos1_int = getLevelPos(1);
		Vect2D_s16 pos2_int = getLevelPos(2);

		if(entity->posInt.y > pos2_int.y) {
			entity->spd.y = FIX32(-2);
		}
		if(entity->posInt.y < pos1_int.y) {
			entity->spd.y = FIX32(2);
		}

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
			entity->spd.y = FIX32(2);
			
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

		
		entity->trigger->pos.x = entity->posInt.x;
		entity->trigger->pos.y = entity->posInt.y;

		

		
		entity->onScreen = TRUE;
    }
}
void showEnemyBullet1(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
		entity->trigger->alive = FALSE;
		return;
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			
		}
        if(entity->sprDef) SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);
		//$showTriggerRects_moveSprite$

		entity->pos.x += entity->spd.x;
		entity->pos.y += entity->spd.y;
		entity->posInt.x = fix32ToInt(entity->pos.x);
		entity->posInt.y = fix32ToInt(entity->pos.y);
		entity->trigger->pos.x = entity->posInt.x;
		entity->trigger->pos.y = entity->posInt.y;
		
		entity->onScreen = TRUE;
    }
}
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
			
		}

		entity->trigger->pos.x = playerBody.globalPosition.x;
		entity->trigger->pos.y = playerBody.globalPosition.y;

		//$showTriggerRects_moveSprite$
		
		entity->onScreen = TRUE;
    }
}
void showBoss1(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		SPR_releaseSprite(entity->spr);
		

		entity->alive = FALSE;
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		if(entity->onScreen) {
			if(entity->sprDef) {
				SPR_releaseSprite(entity->spr);
				
			}
		}
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(PAL0, 11, FALSE, FALSE));
			entity->spd.y = FIX32(2);
			
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

		entity->timer++;

		if(entity->timer > 120){
			addNew_Boss1Bullet(entity->posInt, toPointSpd(entity->posInt, playerBody.globalPosition, FIX16(1.5)));
			entity->timer = 0;
		}
		//KLog_S1("Boss state: ", entity->state);
		Vect2D_s16 pos1_int = getLevelPos(3);
		Vect2D_s16 pos2_int = getLevelPos(4);

		if(entity->posInt.y > pos2_int.y) {
			entity->spd.y = FIX32(-2);
		}
		if(entity->posInt.y < pos1_int.y) {
			entity->spd.y = FIX32(2);
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
void showBoss2(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		SPR_releaseSprite(entity->spr);
		

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
				
			}
			
		}
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			entity->activated = TRUE;
			
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
void showBoss3(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		SPR_releaseSprite(entity->spr);
		

		entity->alive = FALSE;
		return;
	}
    s16 posX_OnCam = entity->posInt.x-cameraPosition.x;
	s16 posY_OnCam = entity->posInt.y-cameraPosition.y;

	//$updatePosition_Entity_always$
	if ((posX_OnCam < -entity->size.x) || (posX_OnCam > 320) || (posY_OnCam < -entity->size.y) || (posY_OnCam > 224)) {
		if(entity->onScreen) {
			if(entity->sprDef) {
				SPR_releaseSprite(entity->spr);
				
			}
			
		}
		entity->onScreen = FALSE;
		
	}
    else
    {
		if(!entity->onScreen) {
			if(entity->sprDef) entity->spr = SPR_addSpriteSafe(entity->sprDef, posX_OnCam, posY_OnCam, TILE_ATTR(entity->pal, 11, FALSE, FALSE));
			
			VDP_setWindowVPos(FALSE, 1);
			entity->spd.x = FIX32(-2);
			entity->trigger->pos.x = entity->posInt.x;
			entity->trigger->pos.y = entity->posInt.y;
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

		entity->timer++;

		if(entity->timer > 120){
			Vect2D_s16 pos3_int = getLevelPos(3);
			pos3_int.y = playerBody.globalPosition.y;
			addNew_Boss1Bullet(pos3_int, (Vect2D_f16){FIX32(-2), 0});
			entity->timer = 0;
		}

		Vect2D_s16 pos4_int = getLevelPos(4);
		Vect2D_s16 pos5_int = getLevelPos(5);

		if(entity->posInt.x > pos5_int.x) {
			entity->spd.x = FIX32(-2);
		}
		if(entity->posInt.x < pos4_int.x) {
			entity->spd.x = FIX32(2);
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
			levelNum = 4;
			loadLevel(levelNum, (Vect2D_s16)getLevelPos(0));
			return;
		}
		
		entity->onScreen = TRUE;
    }
}
void showBoss1Bullet(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	EntityMerged* curSlave;
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		for(u16 curSlaveInd=0; curSlaveInd<entity->slave_amount; curSlaveInd++){
curSlave = entity->slaves_arr[curSlaveInd];
curSlave->trigger->alive = FALSE;
}

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
			if(!entity->activated) {
entity->slaves_arr[0] = addNew_EnemyBullet2((Vect2D_s16){-8+entity->posInt.x, 41+entity->posInt.y}, (Vect2D_f16){0, 0});
entity->slaves_arr[1] = addNew_EnemyBullet2((Vect2D_s16){-37+entity->posInt.x, 41+entity->posInt.y}, (Vect2D_f16){0, 0});
entity->slaves_arr[2] = addNew_EnemyBullet2((Vect2D_s16){-52+entity->posInt.x, 21+entity->posInt.y}, (Vect2D_f16){0, 0});
entity->slaves_arr[3] = addNew_EnemyBullet2((Vect2D_s16){-42+entity->posInt.x, -36+entity->posInt.y}, (Vect2D_f16){0, 0});
entity->slaves_arr[4] = addNew_EnemyBullet2((Vect2D_s16){25+entity->posInt.x, -60+entity->posInt.y}, (Vect2D_f16){0, 0});
entity->slaves_arr[5] = addNew_EnemyBullet2((Vect2D_s16){48+entity->posInt.x, -19+entity->posInt.y}, (Vect2D_f16){0, 0});
entity->activated = TRUE;
}

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
void showEnemyBullet2(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
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
			
		}
        if(entity->sprDef) SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);
		//$showTriggerRects_moveSprite$
		
		entity->onScreen = TRUE;
    }
}
void showEnemyBullet3(EntityMerged* entity){
    if(!entity->alive){
		return;
	}
	if(!entity->trigger->alive){
		entity->alive = FALSE;
		if(entity->spr) SPR_releaseSprite(entity->spr);
		
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
			
		}
        if(entity->sprDef) SPR_setPosition(entity->spr, posX_OnCam, posY_OnCam);
		//$showTriggerRects_moveSprite$
		
		entity->onScreen = TRUE;
    }
}
void(* showEntityFuncArr[])(EntityMerged*) = {showEntitySimple, showEnemy1, showEnemy2, showEnemy3, showEnemyBullet1, showRunOnScreen, showBoss1, showBoss2, showBoss3, showBoss1Bullet, showEnemyBullet2, showEnemyBullet3, };


void showEntityBulletMerged(EntityBulletMerged* entity){
	showEntityBulletFuncArr[entity->entityType](entity);
}

void showEntityMerged(EntityMerged* entity){
	showEntityFuncArr[entity->entityType](entity);
}


void showEntityAll(){
	for(u16 i=0; i<curEntityAll->EntityBulletMerged_size; i++){
		showEntityBulletMerged(&curEntityAll->EntityBulletMerged_arr[i]);
	}
	for(u16 i=0; i<curEntityAll->EntityMerged_size; i++){
		showEntityMerged(&curEntityAll->EntityMerged_arr[i]);
	}
}
