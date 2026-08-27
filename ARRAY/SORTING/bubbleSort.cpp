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
void bubbleSort(int arr[], int size);
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the number of elements: " << endl;
    cin >> size;
    cout << "Lets enter the values: " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, size);
    display(arr, size);

    return 0;
}