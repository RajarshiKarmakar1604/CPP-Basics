# include <bits/stdc++.h>
using namespace std;
/*
TAKE AGE FROM THE USER  AND THEN DECIDE ACCORDINGLY
1. IF AGE<18:
    PRINT -> NOT ELIGIBLE FOR JOB
2. IF AGE>=19:
    PRINT - > ELIGIBLE FOR JOB
3. IF AGE>=55 AND AGE<=57:
    PRINT - > ELIGIBLE BUT RETIREMENT SOON
4. IF AGE>57:
    PRINT - > "RETIREMENT TIME"
*/


 int main(){
    int age;
    cout << "Enter your age:";
    cin>> age;
    if (age<18){
        cout<< "Not eligible for employment";
    }
    else if (age<=57){
        cout<<"Eligible for employmnet";
        if (age>=55){
            cout<<", But retirement soon!";
        }
    }
    else{
        cout<<"Retirement time!!";
    }

    return 0;
 }
