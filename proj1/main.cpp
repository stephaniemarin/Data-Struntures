//
//  main.cpp
//  proj1
//
//  Created by Stephanie Marin Velasquez on 2/4/16.
//  Copyright © 2016 Stephanie Marin Velasquez. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<iomanip>


using namespace std;

void getInfo();


//////Functions///

const int size=10;
int winner;

struct data
{
    int lines=0;
    int comts=0;
};

data programmers[size];



void  getInfo(ifstream &intext)
{
    int name, line, commt;
    
    cout<<"Programmer\t Lines of Code\t Lines of Comments"<<endl;
    
    while (!intext.eof())
    {
        
            intext>>name>> line>> commt;
            cout<<setw(5)<<name<<setw(15)<<line<<setw(15)<<commt<<endl;
            programmers[name-1].lines+=line;
            programmers[name-1].comts+=commt;
        
            if (programmers[name-1].lines >=1000)
            {
                cout<< "The programmer that won was "<< name << " with a total lines of code of "<< programmers[name-1].lines << endl;
                    winner=name-1; // Number of winner
                    break;
            }
        
        
    }

    
}

void gettotal()
{
    cout<<endl<<endl;
    cout<<"Programmer\t Lines of Code\t Lines of Comments"<<endl;
    int linesAdd=0, k=0;

       for (int r=0; r<=size; r++)
    {
        //Total for programmers
        
        cout<<setw(5)<< r+1 << setw(15) << programmers[r].lines<<setw(15)<<programmers[r].comts<<endl;
        
        linesAdd+= programmers[r].lines;
        
        if((r<=size) && (linesAdd < programmers[winner].lines))
        {k++;
        }
    }
    cout<< "\n  It took programmers 1 through "<< k +1 <<" to produce more than the winner\n "<<endl<<endl;
    

    
}



int main()
{
    
    
    ifstream inData;
    inData.open("/Users/Nia/Documents/csc326/proj1/proj1/Program11.txt");
    if (!inData)
    {
        cout<<"Error! File not found!"<<endl;
        return 1;
    }
    
    
    getInfo(inData);// call function for print the original table
    gettotal();
    inData.close();// close txt data
    return 0;
    
}
