/*
* @Author: Lei Liu
* @Date:   2020-08-28 10:46:43
* @Last Modified by:   Lei Liu
* @Last Modified time: 2020-09-14 17:44:02
*/



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

bool palindrome(int x){
	
	

	int origin = x;
	if(x>= 0){
		int y=0;
		int z=0;
		

		while(x != 0){
			y = x % 10;		
			z = z*10 + y;
			x = x/10;
		}

		if(origin == z){
			return true;
		}
	}else{

		return false;
	}
	

	
	return false;
}



int main(){
	int x = 122;
	bool flag = palindrome(x);
	cout << flag <<endl;    
}