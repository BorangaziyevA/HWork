#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <ctime>
using namespace std;


void main() {

	srand(time(NULL));

	list<int> l(10);
	generate_n(begin(l), 10, []() {return -50 + rand() % 100; });

	///5///
	//ostream_iterator<int> os(cout, " ");

	//int max = 0, min = 0;

	//for (auto i : l)
	//{
	//	cout << i << " ";
	//	if (i > max)
	//		max = i;
	//	if (i < min)
	//		min = i;
	//}
	//cout << endl<<endl;

	//cout << "Max = " << max << endl;

	//cout << "Min = " <<min << endl;

	//max = max - min;


	//cout << "Max - Min  = " << max << endl;

	//for_each(begin(l),end(l),[max](int&i){
	//	if (i%2 == 0)
	//	{
	//		i = max;
	//	}
	//});
	//
	//copy(begin(l), end(l), ostream_iterator<int>(cout, " "));

	///4///
	//int x = 0;
	//for (auto i : l)
	//{
	//	cout << i << " ";
	//	if (x > i)
	//	x = i;
	//}
	//x /= 2;
	//cout << "\nMin number / 2:" << x << endl << endl;

	//for_each(begin(l), end(l), [x](int&i) {
	//	static int cnt = 0;
	//	if (i < 0)
	//	{
	//		cnt++;
	//		if (cnt == 2)
	//		{
	//			i = x;
	//			cnt = 0;
	//		}
	//	}
	//});

	//copy(begin(l), end(l), os);

	///3///
	//ostream_iterator<int> os(cout, " ");
	//int x = 0;
	//for (auto i : l)
	//{
	//	cout << i << " ";
	//	if (x < i)
	//		x = i;
	//}
	//cout << "\nMax number:" << x << endl << endl;

	//for_each(begin(l), end(l), [x](int&i) {
	//	if (i > 0)
	//		i = x;
	//});

	//copy(begin(l), end(l), os);
	//cout << endl;

	///2///
	//int x = 0;
	//x = *(find_if(rbegin(l), rend(l), [](int&i) {return i < 0; }));

	//for (auto i : l)
	//	cout << i << " ";
	//cout << endl<<endl;

	//cout << "Last negative number:" << x << endl << endl;

	//for_each(begin(l), end(l), [x](int &i) {i += x; });

	//for (auto i : l)
	//	cout << i << " ";
	//cout << endl;

	///1///
	//int x = 0;

	//l.emplace(begin(l), 0);

	//for (auto i:l)
	//{
	//	cout << i << " ";
	//	x += i;
	//}
	//cout << "\n\nSrednee arif:"<<x<<"\n\n";



	//replace_if(begin(l), end(l), [](int &i) {return i == 0; }, x);

	//for (auto i : l)
	//{
	//	cout << i << " ";

	//}
	//cout << "\n\n";






	vector<int> v(10);

	generate_n(begin(v), 10, []() {return -50 + rand() % 100; });


	///5///
	//for (auto i : v)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;
	//for_each(begin(v), end(v), [v](int &i){
	//	static int x = 0;
	//	x += i;
	//	if ((i) == *(begin(v) + 2) || (i) == *(begin(v) + 5) || (i) == *(begin(v) + 8))
	//	{
	//		x -= i;
	//		i *= x;
	//		x = 0;
	//	}

	//});
	//for (auto i : v)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;

	////4///
	//int x = 0;

	//for (auto i : v)
	//{
	//	x += i;
	//	cout << i << " ";
	//}
	//cout << endl << endl;

	//cout << "Summa vseh:" << x << endl << endl;

	//for_each(begin(v), end(v), [x](int&i) {
	//	i -= x;
	//});

	//for (auto i : v)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;


	///3///
	//int x = 0;
	//for (auto i : v)
	//{
	//	cout << i << " ";
	//	x += i;
	//}
	//cout << endl<<endl;
	//x /= 10;

	//cout << "Srednee arif:" << x << endl << endl;
	//for_each(begin(v), end(v), [x](int &i) {
	//	if (i% 2 != 0)
	//	{
	//		i /= x;
	//	}
	//});
	//for (auto i : v)
	//{
	//	cout << i << " ";

	//}
	//cout << endl;

	///2///
	//int x;

	//x = *(find_if(begin(v), end(v), [](int &i) {return i < 0;}));
	//x += v[4];
	//try
	//{
	//	if (x == 0)
	//	{
	//		throw(0);
	//	}

	//	for (auto it = begin(v); it != end(v); it++)
	//		cout << *(it) << " ";
	//	cout << endl<<endl;

	//	cout << "First negative number plus fifth number of vector:";
	//	cout << x << endl<<endl;

	//	for_each(begin(v), end(v), [x](int &i) {i /= x; });

	//	for (auto it = begin(v); it != end(v); it++)
	//		cout << *(it) << " ";
	//	cout << endl;

	//}
	//catch (int x)
	//{
	//	cout << "Division by zero" << endl;
	//}



	///1///
	//int v1, v2;
	//v1 = *(begin(v));
	//v2 = *(end(v) - 1);

	//for (auto i : v)
	//	cout << i << " ";
	//cout << endl;

	//for_each(begin(v), end(v), [v1, v2](int &i) {
	//	i += v1 * v2; 
	//	});

	//for (auto i : v)
	//	cout << i << " ";
	//cout << endl;

	system("pause");
}