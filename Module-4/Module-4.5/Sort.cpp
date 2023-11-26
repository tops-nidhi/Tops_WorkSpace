// Write a program of to sort the array using templates.
#include <iostream>
using namespace std;
template <typename T>
class Sorting
{
public:
    void sort(T arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};
int main()
{
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sorting<int> ob;
    ob.sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}