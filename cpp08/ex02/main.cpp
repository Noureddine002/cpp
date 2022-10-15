#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "------------------------------------- List test ---" << std::endl;

	std::list<int> mstack_list;
	mstack_list.push_back(5);
	mstack_list.push_back(17);
	std::cout << mstack_list.front() << std::endl;
	mstack_list.pop_front();
	std::cout << mstack_list.size() << std::endl;
	mstack_list.push_back(3);
	mstack_list.push_back(5);
	mstack_list.push_back(737);
	mstack_list.push_back(0);
	std::list<int>::iterator itt = mstack_list.begin();
	std::list<int>::iterator itte = mstack_list.end();
	++itt;
	--itt;
	while (itt != itte)
	{
	std::cout << *itt << std::endl;
	++itt;
	}
	std::list<int> ss(mstack_list);

    return 0;
}