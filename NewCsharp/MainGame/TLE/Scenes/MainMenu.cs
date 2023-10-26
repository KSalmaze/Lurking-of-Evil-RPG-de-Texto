using TLE.ScreenManagement;

namespace TLE.Scenes;

public static class MainMenu
{
    public static void InitializeMenu()
    {
        GraphicsManager screen = new GraphicsManager();

        string[] a = new String[]
        {
            " The Lurking Evil ",
            "             Remake ",
            "  ",
            "  Novo Jogo  "
        };
        
        screen.Print(a);
            
        while (true)
        {
                
        }
    }
}