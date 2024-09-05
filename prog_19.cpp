#include<bits/stdc++.h>
using namespace std;

struct Course {
    
    string name;
    string instructer;
    int grades[4];
    int sol(){
        float k=0;
        for(int i=0;i<4;i++){
            k+=grades[i];
        }
        return k/4.0;
    }
    
};


int main(){
    int n;
    cin>>n;
    Course obj[n];
    float ans=0;
    string name;
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].instructer;
        for(int j=0;j<4;j++){
            cin>>obj[i].grades[j];
        }
        if(ans<obj[i].sol()){
            ans=obj[i].sol();
            name=obj[i].name;
        }
    }
    cout<<name;
    return 0;
}
