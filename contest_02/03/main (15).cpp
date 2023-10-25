bool compare(std::string x, std::string y) {
    int xos = 0;
    int yos = 0;
    for (char& c : x) {
        if (c == '1') {
            xos += 1;
        }
    }
    for (char& c : y) {
        if (c == '1') {
            yos += 1;
        }
    }
    
    return (xos != yos) ? (xos > yos) : (std::stoi(x) < std::stoi(y));
}
