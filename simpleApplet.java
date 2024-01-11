import java.applet.Applet;
import java.awt.Graphics;

// Creating a simple applet by extending the Applet class
public class SimpleApplet extends Applet {
    
    // Overriding the paint method to display "Hello, World!" on the applet window
    public void paint(Graphics g) {
        g.drawString("Hello, World!", 50, 50);
    }
}
