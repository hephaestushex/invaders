#include "raylib.h"

typedef struct button
{
    Rectangle rect;
    Color color;
};

//Function to check if the button has been clicked, uses array, and returns which button was pressed.

int ButtonClicked(button array[])
{
    int buttonID;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && GetMouseX() >= array[i].rect.x && GetMouseX() <= array[i].rect.x + array[i].rect.width && GetMouseY() >= array[i].rect.y && GetMouseY() <= array[i].rect.y + array[i].rect.height)
        {
            buttonID = i;
            break;
        }

    }

    return buttonID;
}

