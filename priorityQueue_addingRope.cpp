// given N ropes you have to join the ropes
//together in minimum cost fo joining 2 diffrent size rope A and B is (A+B)
// 4 ,2 ,3,6
// (2+3) +(2+3+4) + (2 + 3 + 4 + 6)
// forst
#include <bits/stdc++.h>
using namespace std;

int joinRope(int a[], int n) {
	priority_queue<int, vector<int>, greater<int>> pq(a, a + n);
	int val = 0;
	while (pq.size() > 1) {
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		int sum = a + b;
		val += sum;
		pq.push(sum);
	}
	return val;
}
int main() {
	int a[] = {4, 2, 3, 6};

	cout << joinRope(a, 4);



}



