#pragma once
#include"Valuer.h"
using namespace value;
namespace kol_val
{
	struct Node
	{
		Node* next;
		Val* val;
		Node() {}
		Node(Val* val)
		{
			this->next = nullptr;
			this->val = val;
		}
	};
	class Kol_value
	{
		Node* head;
		int size;
	public:
		Kol_value()
		{
			this->head = nullptr;
		}
		void Add(Val* val)
		{
			Node* tmp = this->head;
			if (tmp == nullptr)
			{
				tmp = new Node(val);
				this->head = tmp;
				size++;
			}
			else
			{
				while (tmp->next!=nullptr)
				{
					tmp = tmp->next;
				}
				tmp->next = new Node(val);
				size++;
			}
		}
		void shoow()
		{
			Node* iter = this->head;
			while (iter!= nullptr)
			{
				iter->val->print();
				std::cout << "Adress: " << iter << "\tNext: " << iter->next << "\n";
				iter = iter->next;
			}
		}
		void Dell(int ind)
		{
			Node* iter = this->head;
			if (ind < 1)
			{
				throw "Error\nIndex < 1";
			}
			if (ind > this->size)
			{
				throw "Error\nIndex > Size";
			}
			if (ind == 1)
			{
				this->head = this->head->next;
				size--;
			}
			else if (ind == size)
			{
				while (iter->next->next != nullptr)
				{
					iter = iter->next;
				}
				iter->next = nullptr;
				size--;
			}
			else
			{
				int i = 1;
				for (int j = 1; j < size; j++)
				{
					if (j == ind - 1)
					{
						iter->next = iter->next->next;
					}
					iter = iter->next;
				}
				size--;
			}
		}
	};
}
