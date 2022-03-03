#include "StackFifo.h"

StackFifo::StackFifo() {
	count = 0;
	top = nullptr;
	bootom = nullptr;
}
bool StackFifo::Push(Item* item) {
	if (item == nullptr) return false;
	else {
	count++;
	
	item->setPrevious(top);
	
	top = item;
	if (bootom == nullptr) {
		bootom->setNext(top);
		bootom = item;
	}

	return true;
	}
}

StackFifo::~StackFifo() {
	if (count != 0) {
		Item* item = top;
		Item* temp = nullptr;
		while (item != nullptr) {
			temp = item;
			item = item->getPrevious();
			delete temp;
		}
		count = 0;
		top = nullptr;
		bootom = nullptr;
	}
}

std::ostream& operator<<(std::ostream& os, const StackFifo& stack) {
	if (stack.GetCount() == 0) {
		os << "Stos jest pusty!!!" << std::endl;
		return os;
	}
	os << "Informocje o stosie: rozmiar: " << stack.GetCount() << std::endl;
	Item* temp = stack.GetTop();
	while (temp != nullptr) {
		os << temp;
		temp = temp->getPrevious();//  (*temp).getPrevious();
	}
	return os;
}

Item* StackFifo::Pop_back()
{
	Item* item = bootom;
	bootom = item->getNext();
	count--;
	return item;
}



