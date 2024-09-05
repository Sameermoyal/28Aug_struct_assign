#include<bits/stdc++.h>
using namespace std;

struct Movie {
    
    string title;
    string director;
    int rating;
    
};


int main(){
    int n;
    cin>>n;
    Movie obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].title;
        cin>>obj[i].director;
        cin>>obj[i].rating;
    }
    for(int i=0;i<5;i++){
        if(obj[i].rating>8){
            cout<<obj[i].title;
        }
        cout<<endl;
    }
    return 0;
}
