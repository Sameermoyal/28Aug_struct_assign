#include<bits/stdc++.h>
using namespace std;

struct Doctor {
    
    string specialization;
    int id;
    int patients[7];
    int sol(){
        int k=0;
        for(int i=0;i<7;i++){
            k+=patients[i];
        }
        return k;
    }
    
};


int main(){
    int n;
    cin>>n;
    Doctor obj[n];
    int ans=0;
    int id;
    for(int i=0;i<n;i++){
        cin>>obj[i].specialization;
        cin>>obj[i].id;
        for(int j=0;j<7;j++){
            cin>>obj[i].patients[j];
        }
        if(ans<obj[i].sol()){
            ans=obj[i].sol();
            id=obj[i].id;
        }
    }
    cout<<id;
    return 0;
}
