class User{
    String name;
    String numberPhone;
    String city;

    void InputInformationAboutYou() {
        Console.Write("Введите ваше имя: ");
        name = Convert.ToDouble(Console.ReadLine());

        Console.Write("Введите номер телефона: ");
        numberPhone = Convert.ToDouble(Console.ReadLine());

        Console.Write("Введите место проживание: ");
        city = Convert.ToDouble(Console.ReadLine());
    }
}