class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setBox (int bLength, int bWidth, int bHeight);
      // write prototypes of getters for length, width and height
        int getLength ();
        int getWidth ();
        int getHeight ();
       int calcVolume ();
};
