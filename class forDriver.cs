class forDriver{
    String short;
    String long;

     void InputInformationAboutRoad() {
        Console.Write("нажмите на 1 если хотите короткий путь: ");
        short = Convert.ToDouble(Console.ReadLine());

        Console.Write("нажмите на 2 если хотите долгий путь: ");
        long = Convert.ToDouble(Console.ReadLine());    
    }
}