#include <bits/stdc++.h>
using namespace std;

void explainStack(){
    //indexing not allowed in Stack
    stack < int> st;
    st.push(4);
    st.emplace(9);
    st.emplace(2);
    st.emplace(1);
    st.emplace(21); // Follows LIFO {21,1,2,9,4}


    cout<<st.top()<<endl; //prints the top element
    st.pop(); //{1,2,9,4}
    cout<< st.size() <<endl; //prints size
    cout<<st.empty()<<endl; //prints false if not empty, prints true if empty

    stack<int>st1, st2;
    st1.swap(st2); //swaps

    //IN STACK, ALL OPERATIONS (PUSH, POP, TOP) HAVE O(1) TIME COMPLEXITY


}





int main(){
    explainStack();
    
    return 0;
}

