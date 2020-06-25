#include <iostream>

using namespace std;

int main()
{
    int n;
    int c = 0;
    cin >> n ;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i] == arr[j])
                c++;
        }
    }

    cout << c;

    return 0;
}
