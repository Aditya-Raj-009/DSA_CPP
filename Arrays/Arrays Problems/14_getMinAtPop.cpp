#include<bits/stdc++.h>
using namespace std;


stack<int> _push(int*, int);
void _getMinAtPop(stack<int>);


int main(int argc, char const *argv[])
{
    int arr[] = {1, 6, 43, 1, 2, 0, 5};

    stack<int> data = _push(arr,sizeof(arr)/sizeof(int));

    _getMinAtPop(data);
    
    return 0;
}

stack<int> _push(int arr[], int n){

    stack<int> data;
    for(int i = 0; i<n; i++)
    {
        if(data.empty()){
            data.push(arr[i]);
        }
        else{
            data.push(min(arr[i],data.top()));
        }
    }
    return data;
}

void _getMinAtPop(stack<int> data){

while(!data.empty()){
    cout<<data.top()<<" ";
    data.pop();
}
}




