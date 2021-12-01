#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Inputkan Nilai x : ";
    cin>>x;
    cout<<"Inputkan Nilai z : ";
    cin>>y;

    if(x%2!=0 && y%2!=0){
        cout<<"semua bilangan ganjil\n";
    }else if(x%2!=0 && y%2==0){
        cout<<"x ganjil dan y genap\n";
    }else if(x%2==0 && y%2==0){
        cout<<"semua bilangan genap\n";
    }else{
        cout<<"x genap dan y ganjil\n";
    }
}