#include <iostream>

using namespace std;

int main()
{
    //Begin Variables
    double num1;
    int op;
    double num2;
    //End Variables
    
    //asks user for number
    cout <<"Enter a number: ";
    //stores first number as num1
    cin >> num1;
    
    //askes user for operator
    cout << "Enter an operator\n[1]Multiply\n[2]Divide\n[3]Add\nEnter Choice: ";
    //stores operator as op
    cin >> op;
    
    //asks for second number
    cout << "Enter a number";
    //stores second number as num2
    cin >> num2;
    
    if(op == 1){
        cout << "Answer: " << num1 * num2;
    }
    
    else if(op == 2){
        cout << "Answer: " << num1 / num2;
    }
    
    else if(op == 3){
        cout << "Answer: " << num1 + num2;
        
    }
    
    else{
        cout << "Invalid Operator/Number";
    }
    return 0;
}

