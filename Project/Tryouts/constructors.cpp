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
//class Ball
//{
//private:
//	std::string m_color;
//	double m_radius;
//public:
//	// Constructor with only radius parameter (color will use default value)
//	Ball(double radius)
//	{
//		m_color = "black";
//		m_radius = radius;
//	}
//
//	// Constructor with both color and radius parameters
//	Ball(const std::string& color = "black", double radius = 10.0)
//	{
//		m_color = color;
//		m_radius = radius;
//	}
//
//	void print()
//	{
//		std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
//	}
//};
//
//// ==== Functions
//
//int main()
//{
//	// ==== Main
//	Ball def;
//	def.print();
//
//	Ball blue("blue");
//	blue.print();
//
//	Ball twenty(20.0);
//	twenty.print();
//
//	Ball blueTwenty("blue", 20.0);
//	blueTwenty.print();
//
//	// ==== Return
//	return 0;
//}
