class Pattern08C{
    public static void main(String[] args)
 {
  for(int i=1; i<=5; i++){
    for(int k=1; k<=5-i+1;k++){
        System.out.print("_ ");
    }
    for(int j=1; j<=i; j++){
        System.out.print("* ");
    }
    System.out.println();
  }
  for(int i=1; i<=4; i++){
    for(int k=1; k<=i+1; k++){
        System.out.print("_ ");
    }
    for(int j=1; j<=4-i+1; j++){
        System.out.print("* ");
    }
    System.out.println();
  }  
 }  
 }
 

//  _ _ _ _ _ * 
//  _ _ _ _ * * 
//  _ _ _ * * * 
//  _ _ * * * * 
//  _ * * * * * 
//  _ _ * * * * 
//  _ _ _ * * * 
//  _ _ _ _ * * 
//  _ _ _ _ _ * 
 

 
