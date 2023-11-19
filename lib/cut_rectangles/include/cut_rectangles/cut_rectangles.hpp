#pragma once
#ifndef REPCHECK_CUT_RECTANGLES_HPP
#define REPCHECK_CUT_RECTANGLES_HPP

#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

class CutRectangles{
public:
    CutRectangles(const std::vector<cv::Mat>& images);
    std::vector<std::vector<cv::Rect> > get_rectangles();
private:
    cv::Mat reducePageOy(const cv::Mat& image);
    cv::Mat reducePageOx(const cv::Mat& image);
    std::vector<cv::Rect> pre_count_blocks(cv::Mat projection, int missingDimension, int projection_type, int page=-1); // projection: 1 - oy, 0 - ox

private:
    cv::Scalar DEBUG_COLOR = cv::Scalar(0, 255, 0);
    int RLSA_VALUE = 5;
    std::vector<cv::Mat> pages_;
    std::vector<std::vector<cv::Rect> > rectangles_in_pages;
};

#endif // REPCHECK_CUT_RECTANGLES_HPP