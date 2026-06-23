#include <bits/stdc++.h>
using namespace std;

/*
TAKE THE DAY NO. AND PRINT CORRESPONDING DAY
PRINT 1 FOR MONDAY AND PRINT 7 FOR SUNDAY
*/

int main(){
    int day;
    cout << "Enter Day number:";
    cin >> day;

    switch (day){
    case 1:
        cout<< "Monday";
        break;
    case 2:
        cout<< "Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Invalid"; //wen none of the conditions are satisfied, it fallsback to the default case

    }
    cout<<"Check";
    return 0;

}
