#include <bits/stdc++.h>
using namespace std;

int main(){
    //2D array
    int arr[3][5]; 
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    //if not initialised, it assigns a random garbage value
    cout << arr[1][4];
  

    return 0;
}


/*
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr [3] >> arr[4];
    cout<< "Before incrementing:"<< arr[3] << "\n";    

    arr[3]+=10;
    cout << "After incrementing:" << arr[3];
    cout << arr; //returns the memory location of the array */
/*

An array is a linear data structure in which we store data and perform any operation, we can randomly access data in an array (With the help of its index values). 

In other words, an array is a collection of similar types of elements (Homogeneous elements) that have contiguous memory locations i.e One after another.


*/