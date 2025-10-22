class Wektor2D
{

private:
    double x;
    double y;

public:
    Wektor2D() = default;

    Wektor2D(double a, double b) : x(a), y(b)
    {
        cout << "Konstruktor dwuargumentowy: (" << x << ", " << y << ")" << endl;
    }

    void setX(double a) { x = a; }
    void setY(double b) { y = b; }

    double getX() const { return x; }
    double getY() const { return y; }

    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }

    double operator*(const Wektor2D& other) const { return x * other.x + y * other.y; }
};