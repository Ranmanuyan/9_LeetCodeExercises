/*
* @Author: Lei Liu
* @Date:   2020-09-14 15:55:28
* @Last Modified by:   Lei Liu
* @Last Modified time: 2020-09-14 17:31:34
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

string pairPrefix(string str1, string str2){

	string result;
	int n1 = str1.length();
	int n2 = str2.length();

	for(int i=0, j=0; i < n1 && j<n2; i++, j++){

		if(str1[i] == str2[j]){
			result.push_back(str1[i]);
		}
		else
			break;
	}

	return result;
}



string longestCommonPrefix(vector<string>& strs) {

	int n = strs.size();

	string prefix = strs[0];

	for(int i=1; i<n;i++){
		prefix = pairPrefix(prefix, strs[i]);
	}

	return prefix;
       
}


int main(){

	vector<string> arr ;
	arr.push_back("geeksforgeeks");
	arr.push_back("geeks");
	arr.push_back("geek");
	arr.push_back("geezer");

    // int n = sizeof(arr) / sizeof(arr[0]); 
  
    string ans = longestCommonPrefix(arr); 
  
    if (ans.length()) 
        cout << "The longest common prefix is "<< ans <<endl; 
    else
        cout << "There is no common prefix"<<endl; 
  
    return (0); 

    
}