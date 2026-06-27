#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    //map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value.
    //map <key, value>
    //unique keys: value in sorted order by key

    map<int, int>mp;
    map<int, pair<int,int>>mp1;
    map<pair<int,int>,int>mp2;
    mp[1] = 2; //{1:2}
    mp.emplace(3,1); //{3:1}
    mp.insert(2,4);

    mp2[{2,3}] = 10; //[{2,3} : 10]




}


int main(){
    explainMap();
    return 0;

}