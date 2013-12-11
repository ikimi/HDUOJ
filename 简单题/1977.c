#include <iostream>
using namespace std;

int main()
{
    int T;
    unsigned long long int N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << N * N * N << ' ' << (N + 1) * ( N + 1) * (N + 1) << endl;
    }
    return 0;
}
