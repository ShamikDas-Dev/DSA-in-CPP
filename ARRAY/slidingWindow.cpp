#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr = {14,25,36,1,28,67,35};
    int size = arr.size();
    int current = 0;
    int step = 3;
    for (int i = 0; i < step; i++)
    {
        current += arr[i];
    }
    int maxSum = current;
    for (int i = 1; i <= size-step; i++)
    {
        current = current - arr[i-1] + arr[i+step-1];

        if (current> maxSum)
        {
            maxSum=current;
        }
        
    }
    cout << "Maximum subarray sum = " << maxSum;
    return 0;
}