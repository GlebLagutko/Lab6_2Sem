#include "CircleList.h"
#include "Node.h"
#include "Iterator.h"
#include <utility>
#include <iostream>

CircleList::CircleList() : _start(nullptr) { }

CircleList::CircleList(std::initializer_list<int> args)
{
	_start = nullptr;
	for (auto x : args)
	{
		Add(x);
	}
}

CircleList::CircleList(CircleList&& other) : _start(nullptr)
{
	_start = other._start;
	other._start = nullptr;
}

CircleList::CircleList(CircleList& other)
{
	_start = nullptr;
	for (auto x = other.begin(); x != other.end(); ++x)
	{
		Add(x._current->GetValue());
	}
}

CircleList::~CircleList()
{
	if (_start != nullptr) { begin()._current->GetPrevious()->SetNext(nullptr); }
	for (auto x = begin()._current; x != nullptr;)
	{
		auto next = x->GetNext();
		delete x;
		x = next;
	}
}

void CircleList::Add(const int& instance)
{
	if (_start == nullptr)
	{
		_start = new Node(instance);
		_start->SetNext(_start);
		_start->SetPrevious(_start);
	}
	else
	{
		auto newNode = new Node(instance);
		auto oldEnd = _start->GetPrevious();

		newNode->SetPrevious(oldEnd);
		newNode->SetNext(_start);

		_start->SetPrevious(newNode);
		oldEnd->SetNext(newNode);
	}
}

Iterator CircleList::begin() { return Iterator(this, _start, false); }

Iterator CircleList::end() { return Iterator(this, _start, true); }

