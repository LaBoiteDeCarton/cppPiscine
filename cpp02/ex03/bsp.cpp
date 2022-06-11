#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed XbYc = (b.getX() - a.getX()) * (c.getY() - a.getY());
	Fixed XcYb = (c.getX() - a.getX()) * (b.getY() - a.getY());
	Fixed XbY = (b.getX() - a.getX()) * (point.getY() - a.getY());
	Fixed XYb = (point.getX() - a.getX()) * (b.getY() - a.getY());
	Fixed XcY = (c.getX() - a.getX()) * (point.getY() - a.getY());
	Fixed XYc = (point.getX() - a.getX()) * (c.getY() - a.getY());

	//le produit scalair ab.ac et ab.apoint doivent etre de même signe
	if (XbYc > XcYb && XbY <= XYb)
		return (false);
	if (XbYc < XcYb && XbY >= XYb)
		return (false);
	//le produit scalaire de ac.ab et ac.apoint doivent etre de meme signe
	if (XcYb > XbYc && XcY <= XYc)
		return (false);
	if (XcYb < XbYc && XcY >= XYc)
		return (false);
	//le produit scalaire de bc.ba et bc.bpoint doivent etre de meme signe
	if (XYb - XbY + XcY - XYc + XbYc - XcYb >= 0 && XbYc - XcYb < 0)
		return (false);
	if (XYb - XbY + XcY - XYc + XbYc - XcYb <= 0 && XbYc - XcYb > 0)
		return (false);
	return (true);
}