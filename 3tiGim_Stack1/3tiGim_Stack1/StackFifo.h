#pragma once
#include "Item.h"
class StackFifo
{
private:
	int count = { 0 };
	Item* top = { nullptr };
	Item* bootom = { nullptr };
public:
	int GetCount() const {
		return count;
	}
	Item* GetTop() const {
		return top;
	}
	Item* GetBootom() const {
		return bootom;
	}
	void SetTop(Item* item) {
		top = item;
	}
	void SetBootom(Item* item) {
		bootom = item;
	}
	friend std::ostream& operator<<(std::ostream& os, const StackFifo& stack);
	StackFifo();
	bool Push(Item* item);
	Item* Pop_back();
	~StackFifo();
};



