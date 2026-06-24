
#include <bits/stdc++.h>
using namespace std;


void print1(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"* ";
        }
        cout << endl;
    }
}


void print2(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<=i ;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}


void print3(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i ;j++){
            cout<<j;
        }
    cout<<endl;
    }
}


void print4(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i ;j++){
            cout<<i;
        }
    cout<<endl;
    }
}

void print5(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<(n-i+1); j++){
            cout<<"*";
        }
        cout<<endl; 
    }    
}


void print6(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<(n-i+1); j++){
            cout<<j+1;
        }
        cout<<endl; 
    }    
}

void print7(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<(n-i+1); j++){
            cout<<n-i+1;
        }
        cout<<endl; 
    }    
}

void print8(int n){
    for (int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j =0; j<((2*i)+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout << endl;
    }

}

void print9(int n){
    for(int i=0; i<n; i++){
        //space
        for (int j=0; j<i; j++){
            cout <<" ";
        }
        //star
        for (int j =0; j<((2*n)-1-(2*i)); j++){
            cout<<"*";
        }
        
        //space
        for (int j=0; j<i; j++){
            cout <<" ";
        }
        cout << endl;
    }   
}

void print10(int n){
    
    for (int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j =0; j<((2*i)+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout << endl;
    }
    for(int i=0; i<n; i++){
        //space
        for (int j=0; j<i; j++){
            cout <<" ";
        }
        //star
        for (int j =0; j<((2*n)-1-(2*i)); j++){
            cout<<"*";
        }
        
        //space
        for (int j=0; j<i; j++){
            cout <<" ";
        }
        cout << endl;
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
        print10(n);
    }
}
