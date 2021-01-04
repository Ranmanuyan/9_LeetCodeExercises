/*
* @Author: Lei Liu
* @Date:   2020-09-14 15:15:23
* @Last Modified by:   Lei Liu
* @Last Modified time: 2020-09-14 15:37:51
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

int romanToInt(string s) {
        
        map<char, int> m ;
        m['I'] =  1;
        m['V'] =  5;
        m['X'] =  10;
        m['L'] =  50;
        m['C'] =  100;
        m['M'] =  1000;
        
        
        int total = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i+1]] <= m[s[i]])  
            	total += m[s[i]]; 
            else  
            	total -= m[s[i]];  
        }

        return total;
    }




int main(){



    
}