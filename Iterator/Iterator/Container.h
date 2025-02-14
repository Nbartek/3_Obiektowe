#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Iterator.h"
template <class T>
class Container
{
	friend class Iterator<T,Container>

public:
	void Add(T a) {
		m_data_.push_back(a);
	}

	Iterator<T, Container> *CreateIterator() {
		return new Iterator<T, Container>(this);
	};
private:
	std::vector<T> m_data_;
};

