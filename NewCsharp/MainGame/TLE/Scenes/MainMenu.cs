using TLE.DataTypes;
using TLE.ScreenManagement;

namespace TLE.Scenes;

public static class MainMenu
{
    public static void InitializeMenu()
    {
        GraphicsManager screen = new GraphicsManager();

        string[] menu = new String[]
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
        
        screen.Print(menu);
        
        string[] selector = new String[]
        {
            "->^^^^^^^^^^^<-"
        };
        
        screen.Print(selector,new Vector2(0,3),5);
        
        while (true)
        {
            if (Console.KeyAvailable)
                {
                    ConsoleKeyInfo keyInfo = Console.ReadKey(intercept: true);
                    Console
                }
        }
    }
}