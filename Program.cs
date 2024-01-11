namespace ConsoleApp3 {
	class Program {
		static void Main() {

		}
	}
}

class Product {
	public String Name;
	public String Category;
	public String Description;

	public int Quentity;
	public double Price;
	public override string ToString() {
		return String.Format("Product: {0}\n" +
			"Category: {1}\n" +
			"Description: {2}\n" +
			"Quentity: {3}\n" +
			"Price: {4}", this.Name, this.Category, this.Description, this.Price, this.Quentity);
	}
}

class ShoppingCart {
	private List<Product> products;

	public ShoppingCart() => products = [];

	public void AddProduct(Product product) {
		products.Add(product);
	}
	public void RemoveProduct(Product product) {
		products.Remove(product);
	}
}

class User {
	public String Name;

	public User(String name) {
		this.Name = name;
	}
	public void Order(ShoppingCart cart) {

	}
}

class Deliever {
	public String Name;
}