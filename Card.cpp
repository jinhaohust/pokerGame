//
//  Card.cpp
//  chapter18_自动洗发牌
//
//  Created by Moon on 2020/12/5.
//  Copyright © 2020 Moon. All rights reserved.
//

#include <stdio.h>
#include "Card.h"
#include <string>
using namespace std;

string Card::cardFace[13] = {"ace" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten" , "jack" , "queen" , "king"};
string Card::cardSuit[4] = {"heart" , "spade" , "club" , "diamond"};

Card::Card(int fa, int su)
{
    setCardFace(fa);
    setCardSuit(su);
}

void Card::setCardFace(int fa)
{
    face = fa;
}
void Card::setCardSuit(int su)
{
    suit = su;
}
int Card::getCardFace() const
{
    return face;
}
int Card::getCardSuit() const
{
    return suit;
}
string Card::toString() const
{
    string f = cardFace[getCardFace() - 1];
    string s = cardSuit[getCardSuit() - 1];
    string faceAndSuit = f + " " + "of" + " " + s;
    //return f.append(s);
    return faceAndSuit;
}
