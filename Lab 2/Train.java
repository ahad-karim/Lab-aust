public class Train {
    double ticketPrice;
    String destination;
    double distance;

    Train() {

    }

    Train(double p, String des, double dis) {
        ticketPrice = p;
        destination = des;
        distance = dis;
    }

    double getDiscount() {
        if (distance >= 6000) {
            double res = 25*ticketPrice/100;
            return res;
        } else {
            return 0;
        }
    }
}
