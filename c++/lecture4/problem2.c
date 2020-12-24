#include <iostream>

class Point {
	int x, y;

	public:
	Point(int pos_x, int pos_y){
		x = pos_x;
		y = pos_y;
	}

	void show_stat();
};

class Geometry {
	Point* point_array[100];

	public:
	Geometry(Point **point_list);
	Geometry();

	void AddPoint(const Point &point);

	void PrintDistance();

	void PrintNumMeets();
};

void Point::show_stat() {
	std::cout << "x = " << x << "y = " << y << std::endl;
}

void PrintDistance() {
	int i = 0;
	for (i = 0; i < 100; i++){
		Point 
}

int main() {
	Point p1(5,5);
	Point p2 = Point(4, 4);

	p1.show_stat();
	p2.show_stat();
	return 0;
}
