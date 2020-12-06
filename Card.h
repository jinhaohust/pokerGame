//
//  Card.h
//  chapter18_自动洗发牌
//
//  Created by Moon on 2020/12/5.
//  Copyright © 2020 Moon. All rights reserved.
//

#include <string>
using namespace std;

#ifndef Card_h
#define Card_h

class Card
{
public:
    Card(int face, int suit);
    void setCardFace(int);
    void setCardSuit(int);
    int getCardFace() const;
    int getCardSuit() const;
    string toString() const;
private:
    int face;//1-13
    int suit;//1-4
    
    static string cardFace[13];
    static string cardSuit[4];
};

#endif /* Card_h */
