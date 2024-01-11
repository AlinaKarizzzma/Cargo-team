class Driver{
    String age;
    int experiance;
    
    void InputInformationAboutDriver() {
        Console.Write("Введите возраст водителя: ");
        age = Convert.ToDouble(Console.ReadLine());

        Console.Write("Введите стаж водителя: ");
        experiance = Convert.ToDouble(Console.ReadLine());    
    }
}    