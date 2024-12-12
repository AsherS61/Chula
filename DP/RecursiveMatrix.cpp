#include <bits/stdc++.h>
using namespace std;

int a,b;


void recur(vector<vector<int>> &v, int a, int b,int top,int bottom,int left,int right) {

    if (a == 0) {
        v[top][left] = b;
    } else {
        //top left
        recur(v, a-1 , b, top, (top+bottom)/2, left, (left+right)/2);
        //top right
        recur(v, a-1, b-1, top, (top+bottom)/2, (left+right)/2 , right);
        //bottom left
        recur(v, a-1,b+1, (top+bottom)/2, bottom, left, (left+right)/2);
        //bottom right
        recur(v, a-1,b, (top+bottom)/2, bottom, (left+right)/2, right);
    }
}


int main() {
    cin>>a>>b;
    vector<vector<int>> matrix(pow(2,a), vector<int>(pow(2,a)));

    recur(matrix, a, b , 0, pow(2,a), 0, pow(2,a));

    for (int i = 0; i < pow(2,a); i++) {
        for (int j = 0; j < pow(2,a); j++) {
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
}