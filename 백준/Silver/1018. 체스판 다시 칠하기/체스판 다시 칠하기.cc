#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};
	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

int main(){
    int n,m;
    int fin=64;
    int mid;
    cin>>n>>m;
    vector<vector<char>> chess(n,vector<char>(m));

    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>chess[i][j];
        }
    }
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            int wb=0,bw=0;
            for(int k=0;k<8;k++){
                for(int y=0;y<8;y++){
                    if(chess[i+k][j+y]!=BW[k][y]) bw++;
                    else if(chess[i+k][j+y]!=WB[k][y]) wb++;
                }
            }
            mid=min(bw,wb);
            if(mid<=fin) fin=mid;
        }
    }
    cout<<fin<<endl;

    return 0;
}