//     * 
//    * *
//   * * *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int space=n-i;
        for( int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int j=1 ;j<=i;j++){
            cout<<"*";
        }
        for(int z=i-1;z>0;z--){
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}
