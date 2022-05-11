# include<iostream>
# include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n; 
	vector <int> a(n);
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}

	cout << "ARRAY :";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "EVEN :" ;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout <<  a[i] << " ";
		}
	}
	cout << endl;

	cout << "SUM :";
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	cout << sum;
	cout << endl;

	cout << "PRODUCT OF NEGATIVE :";
	int otr_sum = 1;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (a[i] < 0)
		{
			s = s + a[i];
		}
	}
	if (s == 0)
	{
		cout << 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				otr_sum = otr_sum * a[i];
			}
		}
		cout << otr_sum;
	}
	cout << endl;

	cout << "FIRST MIN INDEX :";
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[index])
		{
			index = i;
		}
	}
	cout << index;
	cout << endl;

	cout << "SECOND MAX :";
	int p = 0;
	int min = index;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= a[min])
		{
			min = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[min])
		{
			continue;
		}
		else 
		{
			if (a[i] > a[p]) {
				p = i;
			}
		}
	}
	cout << a[p];
	cout << endl;

	cout << "REVERSE :";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEXES :";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << a[i] << " ";
		}
	}
	return EXIT_SUCCESS;
}