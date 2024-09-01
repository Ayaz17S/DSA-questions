#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 4, 5};
    int key = 3;
    int index1 = firstOcc(arr, 7, key);
    if (index1 != -1)
    {
        cout << "The first occurrence of " << key << " is at index: " << index1 << endl;
    }
    else
    {
        cout << key << " is not present in the array." << endl;
    }
    int index2 = lastOcc(arr, 7, key);
    if (index2 != -1)
    {
        cout << "The first occurrence of " << key << " is at index: " << index2 << endl;
    }
    else
    {
        cout << key << " is not present in the array." << endl;
    }
    return 0;
}