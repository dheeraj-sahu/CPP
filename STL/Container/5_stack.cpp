#include <iostream>
#include <stack>
using namespace std;
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    st.emplace(5);
    cout<<st.top();
    st.pop();
    cout<<st.size();
    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2);
}