//using TLE.Scenes;
using TLE.ScreenManagement;
using TLE.DataTypes;

namespace TLE
{
   class Tle
    {
        private static void Main()
        {
            GraphicsManager screen = new GraphicsManager();
            
            string[] a = new[]
            {
                " The Lurking Evil ",
                "             Remake ",
                "            ",
                "   New Game    ",
                "   Load Game    ",
                "   Options      ",
                "   Extras       ",
                "   Quit         "
            };
            
            CharObject x = new CharObject(a);
            x.SetPosition(0,0);
            
            screen.Print(x);

            string[] b = new[]
            {
                "->            <-"
            };
            CharObject y = new CharObject(b);
            y.SetPosition(0,3);
            
            screen.Print(y);
            // MainMenu.InitializeMenu();
        }
    }
}

/* To Do List
 - Create a data type to sprite, witch contains a 720p and a 1080p version of the sprite
 - Testar os construtores de Sprite
*/