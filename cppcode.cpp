#include<iostream>
#include<fstream>
using namespace std;


void writeToFile(){
    ofstream write;
    write.open("myText.txt");
    string text="Welcome to my World of C++";
    write<<text;
}
