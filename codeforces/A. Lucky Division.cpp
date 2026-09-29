#include <iostream>
using namespace std;

int main(void)
{

    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n;
    cin >> n;

    int l = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < l; i++)
    {
        if (n % arr[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}