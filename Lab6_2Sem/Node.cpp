#include "Node.h"
#include <iostream>

Node::Node(int value)
	: _value(value), _next(nullptr), _previous(nullptr)
{
	//#ifdef _DEBUG
	//	std::cout << "[ctor] Node, value = " << value << std::endl;
	//#endif
}

Node::~Node()
{}

Node* Node::GetNext() const { return _next; }

void Node::SetNext(Node* next) { _next = next; }

Node* Node::GetPrevious() const { return _previous; }

void Node::SetPrevious(Node* previous) { _previous = previous; }

int Node::GetValue() const { return _value; }

