#ifndef POLYGON_H
#define POLYGON_H

#include "basictypes.h"
#include "ielement.h"

class Polygon: IElement
{
public:
    Polygon(std::vector<cv::Point> points);
    void Draw(cv::Mat & canvas, cv::Scalar & color);
private:
    std::vector<cv::Point> points;
};

typedef std::shared_ptr<Polygon> PolygonPtr;

#endif // POLYGON_H
