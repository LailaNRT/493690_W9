// Tugas User Defined Function 
// Chapter 6; Problem exercise no. 8

// Laila Nur Rizqi Tasnimiyah
// 22/493690/TK/54095

#include <iostream>
#include <cmath> 
#include <iomanip> 
using namespace std;

const double PI = 3.1416;

// -------------------- deklarasi fungsi ------------------

void getCoordinates(double& cx, double& cy, double& px, double& py);
double distance(double x1, double y1, double x2, double y2);
double radius(double cx, double cy, double px, double py);
double circumference(double r);
double area(double r);
void outputResults(double r);

// -------------- Fungsi I/O --------------------

// INPUT: fungsi menerima koordinat dari user
void getCoordinates(double& cx, double& cy, double& px, double& py) 
{
    cout << "--- kalkulator lingkaran ---" << endl;
    cout << "Masukkan centroid dari lingkaran (x y): ";
    cin >> cx >> cy;
    cout << "Kemudian, masukkan titik lain dimana jaraknya dari centroid akan menjadi radius lingkaran";
    cout << "\nMasukkan titik lain (x y): ";
    cin >> px >> py;
}

// OUTPUT: fungsi untuk mencetak hasil perhitungan
void outputResults(double r)
{
    cout << fixed << setprecision(4); 
    
    cout << "\n--- hasil perhitungan ---" << endl;
    cout << "Radius:        " << r << endl;
    cout << "Diameter:      " << 2 * r << endl;
    cout << "Keliling:      " << circumference(r) << endl; 
    cout << "Area:          " << area(r) << endl; 
}

// -------------------- Fungsi perhitungan --------------------
// meliputi fungsi:
// a. distance
// b. radius
// c. circumference
// d. area
// ------------------------------------------------------------
// a. distance = rumus dari textbook ch6q8
double distance(double x1, double y1, double x2, double y2)
{
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    
    return sqrt((deltaX * deltaX) + (deltaY * deltaY));
}

// b. radius: sama dengan radius
double radius(double cx, double cy, double px, double py)
{
    return distance(cx, cy, px, py); 
}

// c. circumference: berdasarkan rumus keliling lingkaran 2*pi*r
double circumference(double r)
{
    return 2 * PI * r;
}

// d. area: berdasarkan rumus area lingkaran pi * r^2
double area(double r)
{
    return PI * r * r;
}

// -----------Fungsi main--------------

int main()
{
    double center_x, center_y;
    double point_x, point_y;
    double r; 
    
    getCoordinates(center_x, center_y, point_x, point_y);  
    r = radius(center_x, center_y, point_x, point_y); 
    outputResults(r);
    
    return 0;
}