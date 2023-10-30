namespace TLE.InputManagement;

public static class InputList
{
    public static ConsoleKeyInfo
        OptionUp = new ConsoleKeyInfo('w', ConsoleKey.W, false, false, false),
        OptionDown = new ConsoleKeyInfo('s', ConsoleKey.S, false, false, false),
        OptionEnter = new ConsoleKeyInfo(' ',ConsoleKey.Enter,false,false,false);
}