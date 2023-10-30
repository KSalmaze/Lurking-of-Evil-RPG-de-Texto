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
            
            screen.Print(y,1);
            
            screen.RefreshScreen();
            // MainMenu.InitializeMenu();
        }
    }
}

/* To Do List
 - Contrutores com resolução do terminal no graphics manager
 - Testar os construtores de aquivo em Sprite
 - Testar animações
 - Objetos animados
*/