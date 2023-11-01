using TLE.ScreenManagement;

namespace TLE.DataTypes;

public class CharObject : Sprite
{
    private Vector2 _position;

    public CharObject(string[] sprite) : base(sprite)
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

    public Vector2 GetPosition()
    {
        return _position;
    }
}