#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int check = 0;
    int t;
    int temp[7];
    cin >> t;
    while (t--){
        for (int i = 0 ; i < 7 ; i++ ){
            int a = 0; 
            cin>>a;
            temp[i]=a;
        }
        sort(temp,temp+7);
        for (int i = 0 ; i < 7 ; i++ ){
            if (i != 6){
                check += temp[i]*(-1);
            }
            else{ 
                check += temp[6];
            }
        }
        cout<<check<<endl;
        check = 0; 
    }
}