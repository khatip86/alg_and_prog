#include <numeric>

std::tuple<int, int, int> find_lcm(int x, int y) {
    int z = std::lcm(x, y);
    return std::make_tuple(z, z/x, z/y);
}

std::tuple<int, int> reduce(int x, int y) {
    int z = std::gcd(x, y);
    return std::make_tuple(x/z, y/z);
}
