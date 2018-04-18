//
//  ArrayEv.cpp
//  PointerStack
//
//  Created by Stephanie Marin Velasquez on 5/26/16.
//  Copyright © 2016 Stephanie Marin Velasquez. All rights reserved.
//

#include "ArrayEv.h"
#include <iostream>
using namespace std;



void evaluationPostfix::push(int x)
{
    if (top < max)
    {
        top++;
        data[top]=x;
    }
    
    else cout << "\nERROR" << endl;
    
    
}

int evaluationPostfix::getTop()const
{
    return data[top];
}

void evaluationPostfix::pop(int &x)
{
    if (top > -1)
    {
        x = data[top];
        top--;
    }
}