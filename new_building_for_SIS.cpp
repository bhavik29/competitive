#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int t[2];
int f[2];

int main(){
	int n, h, a, b, k;
	int time;
	cin >> n >> h >> a >> b >> k;
	while(k--){
		cin >> t[0] >> f[0] >> t[1] >> f[1];
		if(t[0] == t[1]){
			time = abs(f[0] - f[1]);
		}else if(f[0] >= a &&  f[0] <= b){
			time = abs(t[1] - t[0]);
			time += abs(f[1] - f[0]);
		}else if(f[0] < a || f[0] > b){
			if(abs(f[0] - a) <= abs(f[0] - b)){
				time = abs(f[0] - a);
				time += abs(t[1] - t[0]);
				time += abs(f[1] - a);
			}else if(abs(f[0] - a) > abs(f[0] - b)){
				time = abs(f[0] - b);
				time += abs(t[1] - t[0]);
				time += abs(f[1] - b);
			}
		}
		cout << time << endl;
	}
}