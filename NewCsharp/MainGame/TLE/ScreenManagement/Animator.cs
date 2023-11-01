using TLE.DataTypes;

namespace TLE.ScreenManagement;

public class Animator
{
    private List<AnimatedCharObject> _objects;
    private List<Animation> _animations;
    private GraphicsManager _screen;
    
    public Animator(GraphicsManager screen)
    {
        _screen = screen;
        _objects = new List<AnimatedCharObject>();
        _animations = new List<Animation>();
        ExecutarAcaoAIntervalos();
    }

    public void AddObject(AnimatedCharObject obj,Animation animation)
    {
        _objects.Add(obj);
        _animations.Add(animation);
    }
    
    public async Task ExecutarAcaoAIntervalos()
    {
        int intervaloSegundos = 2; // Intervalo desejado em segundos

        while (true)
        {
            await Task.Delay(TimeSpan.FromSeconds(intervaloSegundos));
            Console.WriteLine("Realizando ação...");
            UpdateObjectsFrames();
        }
    }

    private void UpdateObjectsFrames()
    {
        for (int i = 0; i < _objects.Count; i++)
        {
            _objects[i].UpdateSprite(_animations[i].GetFrame());
        }
        
        _screen.RefreshScreen();
    }
}