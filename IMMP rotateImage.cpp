/* Rotate image (Leetcode) nd Rotate by 90 degree (GFG)

*/

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<i;j++){ // OR this can be written-- for(int j=i;j<col;j++)
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
    	}
}

int main(){
	
	
} 
