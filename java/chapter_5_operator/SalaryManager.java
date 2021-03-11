public class SalaryManager {
    public static void main(String[] args) {
        SalaryManager sample = new SalaryManager();
        System.out.println("result = " + sample.getMonthlySalary(20000000));
    }
    public double getMonthlySalary(int yearlySalary) {
        double monthSalary = (double)yearlySalary / 12;
        double tax = calculateTax(monthSalary);
        double NationalPension = calculateNationalPension(monthSalary);
        double HealthInsuarance = calculateHealthInsurance(monthSalary);
        double totalTax = tax + NationalPension + HealthInsuarance;
        monthSalary -= totalTax;
        return monthSalary;
    }
    public double calculateTax(double monthSalary) {
        double tax = monthSalary * 0.125;
        System.out.println("Tax = " + tax);
        return tax;
        
    }
    public double calculateNationalPension(double monthSalary) {
        double NationalPension = monthSalary * 0.081;
        System.out.println("National Pension = " + NationalPension);
        return NationalPension;
    }
    public double calculateHealthInsurance(double monthSalary) {
        double HealthInsurance = monthSalary * 0.135;
        System.out.println("HealthInsurance = " + HealthInsurance);
        return HealthInsurance;
    }

}