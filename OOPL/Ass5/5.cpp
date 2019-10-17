/*
Develop an object oriented program in C++ to create a database of student information system containing the following information:
Name, Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone number, driving license no. etc.
Construct the database with suitable member functions for initializing and destroying the data viz constructor, default constructor,
Copy constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new
and delete.
*/
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class db{
    char roll[10];
    char name[20];
    char Class[10];
    char Div[10];
    char dob[10];
    char bg[3], contact[10];
    char phone[10], license[12];
public:
    static int count;
    static void show_count(){
        cout<<"No. of objects created: "<<count<<endl;
    }
    db()
    {
        strcpy(roll, "21154");
        strcpy(name, "Sanchit");
        strcpy(Class, "SE-I");
        strcpy(Div, "I");
        strcpy(dob, "08/12/1999");
        strcpy(bg, "0+");
        strcpy(contact, "Jammu");
        strcpy(phone, "9149659875");
        strcpy(license, "JK020030018459");
        count++;
    }
    db(db *ob)
    {
        strcpy(name, ob->name);
        strcpy(roll, ob->roll);
        strcpy(dob, ob->dob);
        strcpy(Class, ob->Class);
        strcpy(Div, ob->Div);
        strcpy(bg, ob->bg);
        strcpy(contact, ob->contact);
        strcpy(phone, ob->phone);
        strcpy(license, ob->license);
        count++;
    }
    inline void getdata(){
        cout << "\n\nEnter:name,roll,Class,Div,Dob,bg,contact,phone,license \n\n\n";
        cin >> name >> roll >> Class >> Div >> dob >> bg >> contact >> phone >> license;
    }
    friend void display_data(db d);
    ~db(){
        cout<<"\n"<<this->name<<" (object) has been destroyed !"<<endl;
    }
};
int db::count=0;
void display_data(db d)
{
    cout << "\n"<< "            " << d.name << "     " << d.roll << "    " << d.Class << "   " << d.Div << "            " << d.dob << "    " << d.bg << "            " << d.contact << "            " << d.phone << "            " << d.license;
}
int main(){
    int i,n;
    db /*d1,*/*ptr[5];
    cout<<"No. of objects u want to create: ";
    cin>>n;
    cout<<"ENTER DATA FOR "<<n<<" OBJECTS : \n";
    for(i=0;i<n;i++){
        ptr[i] = new db();
        ptr[i] ->getdata();
    }
    cout << "DATA OF " << n << " OBJECTS : \n";
    cout << "\n"<< setw(12) << "name" << setw(5) << "roll" << setw(4) << "Class" << setw(4) << "Div" << setw(12) << "dob" << setw(4) << "bg" << setw(12) << "contact" << setw(12) << "phone" << setw(12) << "license";
    for(i=0;i<n;i++){
        display_data(*ptr[i]);
    }
    /*cout<<"USE OF COPY CONSTRUCTOR"<<endl;
    db c(&d1);
    display_data(c);
    */
    db::show_count();
    cout << "Objects deleted !" << endl;
    return 0;
}