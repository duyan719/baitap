#include <iostream>
#include <string>
#include "stdio.h"
#include <windows.h>
/*#######################*/

using namespace std;

//Nhap
void nhap(int a[], int n) {
 for (int i = 0; i < n; i++) {
 cout << "Nhap vao phan tu a[" << i << "] : ";
 cin >> a[i];
 }
}
//Xuat
void xuat(int a[], int n) {
 for (int i = 0; i < n; i++)
 cout << a[i] << " ";
}
//Tim kiem
void TimKiem(int a[],int n, int phantu){
    //khai bao bien j de luu lai ket qua tim kiem
    int j;
    //duyet mang bang vong lap for
    for(int i = 0; i < n; i++){
        //neu co phan tu can tim kiem trong mang
        if(phantu == a[i]){
            //gan lai bien luu dia chi j bang dia chi thu i
            j = i;
            break;
        }
    }
    //neu j co gia tri dia chi tim kiem thi hien thi ket qua
    if(j != NULL || j >= 0){
        printf("Tim thay phan tu %d tai vi tri %d", phantu, j);
    }
	/*else{
        printf("\nKhong tim thay phan tu %d", phantu, j);
    }*/
}
//Hoan Vi
void Hoan_Vi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
//Sap xep tang dan
void Sap_Xep_Tang_Dan(int a[], int n)
{
	// vong lap for duyet tung phan tu cua mang : 0 -> n - 1
	for (int i = 0; i < n; i++)
	{
		// vòng lap duyet tu vi tri i + 1 tro ve cuoi mang : n - 1
		for (int j = i + 1; j < n; j++)
		{
			// neu phat hien thang ben trai ma lon hon thang ben phai thi lap tuc hoan vi - doi cho 2 thang cho nhau
			if (a[i] > a[j])
			{
				Hoan_Vi(a[i], a[j]);
			}
		}
	}
}
//Sap xep giam dan
void Sap_Xep_Giam_Dan(int a[], int n)
{
	// vong lap for duyet tung phan tu cua mang : 0 -> n - 1
	for (int i = 0; i < n; i++)
	{
		// vòng lap duyet tu vi tri i + 1 tro ve cuoi mang : n - 1
		for (int j = i + 1; j < n; j++)
		{
			// neu phat hien thang ben trai ma nho hon thang ben phai thi lap tuc hoan vi - doi cho 2 thang cho nhau
			if (a[i] < a[j])
			{
				Hoan_Vi(a[i], a[j]);
			}
		}
	}
}
int main() {
	int a[1000];
 	int n;
 	int j;
	bool isExit = false;
	int option;
	do
	{

  cout << "********************MENU********************\n";
        cout << "** 1. Nhap mang.                          **\n";
        cout << "** 2. Xuat.                               **\n";
        cout << "** 3. Tim kiem.                           **\n";
        cout << "** 4. Sap tang.                           **\n";
        cout << "** 5. Sap giam.                           **\n";
        cout << "** 0. Thoat                               **\n";
        cout << "********************************************\n";
        cout << "Nhap tuy chon: ";
   	cin >> option; 
switch (option)
{
case 1:
cout << "Nhap n: ";
 cin >> n;
 nhap(a, n);
   break;
case 2:
 system ("cls");
 cout << "Xuat mang: ";
 xuat(a, n);
 cout << endl;
   break;
case 3:
int phantu;
    printf("\nNhap phan tu can tim kiem: ");
    scanf("%d",&phantu);
    //goi ham tim kiem
    TimKiem(a,n,phantu);
    cout << endl; 
   break;
case 4:
	system ("cls");
	Sap_Xep_Tang_Dan(a, n);
	cout << "\nSo phan tu sau khi sap xep tang dan\n";
	xuat(a, n);
	cout << endl;
	break;
case 5:
	system ("cls");
	Sap_Xep_Giam_Dan(a, n);
	cout << "\nSo phan tu sau khi sap xep giam dan\n";
	xuat(a, n);
	cout << endl;
	break;
case 6:
   isExit = true;
   break;
case 0:
    cout << "\nBan da chon thoat chuong trinh !";
    return 0;
default:
   cout << "Nhap sai vui long nhap lai !" << endl;
}

} while (!isExit);

	
	
	return 0;
}
