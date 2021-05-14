#include<bits/stdc++.h>
using namespace std;
int x[30];
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
        x[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;++i){
        if(x[i]%2==1){
            count++;
        }
    }
    printf("%d",max(1,count));
    return 0;
}