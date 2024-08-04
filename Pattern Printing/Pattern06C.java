class Pattern06C{
    public static void main(String[] args)
 {
  for(int i=1; i<=5; i++){
    for(int j=1; j<=2*(5-i+1); j++){
        System.out.print("*");
    }
    System.out.println();
  }  
 }
 
}

                    // 2*( 5- i + 1)
// ********** 10 -> 2* (5- 1 + 1)
// ********   8  -> 2* (5- 2 + 1)
// ******     6  -> 2* (5- 3 + 1)
// ****       4  -> 2* (5- 4 + 1)
// **         2  -> 2* (5- 5 + 1)