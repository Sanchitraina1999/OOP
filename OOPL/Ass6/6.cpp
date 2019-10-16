/*
Create employee bio-data using following classes
i)Personal record
ii)Professional record
iii)Academic record 
Assume appropriate data members and member function to accept required data  &  print  bio-data. 
Create  bio-data  using  multiple  inheritances  using C++.
*/
#include <iostream>
using namespace std;
class personal
{
public:
    int a;
    void display_personal();
};

void personal::display_personal()
{
    cout << "Enter a ";
    cin >> a;
}

class professional
{
public:
    int b;
    void display_professional();
};

void professional::display_professional()
{
    cout << "Enter b ";
    cin >> b;
}

class academic
{
public:
    int c;
    void display_academic();
};

void academic::display_academic()
{
    cout << "Enter c ";
    cin >> c;
}

class biodata : public personal, public professional, public academic
{
public:
    void display_biodata();
};

void biodata::display_biodata()
{
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    biodata B;
    B.display_personal();
    B.display_professional();
    B.display_academic();
    B.display_biodata();
    return 0;
}