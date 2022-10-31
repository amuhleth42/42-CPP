
#include "Point.hpp"

Fixed	triangle_area( Point const p1, Point const p2, Point const p3 )
{
	Fixed	tmp;
	Fixed	A;

	tmp = p1.getX() * (p2.getY() - p3.getY()) + p2.getX() * (p3.getY() - p1.getY()) + p3.getX() * (p1.getY() - p2.getY());
	if (tmp < 0)
		tmp = -tmp;
	return (tmp / 2.0f);
}
/*
bool	bsp( Point const a , Point const b, Point const c, Point const point )
{

}*/
