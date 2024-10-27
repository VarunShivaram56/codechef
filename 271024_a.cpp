/*Subscriptions
A new TV streaming service was recently started in Chefland called the Chef-TV.

A group of 
N
N friends in Chefland want to buy Chef-TV subscriptions. We know that 
6
6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is 
X
X rupees. Determine the minimum total cost that the group of 
N
N friends will incur so that everyone in the group is able to use Chef-TV.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers 
N
N and 
X
X — the size of the group of friends and the cost of one subscription.
Output Format
For each test case, output the minimum total cost that the group will incur so that everyone in the group is able to use Chef-TV.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
100
1≤N≤100
1
≤
X
≤
1000
1≤X≤1000*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n%6==0){
	        cout<<(n/6)*x<<endl;
	    }
	    else{
	        cout<<((n/6)+1)*x<<endl;
	    }
	    
	}
	return 0;

}
//This code was renamed to maintain standard naming

