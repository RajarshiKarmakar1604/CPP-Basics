#include <bits/stdc++.h>
using namespace std;

void explainDQ(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_front(3);
    dq.emplace_back(4); 

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    
   //rest all functions are same as vector
   //begin, end, rend, rbegin clear, insert, size, swap all same
    

}





int main(){
    explainDQ();
    
    return 0;
}

