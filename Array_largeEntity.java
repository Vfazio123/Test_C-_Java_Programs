class Arrays {
   public static void main(String[] args) {
      int[] arr = {0,1,2};   
      System.out.println("Before Func: arr[0]: " + arr[0]);
      System.out.println("Before Func: arr[1]: " + arr[1]);
      System.out.println("Before Func: arr[2]: " + arr[2]);
      System.out.println("\n");
      func(arr);
      System.out.println("Before Func: arr[0]: " + arr[0]);
      System.out.println("Before Func: arr[1]: " + arr[1]);
      System.out.println("Before Func: arr[2]: " + arr[2]);
      System.out.println("\n");  
   }  
   public static void func(int[] a){
      a[0] += 1;
      a[1] += 1;
      a[2] += 1;
      
      System.out.println("Before Func: arr[0]: " + a[0]);
      System.out.println("Before Func: arr[1]: " + a[1]);
      System.out.println("Before Func: arr[2]: " + a[2]);
      System.out.println("\n");
   }
} 
