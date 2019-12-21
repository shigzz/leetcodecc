#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> res;
    for (int i=0;i<n;i++){
        res.push_back(vector<int>(n));
    }
    int l,r,b,f;
    l=0,r=n-1,f=0,b=n-1;
    int total=n*n;
    int num=1;
    while(num<=total){
        //cout<<num<<endl;
        for (int i=l;i<=r;i++) res[f][i]=num++;
        f++;
        for (int i=f;i<=b;i++) res[i][r]=num++;
        r--;
        for (int i=r;i>=l;i--) res[b][i]=num++;
        b--;
        for (int i=b;i>=f;i--) res[i][l]=num++;
        l++;
    }
    return res;
}

int main(){
    vector<vector<int>> mat = generateMatrix(3);
    for (vector<vector<int>>::iterator it=mat.begin();it!=mat.end();it++){
        vector<int> row = *it;
        for (vector<int>::iterator itt=row.begin();itt!=row.end();itt++){
            cout<<*itt<<" ";
        }
        cout<<endl;
    }
    return 0;
}