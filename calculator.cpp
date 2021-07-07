#include <iostream>

using namespace std;

int main()
{
    char op;
    char op1 = '+';
    char op2 = '-';
    char op3 = '*';
    char op4 = '/';
    float first_number;
    float second_number;

    cout<<"Enter The First Number: ";
    cin >> first_number;
    cout<<"Enter The Arithmetic Operator: ";
    cin >> op;
    cout<<"Enter the Second Number: ";
    cin >> second_number;
    float add = first_number + second_number;
    float sub = first_number - second_number;
    float div = first_number/second_number;
    float mul = first_number * second_number;

    if (op == op1){
        cout<<"The Answer is: " <<add <<endl;
    
    }
    else if (op == op2){
        cout<<"The Answer is: " <<sub <<endl;

    }
    else if (op == op3){
        cout<<"The Answer is: " <<mul <<endl;

    }
    else if(op == op4){
        cout<<"The Answer is: " <<div <<endl;

    }
    else{
        cout<<"Unknown Operator";
    }
    cout<<"Thanks for Using | Dev : str1ng.exe";
    return 0;





}
