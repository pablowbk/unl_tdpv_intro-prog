#include <iostream>
#include <conio.h>

using namespace std;

const int SCREEN_WIDTH = 40;
const int SCREEN_HEIGHT = 10;
const string BORDER = "#";

void dibujar(int width = SCREEN_WIDTH, int height = SCREEN_HEIGHT)
{
    for (int i = 0; i < height; i++ )
    {
        for (int j = 0; j < width; j++)
        {
            cout<<BORDER;
        }
        cout<<endl;
    }
}

int main()
{
    bool startGame = false;
    bool gameOver = false;
    cout<<"========== INVASION =========="<<endl<<endl;
    cout<<"Bienvenid@ al espacio. Tu objetivo es frenar la invasion alienigena."<<endl;
    cout<<"Presiona ESPACIO para comenzar...";
    while(true)
    {
        if(kbhit())
        {
            char key = getch();
            if (key == ' ')
            {
                startGame = true;
                break;
            }
            if (key == 'q' || key == 'Q')
            {
                gameOver = true;
                break;
            }
        }
    }

    if (startGame)
    {
        cout<<endl<<"Comienza el juego..."<<endl;
        dibujar();
    }


    if (gameOver)
    {
        cout<<endl<<"FIN DEL JUEGO"<<endl;
    }
    return 0;
}
