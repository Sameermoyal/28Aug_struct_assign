#include<bits/stdc++.h>
using namespace std;

struct Game {
    
    string name;
    string developers;
    int rating[5];
    float sol(){
        float ans =0;
        for(int i=0;i<5;i++){
            ans+=rating[i];
        }
        return ans/5.0;
    }
    
};


int main(){
    int n;
    cin>>n;
    Game obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].developers;
        for(int j=0;j<5;j++){
            cin>>obj[i].rating[j];
        }
    }
    float arr[n];
    for(int i=0;i<n;i++){
        arr[i]=obj[i].sol();
    }
    string name;
    float ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
            name=obj[i].name;
        }
    }
    cout<<name;
    return 0;
}
