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
void selectionSort(int arr[], int size);
void selectionSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        int smallIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[smallIndex])
            {
                smallIndex = j;
            }
        }

        swap(arr[i], arr[smallIndex]);
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

    selectionSort(arr, size);
    display(arr, size);

    return 0;
}