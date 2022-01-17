#include <iostream>
using namespace std;

const int N = 500;
int Q[N];
int last = 0;

void enqueue(int item) {
	if (last == N) {
		cout << "Queue is full" << endl;
	}
	else {
		Q[last] = item;
		last++;
	}
}
void dequeue() {
	int item, i;
	if (last == 0) {
		cout << "Queue is empty" << endl;
	}
	else {
		item = Q[0];
		for (i = 1;i < last;i++) {
			Q[i - 1] = Q[i];
		}
		last--;
	}
}
void reset() {
	last = 0;
}
void main() {
	int ch,val;
	while (1) {
		cout << "1-Enqueue 2-Dequeue 3-Display\n? ";cin >> ch;
		switch (ch)
		{
		case 1: {
			cout << "The el:";cin >> val;
			enqueue(val);
			break;
		}
		case 2: {
			dequeue();
			break;
		}
		case 3: {
			for (int i = 0;i < last+1;i++) {
				cout << Q[i] << " ";
			}
			cout << endl;
			break;
		}
		default:
			break;
		}
	}
}
