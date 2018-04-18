//
//  Humei Huo
//  pointer.cpp
//  PointerStack

/*
 #include <iostream>
using namespace std;

#include "pointer.h"

pointer::~pointer()
{
    stackNode *delNode;
    while (top)
    {
        delNode = top;
        top = top->next;
        delete delNode;
    }
}


void pointer::push(int x)
{
    stackNode *newNode = new stackNode;
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

int pointer::getTop()const
{
    int temp;
    if (top != 0)
    {
        temp=top->data;
    }
    return temp;
}

void pointer::pop(int &x)
{
    if (top!=0 )
    {
        x = top->data;
        stackNode *delNode;
        delNode = top;
        top = top->next;
        delete delNode;
    }
}
*/


