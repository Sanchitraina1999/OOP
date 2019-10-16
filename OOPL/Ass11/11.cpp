/*
Write C++ program using STL for implementation of stack  & queue using SLL
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> S,Q;
    list <int> :: iterator it1,it2;
    int n;
    hell:
    cout<<"1.STACK\n2.QUEUE\n Enter the choice: ";
    int choice; cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"1.PUSH \n2.POP \n3.DISPLAY STACK";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter number to be pushed into the stack";
                cin>>n;
                S.push_back(n);
                break;
            case 2:
                S.pop_back();
                break;
            case 3:
                for(it1=S.begin();it1!=S.end();it1++)
                    cout<<*it1<<" ";
                cout<<endl;
        }

        break;
    case 2:
        cout << "1. PUSH \n2. POP\n3. DISPLAY QUEUE";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number to be pushed into the queue";
            cin >> n;
            Q.push_back(n);
            break;
        case 2:
            Q.pop_front();
            break;
        case 3:
            for (it2 = Q.begin(); it2 != Q.end(); it2++)
                cout << *it2 << " ";
            cout << endl;
        }
        break;
    }
    cout<<"Continue(y/n)? : ";
    char yn;    cin>>yn;
    if(yn=='y')
        goto hell;
    return 0;
}