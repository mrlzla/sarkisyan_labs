#ifndef WORLD_H
#define WORLD_H

#include "basictypes.h"
#include "ielement.h"

class World
{
public:
    World(const cv::Size size, std::vector<IElementPtr> & elements);
    void Draw();
    ~World();
private:
    cv::Mat canvas;
    std::vector<IElementPtr> elements;
    cv::Scalar color;
};

#endif // WORLD_H
