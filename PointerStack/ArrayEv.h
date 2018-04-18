//
//  ArrayEv.h
//  PointerStack
//
//  Created by Stephanie Marin Velasquez on 5/26/16.
//  Copyright © 2016 Stephanie Marin Velasquez. All rights reserved.
//

#ifndef ArrayEv_h
#define ArrayEv_h

const int MAX = 50;

class evaluationPostfix
{
    
public:
    evaluationPostfix() :max(MAX), top(-1){};
    //~evaluationPostfix();
    void push(int x);
    void pop(int &x);
    int getTop()const;
private:
    int data[MAX];
    int max;
    int top;
    
    
};


#endif /* ArrayEv_h */
