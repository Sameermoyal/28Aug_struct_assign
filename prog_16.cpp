#include<bits/stdc++.h>
using namespace std;

struct GroceryStore {
    
    string name;
    string location;
    int prices[4];
    
};


int main(){
    int n;
    cin>>n;
    GroceryStore obj[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].location;
        for(int j=0;j<4;j++){
            cin>>obj[i].prices[j];
            ans+=obj[i].prices[j];
        }
    }
    
    cout<<ans;
    return 0;
}
