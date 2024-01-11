class Warehouse{
    String location;
    int volume; // in m3
    int cost; // cost of one day of storage

    void InputWarehouseDetails(){
        Console.Write("Введите местоположение: ");
        location = Convert.ToDouble(Console.ReadLine());

        Console.Write("Введите обем ващего товара: ");
        volume = Convert.ToDouble(Console.ReadLine());

        Console.Write("Введите срок хранение: ");
        cost = Convert.ToDouble(Console.ReadLine());
    }
 }