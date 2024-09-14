#include <iostream>
#include <set>
using namespace std;


//set stores everyting in sorted order and stores unique i.e. no duplicates 
//everything happen in O(logN)
void explainSet(){
    set<int> st;
    st.insert(1);//{1}
    st.insert(2);//{1,2}
    st.emplace(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //functionlity of insert in vector can be used also,that only increases the efficiency


    //begin(),end(),rbegin(),rend(),size(),empty(),swap() are same as those of above


    //{1,2,3,4.5}
    auto it=st.find(3);//returns an iterator which points to 3
    auto it=st.find(6);//if element is not present in the set then it returns the iterator which points to right after the end

    //{1,4,5}
    st.erase(5);//erase 5 and takes the logarithmic time

    int cnt=st.count(1);//if element is present then there will be only one occurrence otherwise 0
    auto it=st.find(3);
    st.erase(it);//it takes constant time


    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);//after erase {1,4,5} [first,last)


    //lower_bound() and upper_bound() function works in the same way
    //as in vector it does


    //this is the syntax
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3);

}