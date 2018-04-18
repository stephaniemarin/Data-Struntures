//
//  main.cpp
//  PointerStack
//  Humei Huo


#include <iostream>
#include <string>
#include "pointer.h"

using namespace std;





//////////////////////////////////////////////////////////////////////////////////////

int postfixEvaluation(int num1, int num2, char ope);

int main()
{
    pointer postfix;
    
    char newinput [50], charnumber[20];
    int len,  j=0,numberConverter, num1, num2 ;
    
    cout << "\nPlease enter the postfix to evaluete: ";
    cin.get(newinput,50);
    
    len = strlen(newinput);//size of the string
    
    for (int i = 0;i < len;i++)
    {
        if (newinput[i] >= '0'&&newinput[i] <= '9')//the character is a number, keep group them
        {
            charnumber[j] = newinput[i];
            j++;
        }
        else if (newinput[i] == ' ')
        {
            if (j > 0)
            {
                charnumber[j] = '\0';//end the string with new line
                numberConverter = atoi(charnumber);//convert the string to integer
                postfix.push(numberConverter);
                j= 0;
            }
        }
        else
        {
            postfix.pop(num2);//get the value from the stack
            postfix.pop(num1);//get the value from the stack
            
            int resultOperation = postfixEvaluation(num1, num2, newinput[i]);
            postfix.push(resultOperation);
            
        }
        
    }
    
    
    cout << "\n\nThe answer is: " << postfix.getTop() << endl<<endl;
    
    system("pause");
    
    return 0;
}

int postfixEvaluation(int num1, int num2, char ope)
{//checking which operation will be executed
    
    int result = 0;
    
    switch (ope) 
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
            
    }
    
    return result;
}



