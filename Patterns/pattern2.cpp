/*

*
**
***
****
*****

*/

#include <bits/stdc++.h>
using namespace std;


void printstar(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<=i ;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}


// using test cases

int main(){
    cout<< "Enter number of times:";
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        cout<<"Enter number of stars to print:";
        int n;
        cin >> n;
        printstar(n);
    }   
}


