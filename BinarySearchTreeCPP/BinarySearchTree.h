#pragma once
#include <memory>
template<typename T>

class BinarySearchTree
{

private:
	std::shared_ptr<T> root;
	int count{};
	std::shared_ptr<T> Find
	

public:

	/*
	void func()
	{
		int x = 5;
		std::shared_ptr<int> sptr = std::make_shared<int>(x);
	}
	*/

	void Insert()
	{
//start with root
		//no root set to new node (return) 
		//traverse thre tree until we find where the new node is uspposed to go
		//if keys are equal we should traverse to the right until a leaf is reacher
		//stop current right on the parent node
		//set the parent of the new node to the current node
		//if the new node is less than or grather than the current node, if it is less
		//then we will set it to the left child but if it is greater we are going to set it to the right
		//
	}

	void Delete()
	{
		//call search
		// find the node
	}

	void Search(/*insert a node...*/)
	{

	}
	void Minimum
	{
		//shift over to as many times as we can to the left 
	}
};

