// Question

// Given a set of N nuts of different sizes and N bolts of different sizes. There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.

// Comparison of a nut to another nut or a bolt to another bolt is not allowed. It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.
// The elements should follow the following order ! # $ % & * @ ^ ~ .



#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    
	    sort(nuts,nuts+n);
	    sort(bolts,bolts+n);
	}

};