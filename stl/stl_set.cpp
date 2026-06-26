#include <bits/stdc++.h>
using namespace std;

void explainSet(){
   set <int>st;
   st.insert(24);
   st.emplace(4);
   st.insert(1);
   st.insert(4);
   st.insert(2); //{1,2,4,24}


   /// A SET STORES UNIQUE VALUE ONLY IN A SORTED ORDER
   //functionality of insert in vector
   //can be used also, that only increases efficiency


   //begin(), swap(), rbegin(), rend(), size(), empty(), swap() same as others

   auto it = st.find(2); // returns the memory address of 2 in the set 
   auto it = st.find(12); // IF IT DOES NOT FIND 12, IT RETURNS THE MEMORY ADDRESS OF THE THEORETICAL ELEMENT AFTER THE LAST ELEMENT, SIMILAR TO V.END()
   st.erase(2); //erases 5, maintains the order, takes logarithmic itme

   cout<<st.count(1)<<endl; // if the element exists, it gives 1, if doesnt gives 0

   auto it1 = st.find(1);
   auto it2  = st.find(4);
   st.erase(it1,it2); //[first, last)
   
   auto it3= st.find(24);
   st.erase(it3); //takes constant time

}





int main(){
    explainSet();
    
    return 0;
}

