#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n ;
    int freq[101] = {0};

    for(int i = 0 ; i < n ; ++i){
        int c = 0;
        // in this case we use the array index to calculate the frequency //
        cin>>c;
        freq[c]++;
    }

    int result = 0;

    for(int i = 0 ; i <= 100 ; ++i){
        result += freq[i]/2;
    }

    cout << result << endl;


    return 0;
}
