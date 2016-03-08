#pragma once


class Bool
{
private:
	int nomer1;
	int nomer2;


public:
	Bool() {

	}
	~Bool() {
		
	}
	
	Bool(int a, int c) //: nomer1(a), nomer2(c)
	{
		if (a > c)
			cout << "True";
		else
			cout << "False";
	}
	
	int compar(int c, int b)
	{
		if (c > b)
			cout << "True";
		else
			cout << "False";
	}


};


int main()
{
	Bool n1;
	int q, w;
	cin >> q;
	cin >> w;
	Bool n2(q, w);
	int a, c;
	cin >> a;
	cin >> c;

	n1.compar(c, a);


}
