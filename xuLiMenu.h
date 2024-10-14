#pragma one
#include<iostream>
#include<math.h>

#define TAB '\t'


using namespace std;




bool kiemTraNT(int n);
void xuatSoNT(int n);
int demSoNT(int n);
int tongUocSoNT(int n);
void PTThuaSoNguyenTo(int n);


int chonMenu(int choise, int n){
    switch(choise){
        case 1 :
            cout << "ban vua chon chuc nang kiem tra n co phai la so NT \n";
            
            if (kiemTraNT(n) == true) {
                cout << n << " la so NT\n";
            }
            else {
                cout << n << " ko phai la so NT\n";
            }
            break;
        case 2 :
            cout << "xuat ra man hinh cac so NT tu 1 toi n\n";
            xuatSoNT(n);
            break;
        case 3 :
            cout << "ban vua chon chuc nang dem so luong cac so NT tu 1 toi n \n";
            cout << "\ntu 1 toi " << n << " co so NT la " << demSoNT(n) << endl;
            
            break;
        case 4 :
            cout << "ban vua chon chuc nang tinh tong cac uoc so NT tu 1 toi n \n";
            cout << "\ntong cac uoc so NT tu 1 toi " << n << " la " << tongUocSoNT(n) << endl;
            break;
        case 5 :
            cout << "ban vua chon chuc nang phan tich n thanh thua so NT \n";
            cout << n << "=";
            PTThuaSoNguyenTo(n);
            break;

    }
    

}


bool kiemTraNT(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void xuatSoNT(int n) {
    cout << "Nhung so nguyen to la: \n";
    int dem = 0;
    for (int i = 2; i <= n; i++) {
        if (kiemTraNT(i)) {
            ++dem;
            cout << i << TAB; // Print prime numbers with tab space
            if(dem == 5){
                cout << endl;
                dem *= 0;
            }
        }
    }
    cout << endl;
}

int demSoNT(int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(kiemTraNT(n)){
            ++dem;
        }
    }
    return dem;
}

int tongUocSoNT(int n){
    int sum = 0;
    for(int i = 2; i <= n; i++){
        if(kiemTraNT(i) && n % i == 0){
            sum += i;
        }
    }
    return sum;
}

void PTThuaSoNguyenTo(int n) {
    

    for (int i = 2; i <= sqrt(n); i ++) {
       
        while (n % i == 0) {
            cout << i << ".";
            n /= i;
        }
    }
    
    
    if (n > 2) {
        cout << n;
    }

    cout << endl;
}