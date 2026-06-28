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
    
    cout<<"The total number of digits in " << n_copy << " is: " <<count <<endl;;
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
        problem1(n);
    }
}
