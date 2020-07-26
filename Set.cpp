#include "Set.h"
#include <string>
using namespace std;

// Macros C++ functions, for more info: https://www.geeksforgeeks.org/macros-vs-functions/
// Macros Min function
#define MIN(x, y) ((x < y) ? (x) : (y));
// Macros Max function
#define MAX(x, y) (((x) > (y)) ? (x) : (y));

// Methods implementation.
Set::Set()
{
	this->SIZE=0;
}

Set::Set(int* a, int s)
{
	this->ptr = new int[s];
	this->SIZE = s;
	for (size_t index = 0; index < this->SIZE; index++)
	{
		this->ptr[index] = a[index];
	}
}

Set::~Set()
{
	delete[]ptr;
}

int Set::size() const
{
	return this->SIZE;
}

Set Set::operator&(const Set& s)
{
	int min = MIN(this->SIZE, s.size());
	int* temp = new int[min];
	int index=0;
	for (int j = 0; j < this->SIZE; j++)
	{
		int value = this->ptr[j];
		for (int i = 0; i < s.size(); i++)
		{
			if (value == s[i])
			{
				temp[index++] = value;
				break;
			}
		}
	}
	return Set(temp, index);
}

Set Set::operator|(Set s)
{
	// You have to implement this section of code.
	// NOTE: first add the biggest set, then the smaller one.
	// E.g.:
	// int a[] = { 1,2,3,5 };
	// int b[] = { 3,4,5 };
	// a is bigger than b, so the union array must add 1,2,3,5
	// after that, b must be added with eliminate the dublicate ones 3 and 5
	// the result is {1,2,3,5,4}
	return Set();
}

int Set::operator[](const int index) const
{
	if (index >= this->SIZE)
	{
		throw string("Out of range error!!");
	}

	return this->ptr[index];
}


std::ostream& operator<<(std::ostream& show, const Set& s)
{
	show << "The set size = "<<s.SIZE<<endl;
	for (int index = 0; index < s.SIZE; index++)
	{
		show << s.ptr[index] << "\t";
	}
	show << endl;
	return show;
}
