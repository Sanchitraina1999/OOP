/*
Write a C++ program that creates an output file, writes information to it, closes the file
and open it again as an input file and read the information from the file.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    string si,so;
    fout.open("8.txt",ios::out);
    if(!fout){
        cout<<"Error in opening file !!";
        exit(1);
    }
    else{
        cout<<"Enter string you want to put in to the file: ";
        getline(cin, so);
        fout<<so;
    }
    fout.close();

    fin.open("8.txt",ios::in);
    if(!fin){   
        cout<<"Error in opening file !";
    }
    else{
        cout << "The file contents: \n";
        while(!fin.eof()){
            getline(fin,si);
            cout<<si;
        }
        cout<<endl;
    }
    fin.close();

    return 0;
}