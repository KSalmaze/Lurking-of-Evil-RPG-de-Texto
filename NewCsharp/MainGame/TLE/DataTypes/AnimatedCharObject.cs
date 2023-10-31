namespace TLE.DataTypes;

public class AnimatedCharObject : CharObject
{
    private List<Sprite> _frames;
    private int _currentFrame;

    public AnimatedCharObject(Sprite[] frames) : base(new[] { "WWW", "WWW", "WWW" })
    {
        _frames = new List<Sprite>();
        
        for (int i = 0; i < frames.Length; i++)
        {
            _frames.Add(frames[i]);
        }

        sprite = _frames[_currentFrame].sprite;
    }

    public void NextFrame()
    {
        if (_currentFrame < _frames.Count)
        {
            _currentFrame++;
            sprite = _frames[_currentFrame].sprite;
            return;
        }

        _currentFrame = 0;
        sprite = _frames[_currentFrame].sprite;
    }
}