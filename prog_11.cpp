#include<bits/stdc++.h>
using namespace std;

struct Hotel {
    
    string name;
    string location;
    int rate[5];
    
};


int main(){
    int n;
    cin>>n;
    int arr[n];
    Hotel obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].location;
        int k =0;
        for(int j=0;j<5;j++){
            cin>>obj[i].rate[j];
            k+=obj[i].rate[j];
        }
        arr[i]=k;
    }
    int mini =INT_MAX;
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
            index = i;
        }
    }
    cout<<obj[index].name;
    return 0;
}
