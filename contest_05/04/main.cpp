class Point {
public:
    double x, y, r, a;
    Point(double x, double y) {
        this->x = x;
        this->y = y;
        this->r = sqrt(this->x*this->x+this->y*this->y);
        this->a = atan2(this->y,this->x);
    }
    void set_x(double x){
        this->x = x;
        this->r = sqrt(this->x * this->x + this->y * this->y);
        this->a = atan2(this->y, this->x);
    }
    void set_y(double y) {
        this->y = y;
        this->r = sqrt(this->x * this->x + this->y * this->y);
        this->a = atan2(this->y, this->x);
    }
    void set_r(double r) {
        this->r = r;
        this->x = this->r*cos(this->a);
        this->y = this->r * sin(this->a); 
    }
    void set_a(double a) {
        this->a = a;
        this->x = this->r * cos(this->a);
        this->y = this->r * sin(this->a); 
    }
    double get_x() {
        return round(this->x * 100000) / 100000;
    }
    double get_y() {
        return round(this->y* 100000) / 100000;
    }
    double get_r() {
        return round(this->r * 100000) / 100000;
    }
    double get_a() {
        return round(this->a * 100000) / 100000;
    }
};
