#include <iostream>
#include <string>
#include <vector>





#define RIGHT 0
#define LEFT 1
#define DOWN 2
#define UP 3
#define ln '\n'
#define isValid(a,b,c) (a>=b && a < c ? 1 : 0)
typedef long long ll;


using namespace std;
const int rows = 7;
const int cols = 7;
string str;
int vis[7][7];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};


long long solve(const string& string_path) {
	vector<vector<int>> paths(rows, vector<int>(cols,0));
	paths[0][0] = 1;

	const vector<pair<int,int>> moves = {{-1,0},{1,0}, {0,-1}, {0,1}};

	for (char move: string_path) {
		vector<vector<int>> npaths(rows, vector<int>(cols,0));
		for (int i=0; i < rows; ++i) {
			for (int j=0; j < cols; ++j) {
				if (move == '?' || (move == 'U' && i > 0) || (move == 'L' && j > 0) || (move == 'D' && i < rows -1) || (move == 'R' && j < cols -1)) {
					for (const auto& [dx,dy] : moves) {
						int a = i + dx, b = j + dy;
						if (a >= 0 && a < rows && b >=0 && cols) {
							cout << a << " " << b << endl;
							npaths[i][j] += paths[a][b];
						}
					}
				}
			}
		}
		paths = npaths;
	}
	return paths[rows-1][cols-1];

}


int count_paths(int x,int y,int pos) {
	if (pos==(int)str.length()) {
		return (x==6&&y==0);
	}
	if (x == 6 && y == 0) {
		return 0;
	}

	if (vis[x][y]) {
		return 0;
	}
	int numsOfPaths=0;
	vector<bool> visited(4,-1);
	for (int i = 0; i <4;i++) {
		if (isValid(x+dx[i],0,7) && isValid(y+dy[i],0,7)) {
			visited[i] = vis[x+dx[i]][y+dy[i]];
		}
		if (!visited[DOWN] && !visited[UP] && visited[RIGHT] && visited[LEFT]) {
			return 0;
		}

		if (!visited[RIGHT] && !visited[LEFT] && visited[DOWN] && visited[UP]) {
			return 0;
		}
			
		if (isValid(x-1,0,7) && (isValid(y+1, 0,7) && vis[x-1][y+1] == 1)) {
			if (!visited[RIGHT] && !visited[UP]) {
				return 0;
			}
		}
		
		if (isValid(x+1,0,7) && (isValid(y+1, 0,7) && vis[x+1][y+1] == 1)) {
			if (!visited[RIGHT] && !visited[DOWN]) {
				return 0;
			}
		}
		
		if (isValid(x-1,0,7) && (isValid(y-1, 0,7) && vis[x-1][y-1] == 1)) {
			if (!visited[LEFT] && !visited[UP]) {
				return 0;
			}
		}
		
		if (isValid(x+1,0,7) && (isValid(y-1, 0,7) && vis[x+1][y-1] == 1)) {
			if (!visited[RIGHT] && !visited[DOWN]) {
				return 0;
			}
		}
		vis[x][y] = 1;
		
		if (str[pos] == '?') {
			for (int i =0; i < 4; i++) {
				if (isValid(x+dx[i],0,7) && isValid(y+dy[i],0,7)) {
					numsOfPaths += count_paths(x+dx[i], y+dy[i], pos+1);	
		}
		else if (str[pos] == 'R' && y + 1 <7) {
			numsOfPaths += count_paths(x,y+1, pos+1);
		}
		else if (str[pos] == 'L' && y - 1 <7) {
			numsOfPaths += count_paths(x,y-1, pos+1);
		}
		else if (str[pos] == 'U' && x - 1 <7) {
			numsOfPaths += count_paths(x-1,y, pos+1);
		}
		else if (str[pos] == 'D' && x + 1 <7) {
			numsOfPaths += count_paths(x+1,y, pos+1);
		}
		
	}
 }
 }
  vis[x][y] = 0;
 return numsOfPaths;
}
 


int main() {
	cin >> str;
	cout << count_paths(0,0,0) << ln;
	return 0;
}
