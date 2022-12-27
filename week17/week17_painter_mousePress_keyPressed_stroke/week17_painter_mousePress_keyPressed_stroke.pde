void setup()
{
  size(400,400);
  background(#00FFDF);
}
void draw()
{
  if(mousePressed)
  {
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed()
{
  if(key=='1')stroke(#FF004D);
  if(key=='2')stroke(#F6FF00);
}
