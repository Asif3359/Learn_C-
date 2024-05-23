#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // AC
    sort(arr, arr + N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //DC
    sort(arr, arr + N,greater<int>());
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}