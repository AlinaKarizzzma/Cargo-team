class Truck{
    String Model;
    int Speed; //in km per hour
    int Volume; //in tons
    int Lenght; // in metrs

    void InputTruckDetails(){
    Console.Write("Введите скорость грузовика: ");
    Speed = Convert.ToDouble(Console.ReadLine());

    Console.Write("Введите объем грузовика: ");
    Volume = Convert.ToDouble(Console.ReadLine());

    Console.Write("Введите длину груза: ");
    Length = Convert.ToDouble(Console.ReadLine());

    Console.Write("Введите модель грузовика: ");
    Model = Console.ReadLine();
    }
}





