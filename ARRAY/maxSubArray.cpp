#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr = {14,25,36,1,28,67,35};
    int size = arr.size();
    int step = 3;
    int maxSum = arr[0];
    for (int i = 0; i <= size-step; i++)
    {
        int currentSum = 0;
        for (int j = i; j < i+step; j++)
        {
            currentSum += arr[j];
            maxSum = max(maxSum,currentSum);
        }
        
    }
    
    cout << "Maximum subarray sum = " << maxSum;
    return 0;
}