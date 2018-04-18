//
//  main.cpp
//  recursion2
//
//  Created by Stephanie Marin Velasquez on 2/22/16.
//  Copyright © 2016 Stephanie Marin Velasquez. All rights reserved.
//

#include<iostream>

using namespace std;

void InsertionSort( int n, int a[])
{
    int temp, j;
    if (n>1)
    {
        InsertionSort((n-1), a);
    }
    j=n-1;
    while(j>=0 && a[j]< a[j-1])
    {
        temp =  a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        j--;
    }
    
}

int main(){
    
    int a[8], n;
    cout<<"enter the number of digits: ";
    cin>>n;
    int *pa= new int [n];
    for(int i=0; i<n;i++){
        cin>> a[i];
        pa[i]=a[i];
    }
    cout<< "Before: ";
    for(int i=0; i<n; i++)
        cout<< a[i]<< " ";
    
    ///call sorting function
    InsertionSort(n,pa);
    
    ////// output the sorted numbers
    cout<< "\n \nAfter: ";
    for(int i=0; i<n; i++)
        cout<< pa[i]<< " ";
    cout<<endl;
}