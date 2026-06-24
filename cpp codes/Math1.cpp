#include <iostream>
#include <cmath>
using namespace std;
double dotProduct(double ax, double ay, double az, double bx, double by, double bz) {
    return ax * bx + ay * by + az * bz;
}
double magnitude(double x, double y, double z) {
    return sqrt(x * x + y * y + z * z);
}
double angle(double dot_product, double mag_a, double mag_b) {
    return acos(dot_product / (mag_a * mag_b));
}
// Wrong
void crossProduct(double bx, double by, double bz, double cx, double cy, double cz, double &cross_x, double &cross_y, double &cross_z) {
    cross_x = by * cz - bz * cy;
    cross_y = bz * cx - bx * cz;
    cross_z = bx * cy - by * cx;
}

int main() {
    double ax, ay, az, bx, by, bz, cx, cy, cz;
    cout << "Enter the magnitude of vector a: ";
    cin >> ax >> ay >> az;
    cout << "Enter the magnitude of vector b: ";
    cin >> bx >> by >> bz;
    cout << "Enter the magnitude of vector c: ";
    cin >> cx >> cy >> cz;
    double dot_ab = dotProduct(ax, ay, az, bx, by, bz);
    double dot_ac = dotProduct(ax, ay, az, cx, cy, cz);
    double dot_bc = dotProduct(bx, by, bz, cx, cy, cz);
    double mag_a = magnitude(ax, ay, az);
    double mag_b = magnitude(bx, by, bz);
    double mag_c = magnitude(cx, cy, cz);
    double angle_ab = angle(dot_ab, mag_a, mag_b);
    double angle_ac = angle(dot_ac, mag_a, mag_c);
    double angle_bc = angle(dot_bc, mag_b, mag_c);
    double cross_x, cross_y, cross_z;
    crossProduct(bx, by, bz, cx, cy, cz, cross_x, cross_y, cross_z);
    double dot_cross_a = dotProduct(cross_x, cross_y, cross_z, ax, ay, az);

    cout << "Dot product of a and b: " << dot_ab << endl;
    cout << "Dot product of a and c: " << dot_ac << endl;
    cout << "Dot product of b and c: " << dot_bc << endl;
    cout << "Angle between a and b : " << angle_ab << endl;
    cout << "Angle between a and c : " << angle_ac << endl;
    cout << "Angle between b and c : " << angle_bc << endl;
    cout << "Cross product of b and c: (" << cross_x << ", " << cross_y << ", " << cross_z << ")" << endl;
    cout << "Dot product between cross product and a: " << dot_cross_a << endl;

    return 0;
}

