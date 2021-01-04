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
#include <vector>
typedef long long ll;
using namespace std;

vector<int> twosum(){

	int target = 9;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	vector<int> result;



	
	std::vector<int>::iterator it;
	std::vector<int>::iterator c;
	for(it = nums.begin(); it !=nums.end(); ++it){
		for(c = it+1; c !=nums.end(); ++c){
			if(*it + *c ==target){
				result.push_back(*c);
				result.push_back(*it);
			}
		}
	}
	return result;
}

vector<int> twosum1(){

	int target = 9;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	vector<int> result;

	for(int i =0; i< nums.size(); i++){
		for(int j= i+1; j< nums.size(); j++){
			if(nums.at(i) + nums.at(j)==target){
				result.push_back(i);
				result.push_back(j);
			}
		}
	}
	return result;
}


int main(){

	vector<int> result;
	result = twosum1();
	std::vector<int>::iterator c;
	for(c = result.begin(); c !=result.end(); ++c){
		cout << *c <<endl;
	}
}