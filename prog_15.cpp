#include<bits/stdc++.h>
using namespace std;

struct Vehicle {
    
    string type;
    string brand;
    int fuel;
    
};


int main(){
    int n;
    cin>>n;
    Vehicle obj[n];
    int ans=0;
    string name;
    for(int i=0;i<n;i++){
        cin>>obj[i].type;
        cin>>obj[i].brand;
        cin>>obj[i].fuel;
        if(obj[i].fuel>ans){
            ans=obj[i].fuel;
            name=obj[i].brand;
        }
    }
    
    cout<<name;
    return 0;
}
