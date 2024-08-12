#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cenx, ceny, re, rp , mousex, mousey; 
    double ansx, ansy;
    cin >> cenx >> ceny >> re >> rp >> mousex >> mousey;
    
    int reye = re - rp;
    int A,B,C;
    A = mousex - cenx;
    B = mousey - ceny;
    C = pow(A,2) + pow(B,2);
    double sqrt_C = sqrt(C);
    ansx = ((reye/sqrt_C)*A) + cenx;
    ansy = ((reye/sqrt_C)*B) + ceny;
    
    cout << round(ansx) << " " << round(ansy) << endl;
}