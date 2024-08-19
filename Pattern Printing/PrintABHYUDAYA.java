public class PrintABHYUDAYA {
    public static void main(String args[]) {
        int n = 7; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                if (j == 0 || j == n-1 || i == n/2 || i == 0 && (j > 0 && j < n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print B
                if (j == 0 || (i == 0 || i == n/2 || i == n-1) && j != n-1 || j == n-1 && i != 0 && i != n/2 && i != n-1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print H
                if ((j==0)||(j==n-1)||(i==n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print Y
                if ((i+j==n-1)|| (i==j && i<=n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print U
                if ((j==0 && i!=n-1) || (j==n-1 && i!=n-1) || (i==n-1 && j!=0 && j!=n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print D
                if ((i==0 && j!=6) || (i==6 && j!=6)  || (j==6 && i!=0 && i!=6) || (j==0)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print A
                if ((j==0 && i!=0) || (j==n-1 && i!=0) ||(i==0 && j!=0) && (j!=n-1)||(i==n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print Y
                if ((i+j==n-1)|| (i==j && i<=n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            for (int j = 0; j < n; j++) {
                // Print A
                if ((j==0 && i!=0) || (j==n-1 && i!=0) ||(i==0 && j!=0) && (j!=n-1)||(i==n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            
            System.out.println(); 
        }
    }
}


// ******* ******  *     * *     * *     * ******   *****  *     *  ***** 
// *     * *     * *     *  *   *  *     * *     * *     *  *   *  *     *
// *     * *     * *     *   * *   *     * *     * *     *   * *   *     *
// ******* ******  *******    *    *     * *     * *******    *    *******
// *     * *     * *     *   *     *     * *     * *     *   *     *     *
// *     * *     * *     *  *      *     * *     * *     *  *      *     *
// *     * ******  *     * *        *****  ******  *     * *       *     *