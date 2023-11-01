//using TLE.Scenes;
using TLE.ScreenManagement;
using TLE.DataTypes;

namespace TLE
{
   class Tle
    {
        private static void Main()
        {
            GraphicsManager screen = new GraphicsManager(1,1,2);
            Animator animator = new Animator(screen);

            string[] framea = new[]
            {
                "T"
            };

            string[] frameb = new[]
            {
                "R"
            };

            string[][] frames = new[]
            {
                framea,frameb
            };
            Animation animacaoa = new Animation("Trouxa", frames);

            AnimatedCharObject objx = new AnimatedCharObject(new Sprite(new []{"X"}));
            objx.SetPosition(0,0);
            screen.Print(objx);
            screen.RefreshScreen();
            
            objx.AddAnimation(animacaoa);
            objx.PlayAnimation(animator,"Trouxa");
            
            while (true)
            {
                
            }
        }
    }
}

/* To Do List
 - Contrutores com resolução do terminal no graphics manager
 - Testar os construtores de aquivo em Sprite
 - Testar animações
 - Objetos animados
 - Verificar se não existem duas animações com o mesmo nome antes de inserir
*/