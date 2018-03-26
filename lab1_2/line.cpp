#include "line.h"

Line::Line(cv::Point x, cv::Point y): IElement("line"), x(x), y(y)
{

}

void Line::Draw(cv::Mat & canvas, cv::Scalar & color)
{
    cv::line(canvas, x, y, color, 4);
}
