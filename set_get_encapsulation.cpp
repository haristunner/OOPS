#include<bits/stdc++.h>
using namespace std;

class Encapsulation{
	private:
		int x;
	public:
		void set(int a){
			x=a;
		}
		int get(){
			return x;
		}
};

int main(){
	int result;
	Encapsulation obj;
	obj.set(10);
	result=obj.get();
	cout<<result;
	return 0;
}
