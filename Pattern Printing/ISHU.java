public class ISHU {
    public static void main(String args[]) {
        int n = 7; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                //Print I
                if ((j==n/2)||(i==0)||(i==n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print S
                if ((i==0 && j!=0) || (i==n-1 && j!=n-1) || (i==n/2 && j!=0 && j!=n-1)||(j==0 && i<n/2 && i!=0) ||(j==n-1 && i>n/2 && i!=n-1)) {
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
                // Print U
                if ((j==0 && i!=n-1) || (j==n-1 && i!=n-1) || (i==n-1 && j!=0 && j!=n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print Heart 
                if ((i == 0 && (j == 1 || j == 5)) || 
                (i == 1 && (j == 0 || j == 2 || j == 4 || j == 6)) || 
                (i == 2 && (j == 0 || j == 2 || j == 4 || j == 6)) || 
                (i == 3 && (j == 0 || j == 1 || j == 5 || j == 6)) || 
                (i == 4 && (j == 1 || j == 5)) || 
                (i == 5 && (j == 2 || j == 4)) || 
                (i == 6 && j == 3)) { 
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print I
                if ((j==n/2)||(i==0)||(i==n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print M
                if ((j==0)||(j==n-1)||(i==j && i<=n/2)||(i+j==6 && i<=n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print S
                if ((i==0 && j!=0) || (i==n-1 && j!=n-1) || (i==n/2 && j!=0 && j!=n-1)||(j==0 && i<n/2 && i!=0) ||(j==n-1 && i>n/2 && i!=n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print O
                if ((j==0 && i!=0 && i!=n-1) || (j==n-1 && i!=0 && i!=n-1 ) || (i==0 && j!=0 && j!=n-1) ||(i==n-1 && j!=0 && j!=n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print R
                if ((j==0) || (i-j == n/2) || (j==n-1 && i<=n/2 && i!=0 && i!=n/2) || (i==0 && j!=n-1) || (i==n/2 && j!=n-1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                // Print R
                if ((j==0) || (i-j == n/2) || (j==n-1 && i<=n/2 && i!=0 && i!=n/2) || (i==0 && j!=n-1) || (i==n/2 && j!=n-1)) {
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
            System.out.println(); 
        }
    }
}
