//using TLE.Scenes;
using TLE.ScreenManagement;
using TLE.DataTypes;

namespace TLE
{
   class Tle
    {
        private static void Main()
        {
            GraphicsManager screen = new GraphicsManager(10,10,3);

            CharObject back = new CharObject(new []
            {
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo",
                "oooooooooo"
            });
            
            screen.Print(back);
            
            CharObject test = new CharObject("T.txt");
            test.SetPosition(2,2);
            
            screen.Print(test,2);
            
            screen.RefreshScreen();
            
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