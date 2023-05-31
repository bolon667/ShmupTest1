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
