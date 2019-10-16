/*
Implement  a  class  Complex  which  represents  the  Complex  Number  data type.
Implement the following operations:
1.Constructor(including   a   default   constructor   which   creates   the complex number 0+0i).
2.Overloaded operator+ to add two complex numbers.
3.Overloaded operator* to multiply two complex numbers.
4.Overloaded << and >> to print and read complex Numbers.
*/
#include<iostream>
using namespace std;
class Complex{
    int real,img;
public:
    Complex(){
        real=img=0;
    }
    friend Complex operator+ (Complex&, Complex&);
    friend Complex operator*(Complex &, Complex &);
    friend ostream &operator<<(ostream&, const Complex&);
    friend istream &operator>>(istream&,Complex&);
};

Complex operator+(Complex &c1, Complex &c2){
    Complex temp;
    temp.real = c1.real + c2. real;
    temp.img = c1.img + c2.img;
    return temp;
}

Complex operator*(Complex &c1, Complex &c2){
    Complex temp;
    temp.real = (c1.real * c2.real) - (c1.img * c2.img);
    temp.img = (c1.real * c2.img) + (c1.img * c2.real);
    return temp;
}

ostream &operator<<(ostream &out, const Complex &c){
    out<<c.real<<" + "<<c.img<<" i "<<endl;
    return out;
}

istream &operator>>(istream &in, Complex &c){
    cout<<"Enter real and img parts of the complex no.";
    in>>c.real>>c.img;
    return in;
}

int main(){
    Complex c1,c2,c3,c4;
    cout<<"Defualt value is:";
    cout<<c1;
    cin >> c1;
    cout << "\nComplex number c1 is :";
    cout << c1;
    cin >> c2;
    cout << "\nComplex number c2 is  :";
    cout << c2;
    c3 = c1 + c2;
    cout << "\nAddition of c1 and c2 is c3 = " << c3;
    c4 = c1 * c2;
    cout << "\nMultiplication of c1 and c2 is c4 = " << c4;
    return 0;
}