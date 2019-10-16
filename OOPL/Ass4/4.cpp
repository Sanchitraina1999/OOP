/*
Write a C++ program to create a calculator for an arithmetic operator (+, -, *,  /). 
The  program  should  take  two  operands  from  user  and  performs  the operation  on 
those  two  operands  depending  upon  the  operator  entered  by user. 
Use  a  switch  statement  to  select  the  operation.  Finally,  display  the result.
Some sample interaction with the program might look like this:Enter first number, operator, 
second number: 10 / 3Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/
#include<iostream>
using namespace std;
class calculator{
        int a,b;
        char op;
    public:
        void add(int, int);
        void sub(int, int);
        void mul(int, int);
        void div(int, int);
};

void calculator::add(int a, int b){
    cout<<a+b<<endl;
}

void calculator::sub(int a, int b)
{
    cout << a - b << endl;
}

void calculator::mul(int a, int b)
{
    cout << a * b << endl;
}

void calculator::div(int a, int b)
{
    cout << a / b << endl;
}

int main(){
    int a,b;
    char op;
    calculator c;
    hell:
    cout<<"Enter two numbers and then the operator for which you want to operate";
    cin>>a>>b>>op;
    switch(op){
        case '+':
            c.add(a,b);
            break;
        case '*':
            c.mul(a, b);
            break;
        case '/':
            c.div(a, b);
            break;
        case '-':
            c.sub(a, b);
            break;
    }
    cout<<"Continue(y/n)?";
    char yn;
    cin>>yn;
    if(yn=='y')
        goto hell;
    return 0;
}