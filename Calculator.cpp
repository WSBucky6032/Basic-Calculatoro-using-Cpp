// SGP Workshop 1 date:-12-07-2022
// Aditya Uttam Patharwat
// Question:- Write a program for addition, subtraction, multiplication, division and square entered number/numbers using function in c++.

#include <iostream>

using namespace std;

int add(int a, int b){
 int c = a+b;
    return c;
}

int sub(int a, int b){
 int c = a-b;
    return c;
}

int mul(int a, int b){
 int c = a*b;
    return c;
}

int divi(int a, int b){
 int c = a/b;
    return c;
}

int sq(int a){
 int c = a*a;
    return c;
}


int main()
{
    float num1, num2;
    int choice;
    do
    {
    

        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Square\n\n";
        cout<<"Enter Your Choice: ";
         while(!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice, try again:-\n";
           
        }
        
        if(choice>=1 && choice<=4)
        {
        cout<<"Enter first number:- "<<endl;
        while(!(cin >> num1)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid number, try again:-\n";
        }

        cout<<"Enter second number:- "<<endl;
        while(!(cin >> num2)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid number, try again:-\n";
        }
        }
        else if (choice==5)
        {
            cout<<"Enter one Number:- ";
            while(!(cin >> num1)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid number, try again:-\n";
        }
        }
        else{
            cout<<"Invalid Choice!!, please eneter a valid option\n";
        
        }
    } while (choice>5);
    
        switch(choice)
        {
            case 1:
            cout<<"The Addition of entered two numbers is "<<add(num1, num2);

                break;
            case 2:
            cout<<"The Subtraction of entered two numbers is "<<sub(num1, num2);
                break;
            case 3:
            cout<<"The Multiplication of entered two numbers is "<<mul(num1, num2);
                break;
            case 4:
            cout<<"The Division of entered two numbers is "<<divi(num1, num2);
                break;
            case 5:
            cout<<"The Square of entered numbers is "<<sq(num1);
                break;

            default:
                cout<<"\nInvalid Choice!";
                break;
        }
       
}