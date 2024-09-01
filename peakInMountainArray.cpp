#include <iostream>
using namespace std;

int peak(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 2, 1};
    int ans = peak(arr, 6);
    cout << ans;
    return 0;
}