namespace TLE.DataTypes;

public class AnimatedCharObject : CharObject
{
    private List<Sprite> _frames;
    private int _currentFrame = 0;

    public AnimatedCharObject(string[][] frames) : base(new[] { "WWW", "WWW", "WWW" })
    {
        
    }

    public void NextFrame()
    {
        
    }
}