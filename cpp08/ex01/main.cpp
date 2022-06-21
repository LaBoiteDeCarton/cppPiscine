#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(8);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "############# Testing longest and shortest " << std::endl;
	std::cout << "The shortest is : " << sp.shortestSpan() << std::endl;
	std::cout << "The longest is : " << sp.longestSpan() << std::endl;
	sp.addNumber(100);
	std::cout << std::endl << "############# Adding a new number and see changes of longest and shortest result" << std::endl;
	std::cout << "The longest is : " << sp.longestSpan() << std::endl;
	sp.addNumber(2);
	std::cout << "The shortest is : " << sp.shortestSpan() << std::endl;
	std::cout << std::endl << "############# Test the operator '=' " << sp.shortestSpan() << std::endl;
	Span sp2(8);
	sp2 = sp;
	sp2.addNumber(300);
	std::cout << "Lonf SP again : " << sp.longestSpan() << std::endl;
	std::cout << "Long SP2 (should be different) : " << sp2.longestSpan() << std::endl;
	try
	{
		std::cout << std::endl << "############# Test the overflow when adding an argument when max_size is reached " << std::endl;
		sp.addNumber(6);
		sp.addNumber(6);
		std::cout << "The exception is not throw and should be, please grade 0 to this exercice!!!" << std::endl;
	}
	catch (const Span::SizeOverflowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span sp3(10);
	try
	{
		std::cout << std::endl << "############# Testing the excpetion when not enough argument is present to calculate shortest or longest " << std::endl;
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << "The exception is not throw and should be, please grade 0 to this exercice!!!" << std::endl;
	}
	catch (const Span::UndefinedDistance& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "############# Trying to add numbers with iterator range, the span created should be : 3 17 9" << std::endl;
	Span sp4(20);
	sp4.assign(sp.getStock().cbegin() + 1, sp.getStock().cend() - 4);
	std::cout << "The shortest SP4 is : " << sp4.shortestSpan() << std::endl;
	std::cout << "The longest SP4 is : " << sp4.longestSpan() << std::endl;

	try
	{
		std::cout << std::endl << "############# Trying to add numbers with iterator range but max_size is reached" << std::endl;
		Span sp4(4);
		sp4.assign(sp.getStock().cbegin() + 1, sp.getStock().cend() - 1);
		std::cout << "If you see this, th exception wasn't thrown, 0 is the way" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	std::cout << std::endl;
	system("leaks span | grep leaked");
	return (0);
}