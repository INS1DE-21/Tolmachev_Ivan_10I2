#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int max = 0, a, b, s = 0;
	
	cin >> a >> b;
	
	for (int i = a; i <= b; i++)
		{
			
		if (i <= 10 && i >= -10)
		{continue; }
		
		if (i > 10 || i < -10)
			{
			int c = i, p = 0;
			while(c > 0)
				{c = c/10; p++;}
			int d = i/pow(10, p-2);
			int f = i%100;
			int v = d - f;
			if (d - f!=0 && i%v == 0)
				{
				s++;
				if (i > max) {max = i;}
				}
			}
			
		}
		
		
	cout << s << " " << max << endl;
	return 0;
}
