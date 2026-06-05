import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

class AppointmentScheduler {
    public LocalDateTime schedule(String appointmentDateDescription) {
        DateTimeFormatter parser = DateTimeFormatter.ofPattern("MM/dd/yyyy kk:mm:ss");
        return LocalDateTime.parse(appointmentDateDescription, parser);
    }

    public boolean hasPassed(LocalDateTime appointmentDate) {
        return appointmentDate.isBefore(LocalDateTime.now());
    }

    public boolean isAfternoonAppointment(LocalDateTime appointmentDate) {
        int hour = appointmentDate.getHour();
        return hour >= 12 && hour < 18;
    }

    public String getDescription(LocalDateTime appointmentDate) {
        String rawDay = appointmentDate.getDayOfWeek().toString().toLowerCase();
        String rawMonth = appointmentDate.getMonth().toString().toLowerCase();
        String month = rawMonth.substring(0, 1).toUpperCase() + rawMonth.substring(1);
        String day = rawDay.substring(0, 1).toUpperCase() + rawDay.substring(1);
        int date = appointmentDate.getDayOfMonth();
        int year = appointmentDate.getYear();
        DateTimeFormatter printer = DateTimeFormatter.ofPattern("h:mm a");
        String time = printer.format(appointmentDate);
        return String.format("You have an appointment on %s, %s %d, %d, at %s.", day, month, date, year, time);
    }

    public LocalDate getAnniversaryDate() {
        return LocalDate.of(LocalDate.now().getYear(), 9, 15);
    }
}
