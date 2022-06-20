#include <iostream>
#include "Array.tpp"

#define MAX_VAL 10

int main(int, char**)
{
	{
		Array<int> numbers(MAX_VAL);
    	int* mirror = new int[MAX_VAL];
    	srand(time(NULL));
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    const int value = rand();
    	    numbers[i] = value;
    	    mirror[i] = value;
    	}
    	//SCOPE
    	{
    	    Array<int> tmp = numbers;
    	    Array<int> test(tmp);
			tmp[2] = 42;
			test[1] = 999;
			showArray(tmp);
			showArray(test);
    	}
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    if (mirror[i] != numbers[i])
    	    {
    	        std::cerr << "didn't save the same value!!" << std::endl;
    	        return 1;
    	    }
    	}
    	try
    	{
    	    numbers[-2] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	try
    	{
    	    numbers[MAX_VAL] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    numbers[i] = rand();
    	}
    	delete [] mirror;//
	}
	system("leaks array | grep leaks");
    return 0;
}

/*
int main(int, char**)
{
	{
		Array<std::string> numbers(MAX_VAL);
    	srand(time(NULL));
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    int value = rand() % 94 + 32;
    	    numbers[i] = value;
			value = rand() % 94 + 32;
			numbers[i] += value;
    	}
    	//SCOPE
    	{
    	    Array<std::string> tmp = numbers;
    	    Array<std::string> test(tmp);
			tmp[2] = "Vive 42";
			test[1] = "A mort la norminette";
			showArray(tmp);
			showArray(test);
    	}
    	try
    	{
    	    numbers[-2] = "0";
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	try
    	{
    	    numbers[MAX_VAL] = "0";
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    numbers[i] = rand();
    	}
	}
	system("leaks array | grep leaks");
    return 0;
}
*/