#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
   queue <int>q;
   q.push(4); //{4}
   q.emplace(12); //{4,12}
   q.emplace(132); //{4,12,132}
   q.push(45); //Follows FIFO {4,12,132,45}

   q.back()+=5; //increments the last guy aka 45 by 5
   cout<<q.back()<<endl; // prints50
   cout<<q.front()<<endl; //prints 4
   q.pop(); // deletes the first guy 
   cout<<q.front()<<endl; // prints 12

    
    //size and swap, same like stack
   
}





int main(){
    explainQueue();
    
    return 0;
}

