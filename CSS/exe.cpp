#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int j = i, sum = 0;
        while (j < n)
        {
            sum += a[j];
            j++;
        }
        if (sum == 0)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        cout << "1";
    }
    else
        cout << "0";
    return 0;
}