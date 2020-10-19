#include <iostream>

using namespace std;

void area(double *length, double *width, double *ar)
{
    *ar = *length * *width;
}

void perimeter(double *length, double *width, double *peri)
{
    *peri = (*length + *width) * 2 ;
    *peri = 2* *peri;
}

int main()
{
    double length;
    double width;
    double ar = 0;
    double peri = 0;
    cout << "LENGTH - "; 
    cin >> length;
    cout << "WIDTH - ";
    cin >> width;
    area(&length, &width, &ar);
    cout << "Area of your Rectangle = " << ar << endl;
    perimeter(&length, &width, &peri);
    cout << "Perimeter of your Rectangle = " << peri;

}