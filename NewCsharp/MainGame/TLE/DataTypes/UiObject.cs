namespace TLE.DataTypes;

public class UiObject
{
    private Vector2 position;
    private string[] _sprite;
    
    public UiObject(string[] sprite)
    {
        _sprite = sprite;
    }

    public void SetPosition(Vector2 pos)
    {
        position = pos;
    }

    public void SetPosition(int x, int y)
    {
        position.x = x;
        position.y = y;
    }
}