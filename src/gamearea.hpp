#include "../include/raylib.h"
#include "../include/raymath.h"

class GameArea {
       //create the game area: has a location relative to the initialzied window
       public:
           int widthContainer;
           int heightContainer;

        GameArea(int w, int h) : widthContainer {w}, heightContainer {h} {} //constructor
        void DrawVerticalGridLine(int xRelative, int yRelative, int width, int height);  //draws verical line
        void DrawHorizontalGridLine(int xRelative, int yRelative, int width, int height); //draws horizontal line

};