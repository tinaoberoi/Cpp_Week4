#include "Matrix.h"
#include <iostream>
#include <chrono>
using namespace mpcs51044;
using namespace std;

int main()
{
	// auto start = chrono::system_clock::now();
	// Matrix<3, 3> m = { 
	// 		{ 1, 2, 3, }, 
	// 		{ 4, 5, 6, }, 
	// 		{ 7, 8, 9, } 
	// };
	// static double total;
	// for (int i = 0; i < 100'000'000; i++) {
	// 	m(1, 1) = i;
	// 	total += m.determinant();
	// }
	// cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << " seconds\n";

	Matrix<2, 2> m1 = { 
			{ 3, 5 }, 
			{ 3, 7 } 
	};

	// auto m2 = m1 + m1;

	// cout<<m2<<endl;

	// m1 += m2;
	// cout<<m1;
	cout<<m1.determinant()<<endl;

}