#include<bits/stdc++.h> //includes all libraries in cpp
using namespace std; //using std for every function 



/*int main(){
    int age;
    cout << "Enter Age:";
    cin >> age;
    if (age>=18){
        cout<<"The person is an adult";
    }
    else{
        cout<<"The person is a minor";
    }
    return 0;

}*/

/* 
A SCHOOL HAS THE FOLLOWING RULES FOR ITS GRADING SYSTEM
BELOW 25-F
25 TO 44 - E
45 TO 49 - D
50 TO 59 - C
60 TO 79 - B
80 TO 100 - A

ASK A USER TO ENTER MARKS AND PRINT HIS CORRESPONDING GRADE

*/

int main(){
    int marks;
    cout << "Enter your marks:";
    cin >> marks;

    if (marks < 0 || marks > 100){
        cout<<"Please Enter Valid Marks:";
        cin.ignore();
        cin>> marks;
    }

    if (marks>=80){
        cout<<"Grade:" << "A";
    }
    else if (marks>=60){
        cout<<"Grade:"<<"B";
    }
    else if(marks>=50){
        cout<<"Grade:" << "C";
    }

    else if(marks>=45){
        cout<<"Grade:" << "D";
    }

    else if(marks>=25){
        cout<<"Grade:" << "E";
    }

    else{
        cout<<"F";
    }
    
    return 0;
}






/*
int main(){
    int marks;
    cout << "Enter your marks:";
    cin >> marks;

    if (marks < 0 || marks > 100){
        cout<<"Please Enter Valid Marks:";
        cin.ignore();
        cin>> marks;
    }

    if (marks>=80 and marks<=100){
        cout<<"Grade:" << "A";
    }
    else if (marks>=60 and marks<=79){
        cout<<"Grade:"<<"B";
    }
    else if(marks>=50 and marks<=59){
        cout<<"Grade:" << "C";
    }

    else if(marks>=45 and marks<=49){
        cout<<"Grade:" << "D";
    }

    else if(marks>=25 and marks<=44){
        cout<<"Grade:" << "E";
    }

    else{
        cout<<"F";
    }
    
    return 0;
}




*/





