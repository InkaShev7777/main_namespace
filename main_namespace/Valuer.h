#pragma once
#include<iostream>
namespace value
{
	class Val
	{
		int val;
	public:
		Val(int val)
		{
			this->val = val;
		}
		void print()
		{
			std::cout << "Val: " << this->val << "\n";
		}
	};
}
