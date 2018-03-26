#include "world.h"

World::World(const cv::Size size, std::vector<IElementPtr> & elements)
{
    this->elements = elements;
    this->canvas = cv::Mat::zeros(size.height, size.width, CV_8UC3);
    this->color = cv::Scalar(255, 0, 0);
    cv::namedWindow("canvas", cv::WINDOW_AUTOSIZE);
}

void World::Draw()
{
    for(auto elem: elements)
    {
        elem->Draw(canvas, color);
    }
    cv::imshow("canvas", canvas);
    cv::waitKey(0);
}

World::~World()
{
    cv::destroyAllWindows();
}
