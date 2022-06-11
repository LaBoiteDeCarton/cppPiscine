#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) 
{
	Point A = Point(1.0, 2.0);
	Point B = Point(2.0, 4.0);
	Point C = Point(5.5, 2.5);
	std::cout << "A: " << A << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "C: " << C << std::endl;
	//dedans
	Point M1 = Point(2.5, 3.0);
	//du mauvais coté de AB
	Point M2 = Point(1.5, 4.1);
	//du mauvais coté de AC
	Point M3 = Point(1.0, 0.0);
	//du mauvais coté de BC
	Point M4 = Point(5.0, 3.0);
	//sur l'arrete AB
	Point M5 = Point(1.5, 3.0);
	//sur l'arrete AC
	Point M6 = Point(3.25, 2.25);
	//sur l'arrete BC
	Point M7 = Point(3.25, 3.75);
	//egale a A
	Point M8 = A;
	std::cout << "Le point M1:" << M1 << " est dedans : bsp donne " << bsp(A, B, C, M1) << std::endl;
	std::cout << "Le point M2:" << M2 << " est pas dedans : bsp donne " << bsp(A, B, C, M2) << std::endl;
	std::cout << "Le point M3:" << M3 << " est pas dedans : bsp donne " << bsp(A, B, C, M3) << std::endl;
	std::cout << "Le point M4:" << M4 << " est pas dedans : bsp donne " << bsp(A, B, C, M4) << std::endl;
	std::cout << "Le point M5:" << M5 << " est sur l'arrete : bsp donne " << bsp(A, B, C, M5) << std::endl;
	std::cout << "Le point M6:" << M6 << " est sur l'arrete : bsp donne " << bsp(A, B, C, M6) << std::endl;
	std::cout << "Le point M7:" << M7 << " est sur l'arrete : bsp donne " << bsp(A, B, C, M7) << std::endl;
	std::cout << "Le point M8:" << M8 << " est dans le coin : bsp donne " << bsp(A, B, C, M8) << std::endl;
	return (0);
}