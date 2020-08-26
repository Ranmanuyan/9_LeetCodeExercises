#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;



int reverse(int x){
	int y=0;
	int z=0;

// integer logic
// the magic is that can handle the 200, with 0s.
// dont need exceptions.

	while(x != 0){
		y = x % 10;		
		z = z*10 + y;
		x = x/10;
	}
	return z;
}



int main(){
	int x = 231;
	cout << reverse(x) <<endl;    
}