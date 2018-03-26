#include "polygon.h"
#include "line.h"

Polygon::Polygon(std::vector<cv::Point> points): IElement("polygon")
{
    this->points = points;
}

void Polygon::Draw(cv::Mat & canvas, cv::Scalar & color)
{
    for(auto it = points.begin(); it != points.end() - 1; ++it)
    {
        cv::Point & start_point = *it;
        cv::Point & end_point = *(it+1);
        Line line(start_point, end_point);
        line.Draw(canvas, color);
    }
    Line line(points[0], points[points.size() - 1]);
    line.Draw(canvas, color);
}
