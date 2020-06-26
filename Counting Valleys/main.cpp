#include <iostream>

using namespace std;

int main()
{
    /*
        Sample Input

            8
         UDDDUDUU

        Sample Output

            1
                    */
    int n;
    cin >> n;
    int uc =0;
    int dc = 0;
    char arr[n];

    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }

       for(int i = 0 ; i < n ; ++i){
             if(arr[i] == 'u'){
            uc++;
        }
        else if(arr[i]=='d'){
            dc++;
            }
        }

    if(uc == dc){
        cout << (uc+dc)/n << endl;
    }
    return 0;
}
