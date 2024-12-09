/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/



// Hint :- Which ever bracket is open LAST , I have to close it First , OBS;-LIFO stack

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin >> s;

    stack<char> st;
    for(auto &c: s){
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }
        else if(c == ')'){
            if(st.empty() || st.top() != '('){ cout<<"false"; return 0;}
            st.pop();
        }
        else if(c == ']'){
            if(st.empty() || st.top() != '['){ cout<<"false"; return 0;}
            st.pop();
        }
        else if( c == '}'){
            if(st.empty() || st.top() != '{'){ cout<<"false"; return 0;}
            st.pop();
        }
    }
    cout << (st.empty() ? "true" : "false") << endl;
    return 0;

}


// Enter the string : (]
// false% 

// Enter the string : ()[]{}
// true