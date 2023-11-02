namespace TLE.DataTypes;

public class CharObject : Sprite
{
    private Vector2 _position;

    public CharObject(string[] sprite) : base(sprite)
    {
    }

    public CharObject(string path) : base(new []{"X"})
    {
        string[] linhas = new string[]{};
            
        try
        {
            linhas = File.ReadAllLines(path);
        }
        catch (IOException e)
        {
            Console.WriteLine("Ocorreu um erro ao ler o arquivo: " + e.Message);
        }

        sprite = linhas;
    }
    
    public void SetPosition(Vector2 pos)
    { 
        _position = pos;
    }

    public void SetPosition(int x, int y)
    {
       _position.x = x;
       _position.y = y;
    }

    public Vector2 GetPosition()
    {
        return _position;
    }
}