#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cur = 0;
    int len = 1;
    int max = 2;
    int ln_step = 1;

    for (int i = 1; i <= N; i++)
    {
        cout << i << ' ';

        cur++;
        if (cur == len){
            cout << endl;
            len += ln_step;
            cur = 0;
        }
        if (len == max || len == 1){
            ln_step *= -1;
        }
        if (len == max) max++;
    }
}