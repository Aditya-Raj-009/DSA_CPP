#include<bits/stdc++.h>
using namespace std;

inline void swap(char &c1, char &c2){
    char temp = c1;
    c1 = c2;
    c2 = temp;
}
void perm(string s, int ind, vector<string>* v);
vector<string>* permutation(string s){

    vector<string>* v = new vector<string>();

    perm(s,0,v);
    return v;
}

void perm(string s, int ind, vector<string>* v)
{
    if(s.size()-1 == ind){
        v->push_back(s);
    }

    for(int i = ind; i<s.size(); i++){
        swap(s[i],s[ind]);

        perm(s,ind+1, v);
        swap(s[i],s[ind]);

    }
}


int main(int argc, char const *argv[])
{
    string s = "ABC";

    vector<string>* v = permutation(s);
    for(vector<string>::iterator i = v->begin(); i!=v->end(); i++){
        cout<<*i<<endl;
    }
    return 0;
}
