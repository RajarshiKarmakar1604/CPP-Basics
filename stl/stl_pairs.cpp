#include <bits/stdc++.h>
using namespace std;

//pairs datatype
void explainPair(){
    pair<int, int> p = {1,3};
    cout << p.first << p.second << endl;
    //nested pair
    pair<int, pair<int, int>> nested_pair = {1,{3,4}};
    cout<< nested_pair.first << nested_pair.second.first << nested_pair.second.second << endl;
    //nested pair using array
    pair <int, int> arr[] = {{1,2}, {4,3}, {16,04}};
    cout << arr[2].first << arr[2].second <<" is my birthday!";
}




int main(){
    explainPair();
    return 0;
}

