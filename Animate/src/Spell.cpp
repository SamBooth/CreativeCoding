//
//  Spell.cpp
//  Animate
//
//  Created by Sam Booth on 4/9/17.
//
//

#include "Spell.hpp"
#include "ofApp.h"

Spell::Spell(){
    
}

void Spell::setup(){
    spellRight.load("ballRight.gif");
    spellLeft.load("ballLeft.gif");
}

void Spell::update(int spellRightXPos){
    spellRightXPos += 10;
}

void Spell::drawSpell(int spellXPos, int spellYPos){
    spellRight.draw(spellXPos, spellYPos,250,100);
}

void Spell::updateLeft(int spellLeftXPos){
    spellLeftXPos -= 10;
}

void Spell::drawSpellLeft(int spellLeftXPos, int spellLeftYPos){
    spellLeft.draw(spellLeftXPos, spellLeftYPos, 250,100);
}
