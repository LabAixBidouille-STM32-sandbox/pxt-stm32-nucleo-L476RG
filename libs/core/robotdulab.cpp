#include "pxt.h"
#include "robotdulab.h"

RobotDuLAB robotDuLAB();

namespace robotdulab {

/**
* Move forward the robot
*
* @param time Delay of the move
*/
//% blockId=robotdulab_move_forward block="move forward %time" 
//% parts="robotdulab"
void moveForward(int time) {
}

/**
* Move backward the robot
*
* @param time Delay of the move
*/
//% blockId=robotdulab_move_backward block="move backward %time"
//% parts="robotdulab"
void moveBackward(int time) {
}

/**
* Turn the robot
* @param direction the direction to turn, eg: Direction.Left
* @param angle degrees to turn, eg:90
*/
//% weight=85
//% blockId=robotdulab_turn block="turn %direction|by %angle degrees"
void turn(Direction direction, int angle){

}

}