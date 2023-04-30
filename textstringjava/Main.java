/******************************************************************************


*******************************************************************************/
import java.util.*;
public class Main
{
    
   public static class Textstring
    {
        String stream;
        Stack<String> stack;
        
        public Textstring()
        {
            stream = new String();
            stack = new Stack<String>();
        }
        
        public Textstring(String a,  Stack<String> b)
        {
            stream = a;
            stack = b;
            stack.push(stream);
        }
        
        
       public void append(String addition)
        {
            stream = stream + addition;
            stack.push(stream);
        }
        public void undo()
        {
            stack.pop();
            stream = stack.peek();
        }
        public void print()
        {
            System.out.println(stream);
        }
    }
	public static void main(String[] args) {
	    String a = "abcde";
	    Stack <String> b = new Stack<String>();
	    Textstring root = new Textstring(a,b);
	    root.append("addition");
		System.out.println("Hello World");
		root.print();
		root.undo();
		root.print();
	}
}
