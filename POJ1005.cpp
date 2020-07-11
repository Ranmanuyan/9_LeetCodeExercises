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


//INPUT: The first line of input will be a positive integer indicating how many data sets will be included (N). 
// Each of the next N lines will contain the X and Y Cartesian coordinates of the land Fred is considering. These will be floating point numbers measured in miles. 
// The Y coordinate will be non-negative. (0,0) will not be given.


// Output
// For each data set, a single line of output should appear. 
// This line should take the form of: 
// “Property N: This property will begin eroding in year Z.” Where N is the data set (counting from 1), and Z is the first year (start from 1) this property will be within the semicircle AT THE END OF YEAR Z. Z must be an integer. 
// After the last data set, this should print out “END OF OUTPUT.”

int eroding(double x, double y);

int main(){

	int N;
	double* X= new double [N];
	double* Y= new double [N];

	cout << "Enter the length and X Y :" <<endl;
	cin >> N;
	for(int i=0; i<N;i++){
		// cout << "Enter the X and Y: " ;
		scanf("%lf %lf", &X[i], &Y[i]);
	}



// Property 1: This property will begin eroding in year 1.
// Property 2: This property will begin eroding in year 20.
// END OF OUTPUT.

	for(int i =0; i<N; i++){
		cout << "Property " << (i+1) << ": This property will begin eroding in year " << eroding(X[i], Y[i]) << "." <<endl;
	}

	cout << "END OF OUTPUT."<<endl;
    
}


// Property 1: This property will begin eroding in year 1.
// Property 2: This property will begin eroding in year 20.
// END OF OUTPUT.




int eroding(double x, double y){

	double year = 0;
	const double PI = atan(1.0)*4;
	year = PI * ((x * x) + (y * y))/100; 

	int year1 =0;
	year1 = ceil(year);


	return year1;
}




