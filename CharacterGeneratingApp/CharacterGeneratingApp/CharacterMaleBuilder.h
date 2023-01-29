#pragma once
#include<fstream>
#include "CharacterBuilder.h"

string splitter(string str)
{

}

class CharacterMaleBuilder : public CharacterBuilder
{
    string text;
    Character* ch1;
public:
    CharacterMaleBuilder() : CharacterBuilder() {};
    void setHairstyle(string str);
    void setClothes(string str);
    void setTorso(string str);
    void setGender(string str);
    void setShoes(string str);
};

