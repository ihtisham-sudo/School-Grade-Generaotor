#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Name;
    string Surname;
    int Roll;
    string Institute;
    int English,Maths,Physics,Computer = 0;
    cout<<"Enter Your Name :";
    cin.ignore();
    getline(cin, Name);
    cout<<"Enter Your Sur Name :";
    cin.ignore();
    getline(cin, Surname);
    cout<<"Enter Inter Roll No :";
    cin>>Roll;
    cout<<"Enter Instituion Name :";
    cin.ignore();
    getline(cin, Institute);
    cout<<"Enter Your Marks in English :";
    cin>>English;
    cout<<"Enter Your Marks in Maths :";
    cin>>Maths;
    cout<<"Enter Your Marks in Physics :";
    cin>>Physics;
    cout<<"Enter Your Marks in Computer :";
    cin>>Computer;
    int Total = English + Maths + Physics + Computer;
    cout<<"Result Card for: " << Name <<" "<< Surname <<endl;
    cout<<"Roll No :"<<Roll<<endl;
    cout<<"Institute :"<<Institute<<endl;
    cout<<"Subject | Obtained Marks | Total Marks "<<endl;
    cout<<"English | "<<English <<"             | 100"<<endl;
    cout<<"Maths   | "<<Maths   <<"             | 100"<<endl;
    cout<<"Physics | "<<Physics <<"             | 100"<<endl;
    cout<<"Computer| "<<Computer<<"             | 100"<<endl;
    cout<<"Total   | "<<Total  <<"            | 400"<<endl;
    
    return 0;
}
