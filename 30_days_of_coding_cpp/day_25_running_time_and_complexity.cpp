#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,t;
    cin>>t;
    
    for(int j=0;j<t;j++){
        bool isPrime=true;
        cin>>n;
        if(n==1){
            isPrime=false;
        }
        else{
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    isPrime=false;
                    break;
                }
                else{
                    isPrime=true;
                }
            }
        }
        if(!isPrime){
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
    }
    
    
    return 0;
}
