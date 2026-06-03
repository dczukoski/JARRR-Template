using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:
extern distance frontLidar; // #TODO - Add Lidar for reset to Drive Constructor
extern distance rightLidar;

void  vexcodeInit( void );