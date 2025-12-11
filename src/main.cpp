#include <iostream>
#include "../include/raylib.h"
#include "../include/raymath.h"
#include "gamearea.hpp"


int main()
{
    InitWindow(800, 800, "raylib [core] example - basic window");
    GameArea GameArea(300, 600);

    //bottom left corner at (100,700)


    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(WHITE);
            DrawText("Congrats! You created your first window!!!!!!!", 190, 200, 20, LIGHTGRAY);
            GameArea.DrawHorizontalGridLine(100, 700, GameArea.widthContainer, 700);
            
        EndDrawing();
    }

    CloseWindow();

    return 0;
}