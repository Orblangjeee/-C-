#include <iostream>

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	
	Point* result = new Point;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;

	return *result;
}

int main(void) {

	Point* pnt1 = new Point;
	Point* pnt2 = new Point;

	pnt1->xpos = 12;
	pnt1->ypos = 10;
	pnt2->xpos = 8;
	pnt2->ypos = 22;
	
	Point &result = PntAdder(*pnt1, *pnt2);
	
	std::cout << result.xpos << " " << result.ypos << std::endl;

	delete pnt1;
	delete pnt2;
	delete &result;
}
