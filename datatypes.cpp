#include<bits/stdc++.h> //includes all libraries in cpp
using namespace std; //using std for every function 



int main(){
    // int, long, long long, float, double for storing integers and decimals
    // string , getline for string
    string s1;
    string s2;
    cout << "Enter String 1 and 2:";
    cin >> s1 >> s2;
    cout << "String 1:" << s1 <<  "\n" << "String 2:" << s2 << "\n";

    cin.ignore(); 

    cout << "Enter new line: ";
    string str;
    getline(cin, str);
    cout << str;
    


    cin.ignore();
    char ch = 'g'; //single character
    cout<<ch;


    return 0;

}







