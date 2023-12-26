#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{

    vector<int> v;

    if (n == 1)
    {
        v.push_back(a[0]);
        return v;
    }

    int small = a[n - 1];

    v.insert(v.begin(), a[n - 1]);

    for (auto i = n - 2; i >= 0; i--)
    {
        if (a[i] >= small)
        {
            v.insert(v.begin(), a[i]);

            small = a[i];
        }
    }
    return v;
}

int main(int argc, char const *argv[])
{
    int a[] = {16,17,4,3,5,2};
    vector<int> v = leaders(a,sizeof(a)/sizeof(int));

    for(int a: v)
    {
        cout<<a<<" ";
    }
    return 0;
}
