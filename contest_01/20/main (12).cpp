#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string action(string one, string two) {

    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    if (one == two){
        return "YES";
    } else{
        return "NO";
    }
}


int main() {
    string a, b;
    cin >> a >> b;
    string answer = action(a, b);
    cout << answer << endl;
}