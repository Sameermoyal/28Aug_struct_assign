#include<bits/stdc++.h>
using namespace std;

struct Car {
    
    string model;
    int year;
    int price;
    
};


int main(){
    int n;
    cin>>n;
    Car obj[n];
    for(int i=0;i<n;i++){
        cout<<"enter model"<<endl;
        cin>>obj[i].model;
        cout<<"enter year";
        cin>>obj[i].year;
        cout<<"enter price";
        cin>>obj[i].price;
    }
    int year=INT_MAX;
    int price = 0;
    string model;
    
    for(int i=0;i<n;i++){
        if(year>obj[i].year){
            model=obj[i].model;
            year=obj[i].year;
            price=obj[i].price;
            
        }
    }
    
    cout<<year<<" "<<model<<" "<<price;
    
    
    return 0;
}
