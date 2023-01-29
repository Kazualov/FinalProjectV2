#include "CharacterMaleBuilder.h"

void CharacterMaleBuilder::setHairstyle(string str)
{

}

void CharacterMaleBuilder::setClothes(string str)
{
    int random = 2;
    while (random != 2 && random != 4)
    {
        int n = 7;
        int random = rand() % n + 1;
    }
    
    ifstream in("Files\\Clothes.csv");
    string result;

    for (int i = 0; i < random; i++) {
        getline(in, result);
    }
 
}

void CharacterMaleBuilder::setTorso(string str)
{
	ch1.setTorso("мужской");
}

void CharacterMaleBuilder::setGender(string str)
{
	ch1.setGender("мужской");
}

void CharacterMaleBuilder::setShoes(string str)
{

}
