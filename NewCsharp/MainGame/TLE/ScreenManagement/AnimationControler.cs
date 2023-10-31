using TLE.DataTypes;

namespace TLE.ScreenManagement;

public class AnimationControler
{
    private List<AnimatedCharObject> _objects;
    private GraphicsManager _screen;
    
    public AnimationControler(GraphicsManager screen)
    {
        _screen = screen;
        _objects = new List<AnimatedCharObject>();
    }

    public void AddObject(AnimatedCharObject obj)
    {
        _objects.Add(obj);
    }
    
    public async Task ExecutarAcaoAIntervalos()
    {
        int intervaloSegundos = 5; // Intervalo desejado em segundos

        while (true)
        {
            await Task.Delay(TimeSpan.FromSeconds(intervaloSegundos));
            Console.WriteLine("Realizando ação...");
            UpdateObjectsFrames();
        }
    }

    private void UpdateObjectsFrames()
    {
        foreach (var obj in _objects)
        {
            obj.NextFrame();
        }
        
        _screen.RefreshScreen();
    }
}