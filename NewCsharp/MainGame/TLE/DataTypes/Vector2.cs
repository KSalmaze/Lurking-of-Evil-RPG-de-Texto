namespace TLE.DataTypes;

public struct Vector2
{
    private int _x;
    private int _y;
    
    public Vector2(int a, int b)
    {
        x = a;
        y = b;
    }

    public int x
    {
        get => _x;

        set => _x = value;
    }
    
    public int y
    {
        get => _y;

        set => _y = value;
    }
}