package d.util;

import java.util.Date;

public class DateCalendarSample {
    public static void main(String[] args) {
        DateCalendarSample sample = new DateCalendarSample();
        sample.checkDate();
    }

    public void checkDate() {
        Date date = new Date();
        System.out.println(date);

        long time = date.getTime();
        System.out.println(time);

        date.setTime(0);
        System.out.println(date);
    }
}