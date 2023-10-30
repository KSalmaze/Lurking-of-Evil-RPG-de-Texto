using TLE.DataTypes;
using TLE.ScreenManagement;
using TLE.InputManagement;
/*
namespace TLE.Scenes;

public static class MainMenu
{
    public static void InitializeMenu()
    {
        int option = 1;
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
            "->^^^^^^^^^^^<-",
            "T^^^^^^^^^^^^^T"
        };

        string[] antiselector = new[]
        {
            "  ^^^^^^^^^^^  ",
            "  ^^^^^^^^^^^  "
        };
        
        screen.Print(selector,new Vector2(0,3),5);
        
        while (true)
        {
            if (Console.KeyAvailable)
            {
                ConsoleKeyInfo keyInfo = Console.ReadKey(intercept: true);
             //   Console.WriteLine(keyInfo.Key);
              //  Console.WriteLine(keyInfo.KeyChar);

                if (keyInfo.Key == InputList.OptionDown.Key && option < 5)
                {
                    option++;
                    screen.Print(antiselector, new Vector2(0,option + 1),1);
                    screen.Print(selector,new Vector2(0,option + 2),5);
                }

                if (keyInfo.Key == InputList.OptionUp.Key && option > 1)
                {
                    option--;
                    screen.Print(antiselector,new Vector2(0,option + 3),1);
                    screen.Print(selector,new Vector2(0,option + 2),5);
                }

                if (keyInfo.Key == InputList.OptionEnter.Key)
                {
                    Console.WriteLine("Enter");
                    OpenSubMenu(option);
                }
            }
        }
    }
    
    private static void OpenSubMenu(int op)
    {
        switch (op)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
    }

    private static void NewGame()
    {
        
    }

    private static void LoadGame()
    {
        
    }

    private static void OpenOptions()
    {
        
    }

    private static void Extras()
    {
        
    }

    private static void QuitGame()
    {
        
    }
}*/