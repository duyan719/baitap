#include <iostream>
using namespace std;
 
int main()
{
    for(int i = 1; i <= 5; i++) { 
        // in ky tu khoang trang
        for(int j = i; j < 5; j++) {
            cout << " ";
        }
 
        // in ky tu ngoi sao
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
 
        // xuong dong ke tiep
        cout << endl;
    }
    return 0;
}