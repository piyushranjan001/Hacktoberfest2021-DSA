#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
int union_count(int a[],int n, int b[],int m){
    set<int>s;
    fo(i,n){
        s.insert(a[i]);
    }
    fo(i,m){
        s.insert(b[i]);
    }
    return s.size();
}

int main(){
    
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,5};   
    int ct = union_count(a,5,b,5);
    cout<<ct;

}