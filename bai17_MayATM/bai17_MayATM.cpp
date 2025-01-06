// bai17_MayATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    { int tien;
    cout << "so tien can rut: "; cin >> tien;
    int soto500;
        soto500 = tien / 500;
    tien = tien % 500;   
    if (soto500 > 0)
        cout << "so to 500 la: " << soto500;
    
        int soto200;
            soto200 = tien / 200;
            tien = tien % 200; 
            if (soto200 > 0)
            cout << "\nso to 200 la: " << soto200;

            int soto100;
            soto100 = tien / 100;
            tien = tien % 100;
            if (soto100 > 0)
            cout << "\nso to 100 la: " << soto100;

            int soto50;
            soto50 = tien / 50;
            tien = tien % 50;
            if (soto50 > 0)
            cout << "\nso to 50 la: " << soto50;

            int soto20;
            soto20 = tien / 20;
            tien = tien % 20;
            if (soto20 > 0)
            cout << "\nso to 20 la: " << soto20;

            int soto10;
            soto10 = tien / 10;
            tien = tien % 10;
            if (soto10 > 0)
            cout << "\nso to 10 la: " << soto10;

            int soto5;
            soto5 = tien / 5;
            tien = tien % 5;
            if (soto5 > 0)
                cout << "\nso to 5 la: " << soto5;

            int soto2;
            soto2 = tien / 2;
            tien = tien % 2;
            if (soto2 > 0)
                cout << "\nso to 2 la: " << soto2;

            int soto1;
            soto1 = tien / 1;
            tien = tien % 1;
            if (soto1 > 0)
                cout << "\nso to 1 la: " << soto1;

            cout << "\nso tien con lai: " << tien << endl;

    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
