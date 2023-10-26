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
            "  ",
            "  Novo Jogo  "
        };
        
        screen.Print(menu);
        
        string[] selector = new String[]
        {
            "->              <-"
        };
        
        screen.Print(menu);
        
            
        while (true)
        {
                
        }
    }
}