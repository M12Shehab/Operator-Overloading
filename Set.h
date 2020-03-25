#pragma once
#include <iostream>

class Set {
	int SIZE;
	int* ptr;
public:
	Set();
	Set(int*, int);
	~Set();

	int size() const;
	Set operator &(const Set& s); //  Intersection
	Set operator |(Set s); //  Union
	int operator[](const int) const;
	friend std::ostream& operator<<(std::ostream&, const Set&);
};