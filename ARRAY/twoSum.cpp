#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){


    vector <int> arr ={25,54,12,36,71,39};
    int target = 37;
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size()-1;
    while (left<right)
    {
        int curr_sum = arr[left]+arr[right];
        if (curr_sum == target)
        {
            cout<<"Pair Found"<<endl
                <<arr[left]<<"+"<<arr[right]
                << "="<< target;
                return 0;
        }
        else if (curr_sum < target)
        {
            left++;
        }
        else{
            right--;
        }
    }
    
    cout << "No pair found";
    return 0;
}