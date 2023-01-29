#pragma once
#include <string>
#include"Character.h"
class CharacterBuilder
{
public:
    Character* ch1;
    CharacterBuilder() {};
    Character* getCharacter()
    {
        return ch1;
    }
    virtual void setHairstyle(string str) = 0;
    virtual void setClothes(string str) = 0;
    virtual void setTorso(string str) = 0;
    virtual void setGender(string str) = 0;
    virtual void setShoes(string str) = 0;
    virtual Character getResult() = 0;
};

