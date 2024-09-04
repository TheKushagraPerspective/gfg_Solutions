import java.util.Scanner;


class PrintTable {

    static void printTable(int n) {

        // write code from here

        int multiplier = n*10;
        while(multiplier > 0) {
            System.out.print(multiplier + " ");
            multiplier -= n;
        }

        // write code till here


        // OR
        // you can write that code also
        
        // for(int i=10 ; i>0 ; i--) {
        //     System.out.print(n*i + " ");
        // }
    }
    public static void main(String[] args) {

        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        PrintTable.printTable(n);

        sc.close();

    }
}