class Pattern06D{
    public static void main(String[] args)
 {
  for(int i=1; i<=5; i++){
    for(int j=1; j<=2*(5-i+1)-1; j++){
        System.out.print("*");
    }
    System.out.println();
  }  
 }
 
} 
//           -> 2*(5-i+1)-1
// ********* -> 2*(5-1+1)-1
// *******   -> 2*(5-1+1)-1
// *****     -> 2*(5-1+1)-1
// ***       -> 2*(5-1+1)-1
// *         -> 2*(5-1+1)-1