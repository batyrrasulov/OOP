//
//  Load.h
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#ifndef Load_h
#define Load_h

#include <iostream>
#include <fstream>
#include <math.h>
#include "Enemy.h"
#include "Adventurer.h"
#include "Island.h"

using namespace std;

class Load {
private:
    Adventurer* slayerSave;
    Enemy* badGuySave;
    Island saver;
public:
    //initialize the pointers to saver class respectively
    Load(Adventurer * x, Enemy* y): saver(x, y) {
        slayerSave = x;
        badGuySave = y;
    }
    void saveProgress();
    void uploadProgress();
    void deleteOldStats();
};

#endif /* Load_h */
