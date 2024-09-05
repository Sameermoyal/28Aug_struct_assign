#include<bits/stdc++.h>
using namespace std;

struct Store {
    
    string name;
    string address;
    int products[5];
    
};


int main(){
    int n;
    cin>>n;
    Store obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].address;
        for(int j=0;j<5;j++){
            cin>>obj[i].products[j];
            if(obj[i].products[j]>1000){
                cout<<obj[i].products[j];
            }
            cout<<endl;
        }
    }
    
    
    return 0;
}
