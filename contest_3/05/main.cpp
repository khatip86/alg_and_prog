#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int m;
    std::cin >> m;

    std::map<std::string, int> w_count;
    for (int i = 0; i < m; ++i) {
        std::string w;
        std::cin >> w;
        ++w_count[w];
    }

    std::vector<std::string> most_common_w;
    int max_count = 0;
    for (const auto& pair : w_count) {
        if (pair.second > max_count) {
            most_common_w.clear();
            most_common_w.push_back(pair.first);
            max_count = pair.second;
        } else if (pair.second == max_count) {
            most_common_w.push_back(pair.first);
        }
    }

    std::sort(most_common_w.begin(), most_common_w.end());

    for (const auto& w : most_common_w) {
        std::cout << w << ' ';
    }

    return 0;
}
