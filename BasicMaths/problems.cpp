#include <bits/stdc++.h>
using namespace std;
void problem1(int n){
    int count = 0;
    int n_copy = n;
    if(n == 0){
            cout << "The total number of digits in 0 is: 1\n";
            return;
        }
    while(n>0){
        
        n /=10;
        count +=1;
    }
    
    cout<<"The total number of digits in " << n_copy << " is: " <<count <<endl;;}
void problem2(int n){
    int revNum = 0;
    int n_copy = n;
    while(n>0){
        int last_digit  = n%10;
        revNum = (revNum*10)+last_digit;
        n=n/10;

    }
    cout<<"The reverse of the number " << n_copy << " is: " << revNum;
}
void problem3(int n){
    int revNum = 0;
    int n_copy = n;
    while(n>0){
        int last_digit  = n%10;
        revNum = (revNum*10)+last_digit;
        n=n/10;

    }
    if (revNum == n_copy){
        cout<<n_copy<<" is a palindrome number"<<endl;
    }
    else {
        cout<<n_copy<<" is not a palindrome number"<<endl;
    }
    
}





// using test cases

int main(){
    cout<< "Enter number of times:";
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        cout<<"Enter Integer n:";
        int n;
        cin >> n;
        problem3(n);
    }
}
