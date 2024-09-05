#include<bits/stdc++.h>
using namespace std;

struct Patient {
    
    int id;
    string name;
    int records[4];
    void sol(){
        float ans =0;
        for(int i=0;i<4;i++){
            ans+=records[i];
        }
        cout<<ans/4.0;
    }
    
};


int main(){
    int n;
    cin>>n;
    Patient obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].id;
        cin>>obj[i].name;
        for(int j=0;j<4;j++){
            cin>>obj[i].records[j];
        }
    }
    
    return 0;
}
