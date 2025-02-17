#ifndef TEXT_REC_HPP_04_10_2023
#define TEXT_REC_HPP_04_10_2023

#include <string>
#include <fstream>

#include <leptonica/allheaders.h>
#include <opencv2/opencv.hpp>
#include <tesseract/baseapi.h>

void RecognizeText(std::string& imPath);

#endif