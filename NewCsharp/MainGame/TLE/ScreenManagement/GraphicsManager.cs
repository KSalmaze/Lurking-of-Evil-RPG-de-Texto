using TLE.DataTypes;

namespace TLE.ScreenManagement;

public class GraphicsManager
{
    private string[] screen;
    private Byte urgency = 0;
    private void RefreshScreen(Byte urge)
    {
        urgency += urge;

        if (urgency >= 5)
        {
            Console.Clear();
            for (int i = 0; i < screen.Length; i++)
            {
                Console.WriteLine(screen[i]);
            }
        }
    }
    
    public void Print(string[] sprite, Vector2 coord, Byte urge)
    {
        int iy = coord.y - sprite.Length / 2;
        int ix = coord.x - sprite[0].Length / 2;

        if (ix < 0)
            ix = 0;

        for (int i = 0; i < sprite.Length; i++)
        {
            char[] buffer = screen[iy].ToCharArray();

            for (int j = 0; j < sprite[0].Length; j++)
            {
                if (sprite[i][j] != '^')
                {
                    //Console.WriteLine(ix + "<->" + j);
                    buffer[ix + j] = sprite[i][j];
                }
            }

            screen[iy] = new string(buffer);
            iy++;
        }
        
        RefreshScreen(urge);
    }

    public void Print(string[] sprite)
    {
        screen = sprite;
        RefreshScreen(5);
    }
}

/*
 Arquitetura baseada em prioridade
toda atualização de tela envia também seu nível de urgência
para evitar piscadas no terminal, quando a soma das urgencias
na fila de espera atingir um certo numero ou após X segundos,
 a tela é atualizada
*/