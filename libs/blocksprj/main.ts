loops.forever(function () {
    robotdulab.moveForward(1)
    if (robotdulab.getDistance() < 5) {
        robotdulab.turn(Direction.LEFT, 90)
    }
})
