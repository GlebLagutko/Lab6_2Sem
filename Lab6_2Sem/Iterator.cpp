#include "Iterator.h"
#include "Node.h"
#include "CircleList.h"

Iterator::Iterator(CircleList* list, Node* current, bool isEnd)
	: _list(list), _current(current), _isEnd(isEnd) { }


Iterator& Iterator::operator++()
{
	_current = _current->GetNext();
	_isEnd = (_current == _list->begin()._current);
	return *this;
}

Iterator Iterator::operator++(int)
{
	auto copy = Iterator(_list, _current, _isEnd);
	++*this;
	return copy;
}


bool Iterator::operator==(const Iterator& other) const
{
	return _list == other._list
		&& _current == other._current
		&& _isEnd == other._isEnd;
}

bool Iterator::operator!=(const Iterator &rhs) const {
	return !(rhs == *this);
}
