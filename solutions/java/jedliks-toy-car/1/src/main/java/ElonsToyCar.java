public class ElonsToyCar {
    private int battery = 100;
    private int distance = 0;

    public static ElonsToyCar buy() {
        return new ElonsToyCar();
    }

    public String distanceDisplay() {
        return String.format("Driven %d meters", distance);
    }

    public String batteryDisplay() {
        if (battery == 0) {
            return "Battery empty";
        }
        return String.format("Battery at %d%%", battery);
    }

    public void drive() {
        if (battery == 0) {
            return;
        }
        distance += 20;
        battery -= 1;
    }
}
