/*find the maximum height of the saw blade that still allows him to cut off at least x metres of wood.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int low = 0;
    int high = *max_element(a, a + n);
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
                sum += a[i] - mid;
        }
        if (sum >= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
    return 0;
}