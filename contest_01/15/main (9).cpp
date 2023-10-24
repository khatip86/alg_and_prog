#include<iostream>
#include<string>

using namespace std;

string action() {;
    string str;
    cin >> str;
    string output = "";
    int cntr;
    for (int i = 0; str[i]; i++){
        cntr = 1;
        while(str[i] == str[i + 1]){
            cntr++;
            i++;
        }
        if (cntr > 1){
            output += str[i] + to_string(cntr);
        } else{
            output += str[i];
        }
    }
    return output;
}


int main(){
    string answer;
    answer = action();
    cout << answer;
}
