class Water {
public:
    int temperature;
    Water() {
        this->temperature = 0;
    }
    Water(int temperature) {
        this->temperature = temperature;
    }
};
class Teapot {
public:
    Water water;
    Teapot(Water water) {
        this->water = water;
    }
    void heat_up(int t) {
        this->water.temperature += t;
    }
    bool is_boiling() {
        if (this->water.temperature >= 100) {
            return true;
        }
        else {
            return false;
        }
    }
};
