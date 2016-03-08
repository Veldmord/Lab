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
	Bool(char *x, char *z)
	{
		int q = strcmp(x, z);
		if (q == 1)
			cout << "False";
		else
			cout << "True";


	}
	Bool(int a, int c) //: nomer1(c), nomer2(b)
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
	
	int q, w;
	cin >> q;
	cin >> w;
	Bool n2(q, w);   // сравнение чисел через конструктор 

	Bool n1;      // стравнение чисел тупо через функцию 
	int a, c;     
	cin >> a;
	cin >> c;
	
	char *str1;
	char *str2;
	cin >> str1;
	cin >> str2;
	Bool n3(str1,str2);   // стравнение строки через конструктор 


	n1.compar(c, a);


}
