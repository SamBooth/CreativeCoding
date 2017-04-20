//
//  Spell.hpp
//  Animate
//
//  Created by Sam Booth on 4/9/17.
//
//

#pragma once
#include "ofMain.h"

class Spell {
    
public:
    
    Spell(); //Constructor
    
    void setup();
    void update(int spellXPos);
    void drawSpell(int spellXPos, int spellYPos);
    
    void updateLeft(int spellLeftXPos);
    void drawSpellLeft(int spellLeftXPos, int spellLeftYPos);
    
    
    ofImage spellRight;
    ofImage spellLeft;
};
