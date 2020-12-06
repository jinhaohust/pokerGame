//
//  main.cpp
//  chapter18_自动洗发牌
//
//  Created by Moon on 2020/12/5.
//  Copyright © 2020 Moon. All rights reserved.
//

#include <iostream>
#include <string>
#include "Card.h"
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Card card1(3 , 2);
    cout << "Card is : " << card1.toString() << endl;
    //cout << "suit is : " << card1.getCardSuit() << endl;
    return 0;
}
