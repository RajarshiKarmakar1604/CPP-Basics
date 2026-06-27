#include <bits/stdc++.h>
using namespace std;

void explainVectors(){
    //comment and uncomment lines according to need 
    vector <int> v; // creates an empty container
    v.push_back(1); // inserts an already created object into the vector
    v.emplace_back(2); // constructs the object directly inside the vector
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    //vector of pair datatype
    vector <pair<int,int>> vector2;
    vector2.push_back({16,2008});
    vector2.emplace_back(11,2016);

    //vector with already filled
    vector<int> vector3(5,100); // {100,100,100,100,100}
    vector<int> vector4(5); // vector with 5 x garbage values
    //copying a vector
    vector<int> v1(5,10);
    vector<int> v2(v1);
    
    //accessing a vector
    cout<<v[3] <<endl; // a vector can be accessed just like an array

    //acssessing thru interators
    vector <int>::iterator it = v.begin();  //begin() points to the memory location of the first elmeent of the vector
    cout<<*(it)<<endl;    //to access the element use *(interator_name)
    it++; //increments the position of the iterator object to the memory location of the next elmeent in the container
    cout<<*(it)<<endl;
    it = it+2;//shifting two positions from the last position
    cout<<*(it);
    vector <int>::iterator it = v.end(); // points to the memory location after the last element in the container
    vector <int>::reverse_iterator it = v.rend(); //points to the theoretical memory location immediately ebfore the first element (reverse - end)
    vector <int>::reverse_iterator it = v.rbegin(); //points to the last elment in the container
    cout<<*(it)<<endl; //prints 6
    it++; // goes back by 1 (reverse-direction)
    cout<<*(it); //prints 5
    cout<<v.back(); //prints the last element


} 

void printingVectors(){
    vector <int> v; 
    v.push_back(1); 
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    //printing the vector
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*(it) <<endl;
    }
    //using auto:   'auto' automatically assigns the vector to a vector iterator, works with, auto num = 9; auto name = "rishi";
    for(auto it = v.begin(); it!=v.end();it++ ){ 
        cout<<*(it) << endl;

    }
    for(auto it: v){    //auto iterates to the datatype of it thus it becomes int it.
        cout<<it <<endl;
    }

}

void deletionVector(){
    vector <int> v; 
    v.push_back(1); 
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    //{1,2,3,4,5,6}
    v.erase(v.begin()+1); // {1,3,4,5,6}
    v.erase(v.begin(), v.begin()+3); //vector_name.begin(start, end], end refers to the address of the elmenet after the elmeent u wanna delete
    
}


void vectorInsertion(){
    vector <int> v(2,100);  // {100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin()+1, 3, 21); //{300,21,21,21,100,100}
    vector <int> copy(2,50); //{50,50}
    v.insert(v.end(), copy.begin(), copy.end()); //{300,21,21,21,100,100, 50,50}

    cout<<"size:"<<v.size()<<endl;; //returns the size
    v.pop_back();  //removes the last element 

    vector<int>v1(2,100);
    vector<int>v2(2,5);
    v1.swap(v2); // v1 -> {5,5}, v2-> {100,100}
    v1.clear() ;// erases all the elments
    cout<<v.empty(); //returns false or zero if vector is not empty

}






int main(){
    vectorInsertion();
    
    return 0;
}

