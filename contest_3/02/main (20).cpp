#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool action(const string& input) {
    stack<char> stk;

    for (char k : input) {
        if (k == '(' || k == '{' || k == '[') {
            stk.push(k);
        } else if (k == ')' || k == '}' || k == ']') {
            if (stk.empty()) {
                return false;
            } else {
                char top = stk.top();
                stk.pop();

                if ((k == ')' && top != '(') ||
                    (k == '}' && top != '{') ||
                    (k == ']' && top != '[')) {

                    return false;
                }
            }
        }
    }

    return stk.empty();
}

int main() {
    string input;
    getline(cin, input, '!');

    if (action(input)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}