# Camera-Calibration-for-Videos
Camera Calibration for Videos using Multi-Camera Setup

Following https://github.com/jiuerbujie/omnidirectional_calibration

Setup - 
1) I have used WSL 2 and Windows remote desktop for GUI. 
2) For python packages, I have used anaconda package manager. 
   Packages used - opencv, skvideo, numpy, matplotlib
3) For C++, package used is opencv.
   I installed it using these youtube videos - [link 1](https://www.youtube.com/watch?v=FCzMpHWUUKg)  [link 2](https://www.youtube.com/watch?v=6pABIQl1ZP0)
4) Follow the original [repo](https://github.com/jiuerbujie/omnidirectional_calibration) to install their package.

Steps - 
1) Make an image_data directory
1) Create a pattern (dimensions 1080 X 720 which can be changed)
   -  Go to pattern_generator folder
   -  Run the make file [(basic tutorial)](https://www.youtube.com/watch?v=_r7i5X0rXJk)
   -  Run the pattern executable (./pattern). Give the path as your input (For ex. ../image_data/pattern.jpeg).
2) Extract the images from the video
   -  Go to the image_extraction folder
   -  Follow the steps in jupyter notebook - synchronizing.ipynb
3) Camera calibration
   -  Run the make file 
   -  Run the multicamera executable (./multicamera) with a couple of arguments \
   -  Usage: 
         -  muticamera \
             -nc <num_camera> # number of cameras \
             -pw <pattern_width> # physical width of random pattern\
             -ph <pattern_height> # physical height of random pattern\
             -ct <camera_type> # camera type, 0 for pinhole and 1 for omnidirectional\
             -fe # whether show feature extraction\
             -nm # number of minimal matches of an image\
		       -v # whether show verbose information\
              input_data # text file with pattern file names and a list of photo names\
      Sample command : ./multicamera -nc 2 -pw 28.2 -ph 19.3 -ct 0 -fe 1 -nm 30 -v 1 imagelist.xml\
   -  You will get the output in the form of an xml file named - multi-camera-results.xml
