/*
Write a C++ program using command line arguments to search for a word in a file and replace it with the specified word.
The usage of the program is shown below.
$ change <old word> <new word> <file name>
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[]){
    if(argc<4){
        cout<<"Less number of arguements"<<endl;
        exit(1);
    }
    ifstream fin(argv[1]);
    if(!fin){
        cout<<"Error in opening file !"<<endl;
        exit(1);
    }
        string replace_data = "", old = argv[2], NEW = argv[3], data;
        int found;
        while(!fin.eof()){
            getline(fin,data);
            found= data.find(old);
            while(data.find(old)<500){
                data.replace(found,old.size(),NEW);
                found = data.find(old);
            }
            replace_data = replace_data + data + "\n" ;
        }
    fin.close();

    ofstream fout(argv[1]);
    fout<<replace_data<<endl;
    fout.close();
    
    cout<<"Now, reading the file contents: \n";
    ifstream fin1(argv[1]);
    while(!fin1.eof()){
        getline(fin1,data);
        cout<<data;
    }
    fin1.close();
    return 0;
}