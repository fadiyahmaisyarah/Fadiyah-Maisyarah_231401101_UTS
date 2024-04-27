#include <iostream>
using namespace std;
int main()
{
    int n;
    do {
        cout<<"Masukkan Nilai (masukkan -1 untuk mengakhiri): ";
        cin>>n;
        if (n < 2 || n > 10) {
            cout << "Inputan tidak memenuhi batas";
            continue;
        }
        for(int i=0; i< n; ++i) {
            for(int j=0; j<=i; ++j) {
                cout<< "x";
            }
            cout<<endl;
        }
        int y;
        y=n;
        for(int i=n; i>0; --i) {
            for(int k=0; k<y; k++) {
                cout<< " ";
            }
            for(int j=1; j<=i; ++j) {
                cout<<"x";
            }
            cout<<endl;
            y++;
        }
    } while (n != -1);
    
    return 0;
}