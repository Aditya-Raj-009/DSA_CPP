#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> v;

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {

            v.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return v;
}

int main()
{
int A[] = {1,2,3,4,5};
int B[] = {3,5,6,7,8};
int C[] = {2,3,5,7,8};
vector<int> v = commonElements(A,B,C,5,5,5);

for(int a : v)
{
    cout<<a<<" ";
}
}