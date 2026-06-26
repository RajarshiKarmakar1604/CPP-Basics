#include <bits/stdc++.h>
using namespace std;

void explainMS(){
   // A MULTISET STORES SORTED VALUES, CAN CONTAIN DUPES UNLIKE SET
   multiset <int>ms;
   ms.insert(24);
   ms.emplace(4);
   ms.insert(1);
   ms.insert(4);
   ms.insert(2); //{1,2,4,4,24}

   ms.erase(4); //{1,2,24} erases all occurenes of 4
   ms.insert(1);
   ms.insert(1);
   cout<<ms.count(1)<<endl; //returns the frequency of 1

   //{1,1,1,2,24}
   ms.erase(ms.find(1)); //erases the first occurence of the element, as it erases the memory location of the iterator
   
  

   
   
}





int main(){
    explainMS();
    
    return 0;
}

