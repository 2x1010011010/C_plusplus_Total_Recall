#include <iostream>
#include <string>

using namespace std;

string first_name;
string second_name; 

string InputString(){
    string result;
    cin >> result;
    return result;
}

void OutputString(string output){
    cout << output << endl;
}

void SwapStrings(string firstName, string secondName){
    string temp_var;
    temp_var = firstName;
    first_name = secondName;
    second_name = firstName;
}

int main(){
    OutputString("Enter surname: ");
    first_name = InputString();

    OutputString("Enter name: ");
    second_name = InputString();
    
    SwapStrings(first_name, second_name);
    
    OutputString("Your name is " + first_name);
    OutputString("Your second name is " + second_name);
    
    return 0;
}

