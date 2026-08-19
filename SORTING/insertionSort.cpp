#include <iostream>
using namespace std;

void display(int arr[], int size);
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertionSort(int arr[], int size);
void insertionSort(int arr[], int size)
{

    for (int i = 1; i < size; i++){
        int curr = arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev+1]= arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    
}

int main()
{
    int size;
    cout << "Enter the number of elements: " << endl;
    cin >> size;
    cout << "Lets enter the values: "<< endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);
    display(arr, size);

    return 0;
}