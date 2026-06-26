#include <bits/stdc++.h>
using namespace std;

void explainList(){
   list<int>ls;
   ls.push_back(4); //{4}
   ls.emplace_back(12); //{4,12}
   ls.emplace_front(132); //{4,12,132}
   ls.push_front(23424); //{23424,132,4,12}
    

   //rest all functions are same as vector
   //begin, end, rend, rbegin clear, insert, size, swap all same
}





int main(){
    explainList();
    
    return 0;
}

