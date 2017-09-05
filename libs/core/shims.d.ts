// Auto-generated. Do not edit.
declare namespace robotdulab {

    /**
     * Move forward the robot
     *
     * @param time Delay of the move
     */
    //% blockId=robotdulab_move_forward block="move forward %time" 
    //% parts="robotdulab" shim=robotdulab::moveForward
    function moveForward(time: int32): void;

    /**
     * Move backward the robot
     *
     * @param time Delay of the move
     */
    //% blockId=robotdulab_move_backward block="move backward %time"
    //% parts="robotdulab" shim=robotdulab::moveBackward
    function moveBackward(time: int32): void;

    /**
     * Turn the robot
     * @param direction the direction to turn, eg: Direction.Left
     * @param angle degrees to turn, eg:90
     */
    //% weight=85
    //% blockId=robotdulab_turn block="turn %direction|by %angle degrees" shim=robotdulab::turn
    function turn(direction: Direction, angle: int32): void;
}

// Auto-generated. Do not edit. Really.
