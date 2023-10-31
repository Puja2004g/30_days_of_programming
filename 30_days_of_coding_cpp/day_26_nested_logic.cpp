#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d1,d2,m1,m2,y1,y2;
    int fine;
    
    cin>>d1>>m1>>y1; //return date
    cin>>d2>>m2>>y2; //due date
    
    if(d1==d2 && m1==m2 && y1==y2){
        fine=0;
    }
    
    if(d1<d2 && m1<m2 && y1<y2){
        fine=0;
    }
    
    if(d1>d2){
        if(m1==m2 && y1==y2){
            fine=15*(d1-d2);
        }
    }
    
    if(m1>m2){
        if(y1==y2){
            fine=500*(m1-m2);
        }
    }
    
    if(y1>y2){
        fine=10000;
    }
    
    cout<<fine;
    
    return 0;
}
