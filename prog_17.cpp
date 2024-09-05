#include<bits/stdc++.h>
using namespace std;

struct Apartment {
    
    string name;
    int number;
    int rent[12];
    int sol(){
        int k=0;
        for(int i=0;i<12;i++){
            k+=rent[i];
        }
        return k;
    }
    
};


int main(){
    int n;
    cin>>n;
    Apartment obj[n];
    int ans=0;
    string name;
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].number;
        for(int j=0;j<12;j++){
            cin>>obj[i].rent[j];
        }
        if(ans<obj[i].sol()){
            ans=obj[i].sol();
            name=obj[i].name;
        }
    }
    cout<<name;
    return 0;
}
