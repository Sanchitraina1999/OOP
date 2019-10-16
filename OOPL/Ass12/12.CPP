/*Write C++ program using STL  for Dequeue (Double ended queue)*/
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> DQ;
    deque<int>::iterator it;
    int choice,n;
    hell:
    cout << "1. PUSH BACK \n2. POP BACK\n3. PUSH FRONT \n4. POP FRONT\n5. DISPLAY QUEUE";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter number to be pushed into the queue at the BACK";
        cin >> n;
        DQ.push_back(n);
        break;
    case 2:
        DQ.pop_back();
        break;
    case 3:
        cout << "Enter number to be pushed into the queue at the FRONT";
        cin >> n;
        DQ.push_front(n);
        break;
    case 4:
        DQ.pop_front();
    case 5:
        for (it = DQ.begin(); it != DQ.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    char yn;
    cout<<"Continue(y/n) : ";
    char yn; cin>>yn;
    if(yn=='y')
        goto hell;
    return 0;
}