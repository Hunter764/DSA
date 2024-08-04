class Pattern07C{
    public static void main(String[] args)
 {
  for(int i=1; i<=5; i++){
    for(int k=1; k<=i;k++){
        System.out.print("_");
    }
    for(int j=1; j<=5; j++){
        System.out.print("*");
    }
    System.out.println();
  }  
 }
 
} 

// _*****
// __*****
// ___*****
// ____*****
// _____*****