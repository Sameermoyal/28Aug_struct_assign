#include<bits/stdc++.h>
using namespace std;

struct Customer {
    
    string name;
    int id;
    int prices[5];
    void sol(){
        int ans=0;
        for(auto it:prices){
            ans+=it;
        }
        cout<<ans;
    }
    
};


int main(){
    Customer obj;
    cin>>obj.name;
    cin>>obj.id;
    for(int i=0;i<5;i++){
        cin>>obj.prices[i];
    }
    obj.sol();
    
    return 0;
}
