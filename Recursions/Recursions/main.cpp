//  main.cpp
//  Recursions
//  Professor: Yumai Huo
//  Stephanie Marin Velasquez
//  Created by Stephanie Marin Velasquez on 2/10/16.


#include <iostream>
#include<cmath>
using namespace std;
int cnt=0;

double expo(double bas, int pow)
{
    if(pow==0)
    {
        return 1;
    }
    cnt++;
    return bas *expo(bas, pow-1);
    
}

int main()
{
    double base;
    int exp;
    cout<< "Input the base: ";
    cin>> base;
    cout<< "Input the exponent: ";
    cin>>exp;
    
    cout<< "The total is "<< expo(base, exp)<<endl;
    cout<< "Excecuted "<< cnt <<" Times"<<endl;
    
    
    //int multi;
    //multi=pow(2,8);
   // cout<<" \n pow: "<<multi<<endl;
    
    return 0;
}

