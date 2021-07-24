# Camera-Calibration-for-Videos
Camera Calibration for Videos using Omnidirectional Calibration

Following https://github.com/jiuerbujie/omnidirectional_calibration

Setup - 
1) I have used WSL 2 and Windows remote desktop for GUI. 
2) For python packages, I have used anaconda package manager. 
   Packages used - opencv, skvideo, numpy, matplotlib
3) For C++, package used is opencv.
   I installed it using these youtube videos - [link 1](https://www.youtube.com/watch?v=FCzMpHWUUKg)  [link 2](https://www.youtube.com/watch?v=6pABIQl1ZP0)
4) Follow the original [repo](https://github.com/jiuerbujie/omnidirectional_calibration) to install their package.

Steps - 
1) Create a pattern (dimensions 1080 X 720 which can be changed)
   -  Go to pattern_generator folder
   -  Run the make file [(basic tutorial)](https://www.youtube.com/watch?v=_r7i5X0rXJk)
   -  Run the pattern executable (./pattern). Give the path as your input (For ex. "../demo/pattern.jpeg").
2) Extract the images from the video
   -  Go to the image_extraction folder
   -  Follow the steps in jupyter notebook - synchronizing.ipynb
