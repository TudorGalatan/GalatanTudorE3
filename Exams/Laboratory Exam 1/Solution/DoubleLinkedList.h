#pragma once

#include "Node.h"

#include <iostream>


template <typename>
class DoubleLinkedList
{
	private:

		Node* node;

	public:

		DoubleLinkedList ()
		{
			node->next = nullptr;
			node->precedent = nullptr;
			node->value = NULL;
		}

		~DoubleLinkedList ()
		{
			std::cout << "Deleted.";
		}

		void PushOnFront (const float& value)
		{
			Node* node = new Node;

			this->node->precedent = nullptr;
			this->node->next = nullptr;
			this->node->value = value;

			this->node = node;
		}

		void PushOnBack (const float& value)
		{
			Node* node = new Node;

			this->node->precedent = nullptr;
			this->node->next = nullptr;
			this->node->value = value;

			this->node = node;
		}

		float PopFromBack ()
		{
			return this->node->value;
		}

		void PrintAll (void (const int& value))
		{

		}

		void PrintAll (void (const double& value))
		{
			Node* currentNode = this->node;

			while (currentNode->next != nullptr)
			{
				std::cout << currentNode->value << ',';
				currentNode->precedent = currentNode->next;
				currentNode->next = currentNode->next->next;
			}

			std::cout << '\n';
		}

		unsigned short int GetCount ()
		{
			unsigned short int numberOfElements = 0;

			Node* currentNode = this->node;

			while (currentNode->next != nullptr)
			{
				numberOfElements++;
				currentNode->precedent = currentNode->next;
				currentNode->next = currentNode->next->next;
			}

			return numberOfElements;
		}

		void operator << (std::ostream)
		{
			std::cout << "Hello";
		}
};