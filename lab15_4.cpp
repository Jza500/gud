#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int Bath[4] = {a,b,c,d};
	for(int i = 0;i < 4;i++){
	    int random = rand() % (4-i) + i;
		swap(Bath[i],Bath[random]);
	}
	a = Bath[0];
	b = Bath[1];
	c = Bath[2];
	d = Bath[3];
}
