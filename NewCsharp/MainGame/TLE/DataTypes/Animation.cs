namespace TLE.DataTypes;

public class Animation
{
    private string _name;
    private int _actualFrame = 0;
    private char TAG;
    private List<Sprite> _frames;

    public Animation(string name, string[][] frames)
    {
        _name = name;

        _frames = new List<Sprite>();

        for (int i = 0; i < frames.Length; i++)
        {
            _frames.Add(new Sprite(frames[i]));
        }
    }

    public string Name
    {
        get => _name;
        set => _name = value;
    }

    public Sprite GetFrame()
    {
        actualframe++;
        if (actualframe > _frames.Count)
        {
            actualframe = 1;
        }
        return _frames[actualframe - 1];
    }
    public int actualframe
    {
        get => _actualFrame;

        set => _actualFrame = value;
    }
}