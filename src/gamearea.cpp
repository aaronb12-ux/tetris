#include "gamearea.hpp"
#include "../include/raylib.h"
#include "../include/raymath.h"



void GameArea::DrawVerticalGridLine(int xStart, int yStart, int width, int height) {
     DrawLine(xStart, yStart, widthContainer, height, BLACK);
}

void GameArea::DrawHorizontalGridLine(int xStart, int yStart, int width, int height) {
    DrawLine(xStart, yStart, width, heightContainer, BLACK);
}