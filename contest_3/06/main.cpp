#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x;
    unordered_map<string, int> users;
    string log, bal;
    getline(cin, log);
    for (int i = 0; i < x; ++i) {
        getline(cin, log);
        stringstream ss(log);
        getline(ss, log, ';');
        ss >> bal;
        users[log] = stoi(bal);
    }
    cin >> y;
    vector<string> logs(y);
    for (int i = 0; i < y; ++i) {
        cin >> logs[i];
    }
    for (auto &log : logs) {
        if (users.find(log) != users.end()) {
            cout << users[log] << " ";
        }
    }
}
