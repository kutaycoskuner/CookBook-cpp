//// ==== Problem Definition
////Write a class named Point2d.Point2d should contain two member variables of type double : m_x, and m_y, both defaulted to 0.0.Provide a constructor and a print function.
//
//// ==== Precursor Directives
//#include <iostream>
//#include <string>
//#include <array>
//#include <random>				// for std::mt19937
//#include <utility>				// for std::sort
//#include <ctime>				// for std::time
//#include <cassert>				// for assert
//#include <algorithm>
//
//// ==== Classes
//class Point2d
//{
//private:
//	double m_x;
//	double m_y;
//public:
//	Point2d(double x = 0.0, double y = 0.0)
//		: m_x(x), m_y(y)
//	{
//	};
//
//	void print() const
//	{
//		std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
//	};
//	friend double distanceFrom(const Point2d& point, const Point2d& point2);
//};
//// ==== Functions
//double distanceFrom(const Point2d& point, const Point2d& point2)
//{
//	return sqrt((point.m_x - point2.m_x) * (point.m_x - point2.m_x) + (point.m_y - point2.m_y) * (point.m_y - point2.m_y));
//};
//
//
//// ==== Functions
//
//int main()
//{
//	// ==== Main
//	Point2d first;
//	Point2d second(3.0, 4.0);
//	first.print();
//	second.print();
//	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
//
//	// ==== Return
//	return 0;
//}
