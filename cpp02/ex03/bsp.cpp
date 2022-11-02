
#include "Point.hpp"

Fixed	triangle_area( Point const p1, Point const p2, Point const p3 )
{
	Fixed	tmp;
	Fixed	uint_max(-1);

	tmp = p1.getX() * (p2.getY() - p3.getY()) + p2.getX() * (p3.getY() - p1.getY()) + p3.getX() * (p1.getY() - p2.getY());
	if (tmp < 0)
		tmp = uint_max - tmp + 1;
	return (tmp / 2.0f);
}

bool	bsp( Point const a , Point const b, Point const c, Point const point )
{
	Fixed	area = triangle_area(a, b, c);
	Fixed	null(0);
	Fixed	a1 = triangle_area(point, a, b);
	Fixed	a2 = triangle_area(point, a, c);
	Fixed	a3 = triangle_area(point, b, c);

	if (a1 == null || a2 == null || a3 == null)
		return (false);
	if (area == a1 + a2 + a3)
		return (true);
	else
		return (false);
}
