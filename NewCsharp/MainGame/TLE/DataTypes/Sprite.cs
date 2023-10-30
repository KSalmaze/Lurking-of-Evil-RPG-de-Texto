namespace TLE.DataTypes;

public class Sprite
{
    private string[] _sprite;
    private bool _isActive;

    public Sprite(string[] sprite)
    {
        _sprite = sprite;
        _isActive = true;
    }

    public bool isActive
    {
        get => _isActive;

        set => _isActive = value;
    }
    
    public string[] sprite
    {
        get => _sprite;

        set => _sprite = value;
    }
}