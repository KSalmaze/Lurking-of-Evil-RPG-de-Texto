//using TLE.Scenes;
using TLE.ScreenManagement;
using TLE.DataTypes;

namespace TLE
{
   class Tle
    {
        private static void Main()
        {
            GraphicsManager screen = new GraphicsManager(5,5,2);

            string[] a = new[]
            {
                "000",
                "000",
                "000"
            };

            CharObject x = new CharObject(a);
            x.SetPosition(0,0);
            
            screen.Print(x);
            
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