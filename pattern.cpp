#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"entre the value of n"<<endl;
    cin>>n;
    int row;
    for ( row = 1; row <=n; row++){
        int col;
        for(col=1;col<=(n-row)+1;col++){
            cout<<col<<" ";
        }
        int star;
        for(star=1;star<=(row-1)*2;star++){
            cout<<"*"<<" ";
        }
       int rev=n-row+1;
       while(rev>=1){
        cout<<rev<<" ";
        rev--;
       }
        cout<<endl;
        

    }
    
    

    return 0;
}