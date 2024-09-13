#include <bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);

    vector<pair<int,int>> vec;
    vec.push_back({1,4});
    vec.emplace_back(1,4);


    vector<int>v(5,100);//{100,100,100,100,100};
    vector<int> v(5);


    vector<int> v1(5,20);
    vector<int> v2(v1); //copy of v1



    //Accessing the element in the vector
    v={1,2,5,3};
    
    
    vector<int>::iterator it=v.begin(); //v.begin() refers to the address of the first element in the vector
    it++;//move the address of the second element
    cout<<*(it)<<" "; //2
    it=it+2;//move to address of the last element which is 3
    cout<<*(it)<<" ";

    // vector<int>::iterator it=v.end(); // v.end() refers to the address of the right after the last element
    // vector<int>::iterator it=v.rend();//v.rend() refers to the address of the left after the first element
    // vector<int>::iterator it=v.rbegin();//v.rbegin() refers to the address of the last element



    cout<<v[0]<<" "<<v.at(0);//both are samething
    cout<<v.back()<<" ";//return the element at the last of vector




    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++){ //vector<int>::iterator==auto
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }


    //deleting element from the vector
    //v={10,20,12,23,35}
    //v.erase([start,end)) starting address is included but ending address is excluded...
    v.erase(v.begin(),v.begin()+3);//it will return the {23,35}



    //insert function
    vector<int> ans(2,100);//{100,100}
    ans.insert(v.begin(),300);//{300,100,100}
    ans.insert(v.begin()+1,2,39);//{300,39,39,100,100}
    vector<int> copy(2,20);//{20,20}
    ans.insert(v.begin(),copy.begin(),copy.end());//{20,20,300,39,39,100,100}



   
    v.size();
    v.pop_back();
    v1.swap(v2);
    v.clear();//erase the entire vector
    v.empty();//true or false
    
    
    

}