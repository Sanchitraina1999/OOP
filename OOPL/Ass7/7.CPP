/*
Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet.
a. User has age between 18 and 55  
b. User has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/Mumbai/Bangalore/Chennai
d. User has 4-wheeler
Accept age, income, city, vehicle from the user and check for the conditions mentioned above.
If any of the condition does not met then throw an exception. 
*/
#include<bits/stdc++.h>
#include<exception>
#include<string>
using namespace std;
int main(){
    int age,income;
    char city[10], wheeler[10];
    /*age*/
    cout << "Enter age: ";
    cin >> age;
    try
    {
        if (age < 18 || age > 55)
            throw runtime_error("User's age should be between 18 and 55");
    }
    catch (const exception &e){
            cout << "Exception caught: \n" << e.what();
        }

    /*income*/
    cout << "\nEnter income: ";
    cin >> income;
    try
    {
        if (income < 50000 || age > 100000)
            throw runtime_error("Income should be between 50000 and 100000");
    }
    catch (const exception &e){
        cout << "Exception caught :\n"<< e.what();
    }

    /*city*/
    cout<<"\nEnter city: ";
    cin>>city;
    try{
        if(strcmp(city,"Pune")&&strcmp(city,"Mumbai")&&strcmp(city,"Bangalore")&&strcmp(city,"Chennai"))
            throw runtime_error("User should stay in Pune/Mumbai/Bangalore/Chennai");
    }
    catch(const exception &e){
        cout<<"Exception caught: \n"<<e.what();}
    
    /*4 Wheeler*/
    cout<<"\nUser has 4 wheeler (2 or 4)";
    cin>>wheeler;
    try{
        if(strcmp(wheeler,"4"))
            throw runtime_error("User should have 4 wheeler");
    }
    catch (const exception &e){
        cout<<"Exception caught: \n"<<e.what();
    }
    cout<<"\nThe details of the USER are as follows: \n";
    cout << "AGE: " << age;
    cout << "\nINCOME: " << income;
    cout << "\nCITY: " << city;
    cout << "\nWheeler: " << wheeler;
    return 0;
}