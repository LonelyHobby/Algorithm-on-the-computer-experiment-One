// ConsoleApplication12.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void delek()
{
	int m = a.size();
	if (k>=m)
	{
		a.erase();
		return;
	}
	while (k>0)
	{
		for (size_t i = 0; (i < a.size()-1)&&(a[i]<=a[i+1]); i++)	
			a.erase(i,1);
			k--;
	}
	while (a.size()>1&&a[0]='0')
	{
		a.erase(0, 1);
	}
}

void Divide()
{
	k = 1;
	if (n<3)
	{
		a[1] = 0;
		return;
	}
	if (n<5)
	{
		a[k] = 1;
		a[++k] = n - 1;
		return;
	}
	a[1] = 2;
	n -= 2;
	while (n>a[k])
	{
		k++;
		a[k] = a[k - 1] + 1;
		n -= a[k];
	}
	if (n==a[k])
	{
		a[k]++;
		n--;
	}
	for (size_t i = 0; i < n; i++)
	{
		a[k - i]++;
	}
}
int main()
{
    return 0;
}

