#include <bits/stdc++.h>
using namespace std;

void explainPQ(){
   priority_queue <int>q;
   q.push(4); //{4}
   q.emplace(12); //{12,4} the largest element remains at the top
   q.emplace(132); //{132,12,4}
   q.push(45); // {132,45,12,4}
   q.emplace(1);  // {132,45,12,4,1}

   q.pop(); //removes 132, {45,12,4,1}
   cout<<q.top()<<endl; // prints 45
   //size swap same as others

   //minimum heap :  minimum data at the top, min priority queue
   priority_queue<int, vector<int>, greater<int>> pq2;
   pq2.push(5); //{5}
   pq2.emplace(2); //{2,5}
   pq2.emplace(8); //{2,5,8}
   pq2.emplace(10);// {2,5,8,10}
   cout<<pq2.top(); //pritns 2


   //push--- O(logN)
   //top -- O(1)
   //pop -- O(LogN)

}





int main(){
    explainPQ();
    
    return 0;
}

