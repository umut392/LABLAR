//
// Created by ML103 on 2/26/2026.
//
#include <iostream>
#include <string>

#include "time_logic.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int time;

    // 1. Kullanıcıdan saniye al
    cout << "Enter time (seconds): ";
    cin >> time;


    int toplam_dakika = time / 60;
    int dakika1 = toplam_dakika % 60;
    int saat = toplam_dakika / 60;
    int saniye = time % 60;


    cout << time << " seconds is " << saat << " hours, "
         << dakika1 << " minutes, and " << saniye << " seconds." << endl;


}