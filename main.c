#include <X11/Xlib.h>
#include <X11/Xutil.h>


int main(void) {
   XEvent event;

   Display *display = XOpenDisplay(NULL);
   int screen = DefaultScreen(display);
   XSetWindowAttributes attr;
   XVisualInfo visual_info;
   XMatchVisualInfo(display,DefaultScreen(display),32,TrueColor, &visual_info);


   attr.colormap = XCreateColormap(display, DefaultRootWindow(display), visual_info.visual, AllocNone);

   Window w = XCreateWindow(display,XRootWindow(display,screen),0,0,DisplayWidth(display,screen),DisplayHeight(display,screen),5,visual_info.depth,InputOutput,visual_info.visual,CWColormap | CWBorderPixel | CWBackPixel,&attr);
   XSelectInput(display, w, ExposureMask | KeyPressMask);
   XMapWindow(display, w);

   while (1) {
      XNextEvent(display, &event);
      if(event.type == KeyPress){
          if(event.xkey.keycode == 0x09)
              break;
      }
   }

   XCloseDisplay(display);
   return 0;
}
