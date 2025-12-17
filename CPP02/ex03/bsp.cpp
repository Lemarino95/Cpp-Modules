#include "Point.hpp"

//abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0)
static float	calc_area(Point  const v_1, Point  const v_2, Point  const v_3)
{
	/* std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << Y << "v_1.x = " << v_1.get_x_val() << NO_C << std::endl;
	std::cout << Y << "v_1.y = " << v_1.get_y_val() << NO_C << std::endl;
	std::cout << G << "v_2.x = " << v_2.get_x_val() << NO_C << std::endl;
	std::cout << G << "v_2.y = " << v_2.get_y_val() << NO_C << std::endl;
	std::cout << B << "v_3.x = " << v_3.get_x_val() << NO_C << std::endl;
	std::cout << B << "v_3.y = " << v_3.get_y_val() << NO_C << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl; */
	float	dy1 = v_2.get_y_val() - v_3.get_y_val();
	float	dy2 = v_3.get_y_val() - v_1.get_y_val();
	float	dy3 = v_1.get_y_val() - v_2.get_y_val();
	return std::abs((v_1.get_x_val() * dy1) + (v_2.get_x_val() * dy2) + (v_3.get_x_val() * dy3)) / 2;
}

// Returns 0 if point is on the perimeter of the triangle.
static bool	is_on_Perimeter(Point const a, Point const b, Point const c, Point const point)
{
	if (point.get_x_val() == a.get_x_val() || point.get_y_val() == a.get_y_val())
		return 1;
	else if (point.get_y_val() == b.get_x_val() || point.get_y_val() == b.get_y_val())
		return 1;
	else if (point.get_y_val() == c.get_x_val() || point.get_y_val() == c.get_y_val())
		return 1;
	return 0;
}

// Returns: True if the point is inside the triangle. False otherwise.
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{/* 
	std::cout << "+++++++++++++++++++" << std::endl;
	std::cout << R << "point.y = " << point.get_y_val() << NO_C << std::endl;
	std::cout << R << "point.x = " << point.get_x_val() << NO_C << std::endl;
	std::cout << Y << "a.x = " << a.get_x_val() << NO_C << std::endl;
	std::cout << Y << "a.y = " << a.get_y_val() << NO_C << std::endl;
	std::cout << G << "b.x = " << b.get_x_val() << NO_C << std::endl;
	std::cout << G << "b.y = " << b.get_y_val() << NO_C << std::endl;
	std::cout << B << "c.x = " << c.get_x_val() << NO_C << std::endl;
	std::cout << B << "c.y = " << c.get_y_val() << NO_C << std::endl;
	std::cout << "+++++++++++++++++++" << std::endl; */
	if (is_on_Perimeter(a, b, c, point))
		return 0;
	float area_main = calc_area(a, b, c);
	float area_abp = calc_area(a, b, point);
	float area_apc = calc_area(a, point, c);
	float area_pbc = calc_area(point, b, c);
	std::cout << LC << area_main << c.get_x_val() << NO_C << std::endl;
	std::cout << LC << area_abp + area_apc + area_pbc << c.get_x_val() << NO_C << std::endl;
	return (area_main == area_abp + area_apc + area_pbc);
}
