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
    mp.insert({2,4});

    mp2[{2,3}] = 10; //[{2,3} : 10]

    for (auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mp[1]; // map_name[key_name] // prints 2
    cout<<mp[5] << endl; // prints 0 aka null

    auto it = mp.find(3); // points to the iterator where 3 is the key
    cout<<(*it).second <<endl; //prints the value of the {key, value pair} aka second elemnet in the pair
    auto it = mp.find(5); // if 5 doesnt exists, it points after the last elmeent aka .end()

    //this is the syntax
    auto it   = mp.lower_bound(2);
    auto it   = mp.upper_bound(3);

    //erase, swap, size empty are same as others




}


int main(){
    explainMap();
    return 0;

}