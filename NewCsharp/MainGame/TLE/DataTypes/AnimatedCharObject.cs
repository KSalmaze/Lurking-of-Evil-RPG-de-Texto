using TLE.ScreenManagement;

namespace TLE.DataTypes;

public class AnimatedCharObject : CharObject
{
    private List<Animation> _animations;
    private Sprite _baseSprite;

    public AnimatedCharObject(Sprite sprite) : base(sprite.sprite)
    {
        _baseSprite = sprite;
        _animations = new List<Animation>();
    }

    public void AddAnimation(Animation animation)
    {
        _animations.Add(animation);
    }

    public void PlayAnimation(Animator animator,string animation)
    {
        foreach (var anim in _animations)
        {
            if (anim.Name == animation)
            {
                animator.AddObject(this,anim);
            }
        }
    }

    public void UpdateSprite(Sprite newSprite)
    {
        sprite = newSprite.sprite;
    }
}