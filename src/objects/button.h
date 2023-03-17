#include "raylib.h"

typedef struct button
{
    Rectangle rect;
    Color color;
} button;

//Function to check if the button has been clicked

bool buttonClicked(Rectangle button)
{
    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT) && GetMousePosition().x  >= button.x && GetMousePosition().x  <= button.x + button.width && GetMousePosition().y  >= button.y && GetMousePosition().y  >= button.y + button.height)
    {
        return true;
    }
}