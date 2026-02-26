//
// Created by ML103 on 2/26/2026.
//
#include <iostream>
#include <string>
#include <iostream>
#include <cmath>   // pow() ve sqrt() fonksiyonları için gerekli
#include <string>
using namespace std;



    int main() {

        double x1, y1, x2, y2;
        cout << "Enter x1: ";
        cin >> x1;
        cout << "Enter y1: ";
        cin >> y1;
        cout << "Enter x2: ";
        cin >> x2;
        cout << "Enter y2: ";
        cin >> y2;
        double x_farki = x2 - x1;
        double x_kare = x_farki * x_farki;
        double y_farki = y2 - y1;
        double y_kare = y_farki * y_farki;
        double kok_ici = x_kare + y_kare;
        double sonuc = sqrt(kok_ici);
        cout << "Distance: " << sonuc << endl;

        return 0;
    }
