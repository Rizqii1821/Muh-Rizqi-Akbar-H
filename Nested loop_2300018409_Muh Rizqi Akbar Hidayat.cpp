#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int p,q;
    cout<<"Masukkan jumlah kolom: ";
    cin>>p;
    cout<<"Masukkan jumlah baris: ";
    cin>>q;
    system("CLS");
    for(int r=1; r<=p; r++){
        for(int s=1; s<q; s++){
            cout<<"[_]";
        }
        cout<<"[_]"<<endl;
    }
}