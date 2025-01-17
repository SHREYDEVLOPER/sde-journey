 	class Solution {
	public:
		vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
			vector<int> a;
			int r=0,c=0;
			int m = mat.size(), n = mat[0].size();
			bool up = true;
			while(r<m && c<n){
				if(up){
					while(r>0 && c<n-1){
						a.push_back(mat[r][c]);
						r--;
						c++;
					}
					a.push_back(mat[r][c]);
					if(c==n-1) r++;
					else c++;
				}
				else{
					while(r<m-1 && c>0){
						a.push_back(mat[r][c]);
						r++;
						c--;
					}
					a.push_back(mat[r][c]);
					if(r==m-1) c++;
					else r++;
				}
				up = !up;
			}
			return a;
		}
	};