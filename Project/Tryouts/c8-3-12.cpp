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
//// ==== Question
//
//// ==== Namespace
//
//// ==== Enum
//
//// ==== Struct
//
//// ==== Classes
//class Point3d
//{
//	// Private
//	int m_x;
//	int m_y;
//	int m_z;
//
//public:
//	void setValues(int var1, int var2, int var3)
//	{
//		m_x = var1;
//		m_y = var2;
//		m_z = var3;
//	}
//
//	void print()
//	{
//		std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")\n";
//	}
//
//	// We can use the fact that access controls work on a per-class basis here
//	// to directly access the private members of Point3d parameter p
//	bool isEqual(const Point3d& p)
//	{
//		return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
//	}
//};
//
//// ==== Functions
//
//int main()
//{
//	// ==== Main
//	Point3d point1;
//	point1.setValues(1, 2, 3);
//
//	Point3d point2;
//	point2.setValues(1, 2, 3);
//
//	if (point1.isEqual(point2))
//		std::cout << "point1 and point2 are equal\n";
//	else
//		std::cout << "point1 and point2 are not equal\n";
//
//	Point3d point3;
//	point3.setValues(3, 4, 5);
//
//	if (point1.isEqual(point3))
//		std::cout << "point1 and point3 are equal\n";
//	else
//		std::cout << "point1 and point3 are not equal\n";
//
//	// ==== Return
//	return 0;
//}
