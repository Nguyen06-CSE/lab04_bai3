#include<iostream>
#include<math.h>
#include<conio.h>


using namespace std;

#include"menu.h"
#include"xuLiMenu.h"


int main() {
    int n, choise;
    char tiep, stop;

    do {
        system("cls"); // Clear screen (optional, may not work on all systems)
        inMenu();
        do {
        cout << "hay nhap lua chon (1-5): ";
        cin >> choise;
        
        if (choise < 1 || choise > 5) {
            cout << "ban chon sai chuc nang, vui long nhap lai.";
        }
        cout << "(neu ban muon thoat khoi CT hay nhan phim X/x, ban muon nhap lai hay bam phim bat ki) ";
        cin >> stop;
        if(stop == 'x' || stop == 'X'){
            return 0;
        }
        
    } while (choise < 1 || choise > 5);
        cout << "Hay nhap so n: \n";
        cin >> n;

        chonMenu(choise, n);

        cout << "Nhap Y/y de chon chuc nang khac hoac nhan phim bat ki de ket thuc\n";
        cin >> tiep;

    } while (tiep == 'Y' || tiep == 'y');
    
    return 0;
}