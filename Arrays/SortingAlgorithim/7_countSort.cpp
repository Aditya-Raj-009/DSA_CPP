/**
 * What is Counting Sort?
   Counting Sort is a non-comparison-based sorting algorithm that works well
   when there is limited range of input values. It is particularly efficient
   when the range of input values is small compared to the number of elements to
   be sorted. The basic idea behind Counting Sort is to count the frequency of
   each distinct element in the input array and use that information to place
   the elements in their correct sorted positions.


*/

#include<bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int>&);

int main(){

    vector<int> inputArr = { 4, 3, 12, 1, 5, 5, 3, 9 };

    vector<int> sortedArr = countSort(inputArr);

    for(int a: sortedArr)
    {
        cout<<a<<" ";
    }
    return 0;
}

vector<int> countSort(vector<int>& inputArr){
    int m = 0;

    for(auto i = inputArr.begin(); i!=inputArr.end(); i++)
    {
        m = max(*i,m);
    }

    vector<int> countArr(m+1,0);

    for(auto i = inputArr.begin(); i!=inputArr.end(); i++)
    {
        countArr[*i]++;
    }
    for(int i = 1; i<countArr.size(); i++)
    {
        countArr[i]+=countArr[i-1];
    }

    vector<int> outputArr(inputArr.size());

    for(int i = 0 ; i<outputArr.size(); i++)
    {
        outputArr[countArr[inputArr[i]]-1] = inputArr[i];
        countArr[inputArr[i]]--;
    }

    return outputArr;
}