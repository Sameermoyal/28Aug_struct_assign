#include<bits/stdc++.h>
using namespace std;

struct FootballTeam {
    
    string name;
    string coach;
    int scored[11];
    int sol(){
        int k=0;
        for(int i=0;i<11;i++){
            k+=scored[i];
        }
        return k;
    }
    
};


int main(){
    int n;
    cin>>n;
    FootballTeam obj[n];
    int ans=0;
    string name;
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].coach;
        for(int j=0;j<11;j++){
            cin>>obj[i].scored[j];
        }
        if(ans<obj[i].sol()){
            ans=obj[i].sol();
            name=obj[i].name;
        }
    }
    cout<<name;
    return 0;
}
