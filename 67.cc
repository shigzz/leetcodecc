#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    vector<char> res;
    int flag = 0;
    for (int i=0,j=0;i<a.length()||j<b.length();i++,j++){
        int ta = i<a.length()?a[i]-48:0;
        int tb = j<b.length()?b[i]-48:0;
        int tmp = ta+tb+flag;
        flag = tmp/2;
        tmp = tmp%2;
        res.push_back(char(tmp+48));
    }
    if (flag){
        res.push_back('1');
    }
    reverse(res.begin(),res.end());
    return string(res.begin(),res.end());
}

int main(){
    string a = addBinary("111","111");
    cout<<a<<endl;
    return 0;
}