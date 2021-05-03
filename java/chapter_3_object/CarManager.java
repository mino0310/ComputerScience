// public class Car {
// 	int speed;
// 	int distance;
// 	String color;

// 	public Car() {
// 	}
// 	public void speedUp() {
// 		speed += 5;
// 	}
// 	public void breakDown() {
// 		speed -= 10;
// 	}
// 	public int getCurrentSpeed() {
// 		return speed;
// 	}
// }

// public class CarManager {
// 	public static void main(String[] args) {
// 		Car dogCar = new Car();
// 		Car cowCar = new Car();
// 		cowCar.speedUp();
// 	}
// }
public class CarManager {
	public static void main(String[] args) {
		Car dogCar = new Car();
		dogCar.speedUp();
		dogCar.speedUp();
		System.out.println(dogCar.getCurrentSpeed());
		dogCar.breakDown();
		System.out.println(dogCar.getCurrentSpeed());
	}
}