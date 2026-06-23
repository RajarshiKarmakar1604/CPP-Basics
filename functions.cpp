// FUNCTIONS ARE A SET OF CODE WHICH PERFORMS SOME FUNCTION FOR U
// FUNCTIONS ARE USED TO MODULARISE CODE
// FUNCTIONS ARE USED TO INCREASE READABILITY
// FUNCTIONS ARE USED TO REUSE SAME CODE MULTIPLE TIMES AT MULTIPLE PLACES I.E. INCREASING CODE REUSABILITY

// void function -> a function which does not return anything
// return
// parameterised
// non parameterised

#include <bits/stdc++.h>
using namespace std;

// void printName(){
//     cout << "Hey Rishi"; //doesnt return anything unless called
// }


// take two numbers and print its sum


void printName(string name){
    cout << "Hey" << name << endl;
}

int numSum(int num1, int num2){     // function which returns int 
    return num1+num2;           
}

int maxx(int num1, int num2){
    if (num1>=num2) return num1;
    return num2; // always give a return value, or else it throws garbage value
}

 int doSomething(int num){
    num  = num+5;
    return num;
    
    }

void stringdo(string &str){ //&name takes the original value 
    str[0]='t';
    cout << str << endl;
}


void arrdo(int arr[], int n){
    arr[0]+=100;
    cout << "value inside function :" << arr[0] << endl;
}

int main(){

    // string name1;
    // cin >> name1;
    // printName(name1); // calling the function


    // string name2;
    // cin >> name2; 
    // printName(name2); // reusing the code

    int num1 , num2;
    cout << "Enter Number 1:";
    cin >> num1;
    cout << "Enter Number 2:";
    cin >> num2;
    int res = numSum(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << res << endl;
    int maxxn = maxx(num1, num2);
    cout << "max: " << maxxn << endl;

   
    int num, m_num;
    cout << "Enter number:";
    cin >> num;

    // pass by value

    m_num =doSomething(num);
    cout<<"original number is:" << num << "Modified number is:" << m_num; //  THE ORIGINAL NUMBER num REMAINS SAME AS THE PROGRAM SENDS A COPY OF num into the function doSomething
     

    // pass by reference
    string str = "Rajarshi";
    stringdo(str);
    cout << str << endl;

    int n = 5;
    int arr[5];
    for (int i=0; i<n; i=i+1){
        cin >> arr[i];
    }
    

    
    arrdo(arr, n);
    cout << "Value inside int main" << arr[0] << endl;
    
    return 0;}