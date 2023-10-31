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

            AnimationControler animator = new AnimationControler(screen);
            
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

            string[] b = new[]
            {
                "->             <-"
            };
            CharObject y = new CharObject(b);
            y.SetPosition(0,4);
            
            screen.Print(x);
            screen.Print(y);
            screen.RefreshScreen();
        }
    }
}

/* To Do List
 - Contrutores com resolução do terminal no graphics manager
 - Testar os construtores de aquivo em Sprite
 - Testar animações
 - Objetos animados
*/