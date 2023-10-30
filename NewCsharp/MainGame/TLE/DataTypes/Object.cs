namespace TLE.DataTypes;

public class Object : Sprite
{
    private Vector2 _position;

    public Object(string[] sprite) : base(sprite)
    {
        
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
}