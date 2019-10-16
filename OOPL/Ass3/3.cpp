/*Implement a class Quadratic that represents degree two polynomials i.e., polynomials of type ax2 +bx+c.
The class will require three data members corresponding to a, b and c.
Implement the following operations: 
. A constructor (including a default constructor which creates the 0 polynomial).
. Overloaded operator+ to add two polynomials of degree 2.
. Overloaded << and >> to print and read polynomials. To do this, you will need to decide what you want your input and output format to look like.
. A function eval that computes the value of a polynomial for a given value of x.
. A function that computes the two solutions of the equation ax2 +bx+ c=0.*/
#include<iostream>
#include<math.h>
using namespace std;
class Quadratic{
int a,b,c;
public:
    Quadratic(){
        a=0;
        b=0;
        c=0;
    }
    friend Quadratic operator+(Quadratic&, Quadratic&);
    friend ostream &operator<<(ostream&, Quadratic&);
    friend istream &operator>>(istream&, Quadratic&);
    void eval(int);
    void solutions();
};

void Quadratic::eval(int x){
    cout<<"The value of f(x) for x = "<<x<<" is: "<<(a*x*x) + (b*x) + (c)<<endl;
}

void Quadratic::solutions(){
    int discriminant, sol1, sol2;
    discriminant = sqrt(pow(b, 2) - 4 * a * c);
    if (discriminant >= 0)
    {
        sol1 = (-b + discriminant) / (2 * a);
        sol2 = (-b - discriminant) / (2 * a);
        cout << "The solutions of the equations are: " << sol1 << " and " << sol2 << endl;
    }
    else
    {
        int real1, real2, imag1, imag2;
        real1 = (-b) / (2 * a);
        real2 = real1;
        imag1 = discriminant / (2 * a);
        imag2 = discriminant / (2 * a);
        cout << "The solutions of the equations are: " << real1 << " + " << imag1 << " i"
             << " and " << real2 << " - " << imag2 << " i" << endl;
    }
}

Quadratic operator+(Quadratic &q1, Quadratic &q2){
    Quadratic temp;
    temp.a = q1.a + q2.a;
    temp.b = q1.b + q2.b;
    temp.c = q1.c + q2.c;
    return temp;
}

ostream &operator<<(ostream &out, Quadratic &q){
    out<<q.a<<" x2 + "<<q.b<<" x + "<<q.c<<endl;
    return out;
}

istream &operator>>(istream &in, Quadratic &q){
    cout<<"Enter values of a,b and c";
    in>>q.a>>q.b>>q.c;
    return in;
}

int main(){
    Quadratic q1,q2,q3,q4;
    cout<<"Default value of Quadratic Polynomial: ";
    cout<<q1;
    cin>>q1;
    cout << "Value of first polynomial is: ";
    cout<<q1;
    cin >> q2;
    cout << "Value of second polynomial is: ";
    cout<<q2;
    q3 = q1 + q2;
    cout<<"The addition of two polynomials is q3 = ";
    cout<<q3;
    /*This displays only for q1  object, i.e. first polynomial*/
    int n;
    cout<<"Enter the value of x for which u wanna compute value of f(x)";
    cin>>n;
    q1.eval(n);
    q1.solutions();
    return 0;
}