#include <iostream>

#include "line.h"
#include "polygon.h"
#include "world.h"
#include "circle.h"
#include "ellipse.h"

using namespace std;

int main()
{
    cv::Point x(150, 150);
    cv::Point y(200, 200);
    LinePtr l(new Line(x, y));

    vector<cv::Point> points;
    points.push_back(cv::Point(100, 100));
    points.push_back(cv::Point(200, 150));
    points.push_back(cv::Point(300, 100));
    points.push_back(cv::Point(100, 50));
    PolygonPtr poly(new Polygon(points));

    CirclePtr circle(new Circle(cv::Point(300, 300), 50));
    EllipsePtr ellipse(new Ellipse(cv::Point(150, 300), cv::Size(50, 25), 45));

    vector<IElementPtr> elements;
    elements.push_back(l);
    elements.push_back(poly);
    elements.push_back(circle);
    elements.push_back(ellipse);

    World world(cv::Size(500, 500), elements);

    world.Draw();

    return 0;
}
