public class TestTrain {
    public static void main (String[] args) {
        Train hi = new Train(10000, "Singapore", 7000);

        System.out.println(hi.ticketPrice);
        System.out.println(hi.destination);
        System.out.println(hi.distance);
        System.out.println(hi.getDiscount());
    }
}
