//
//  pointer.h
//  PointerStack
//
//  Created by Stephanie Marin Velasquez on 5/23/16.
//  Copyright © 2016 Stephanie Marin Velasquez. All rights reserved.
//
/*
#ifndef pointer_h
#define pointer_h

#include <iostream>
using namespace std;


class pointer
{
    
public:
    pointer() :top(0){};
    ~pointer();
    void push(int x);
    void pop(int &x);
    int getTop()const;
    
private:
    struct stackNode
    {
        int data;
        stackNode *next;
    };
    stackNode *top;
};

#endif /* pointer_h */
