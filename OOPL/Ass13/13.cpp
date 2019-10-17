/*
Write C++ program using STL for sorting and searching with user-defined records such as Person Record
(Name, birth date, telephone no), item record (item code, item name, quantity and cost) 
*/
#include <iostream>
#include <list>
using namespace std;
class Person
{
    list<string> name, dob, tel;
    list<string>::iterator it1, it2, it3;
    list<string>::iterator j, k, l;

public:
    void get_person();
    void display_person();
    void search_person(string);
    void sort_person();
};

void Person::get_person()
{
    string n, d, t;
    cout << "How many records u want to enter";
    int nn;
    cin >> nn;
    while (nn--)
    {
        cout << "Enter details of Person Record ,i.e. Name, date of birth and telephone number: \n";
        cin >> n >> d >> t;
        name.push_back(n);
        dob.push_back(d);
        tel.push_back(t);
    }
}

void Person::display_person()
{
    it1 = name.begin();
    it2 = dob.begin();
    it3 = tel.begin();
    while (it1 != name.end())
    {
        cout << *it1 << "   " << *it2 << "   " << *it3 << endl;
        it1++;
        it2++;
        it3++;
    }
}

void Person::search_person(string data)
{
    int flag = 0;
    it1 = name.begin();
    it2 = dob.begin();
    it3 = tel.begin();
    while (it1 != name.end() && it2 != dob.end() && it3 != tel.end())
    {
        if (*it1 == data)
        {
            cout << "Record found!" << endl;
            cout << "Corresponding D.O.B: " << *it2 << endl;
            cout << "Corresponding phone number: " << *it3 << endl;
            flag = 1;
            break;
        }
        if (*it2 == data)
        {
            cout << "Record found!" << endl;
            cout << "Corresponding name " << *it1 << endl;
            cout << "Corresponding phone number: " << *it3 << endl;
            flag = 1;
            break;
        }
        if (*it3 == data)
        {
            cout << "Record found!" << endl;
            cout << "Corresponding name: " << *it1 << endl;
            cout << "Corresponding D.O.B: " << *it2 << endl;
            flag = 1;
            break;
        }
        it1++;
        it2++;
        it3++;
    }
    if (flag == 0)
        cout << "Record not found ! " << endl;
}

void Person::sort_person()
{
    string temp;
    it1 = name.begin();
    it2 = dob.begin();
    it3 = tel.begin();
    j = it1;
    k = it2;
    l = it3;
    j++;
    k++;
    l++;
    while (it1 != name.end())
    {
        while (j != name.end())
        {
            if (*it1 > *j)
            {
                temp = *it1;
                *it1 = *j;
                *j = temp;

                temp = *it2;
                *it2 = *k;
                *k = temp;

                temp = *it3;
                *it3 = *l;
                *l = temp;
            }

            j++;
            k++;
            l++;
        }

        it1++;
        it2++;
        it3++;
    }
}

int main()
{
    Person p;
    p.get_person();
    cout << "Details of Person are as follows: \n";
    p.display_person();
    cout << "Enter data to be searched: \n";
    string data;
    cin >> data;
    p.search_person(data);
    cout << "Now, sorting person records";
    p.sort_person();
    cout << "\nAfter sorting : \n";
    p.display_person();
    return 0;
}