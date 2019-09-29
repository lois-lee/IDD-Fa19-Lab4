# Paper Puppets

*A lab report by Lois Lee*

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

[Vibrating Motor Video](https://drive.google.com/file/d/1YvCaHLDKz22taWAh3Sgko17NfcB-n7qy/view?usp=sharing)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Power = Red
Brown = Ground
Orange = Signal

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

Pin 9

**b. What aspects of the Servo code control angle or speed?**

```myservo.write(pos)```

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

[Potentiometer controlling Servo Demo](https://drive.google.com/file/d/1bHEnCXqqYbjzoCqx_ZDifpZA8wKYrGNh/view?usp=sharing)
![](1.png)

## Part D. Paper puppet

[Paper puppet](https://drive.google.com/file/d/1aYniqdjQkItdTvIigmhJDLGudJfjjKwg/view?usp=sharing)

## Part E. Make it your own


My paper puppet is a distressed puppet that screams at a pitch based on the potentiometer reading, and moves his arms up and down based on the pitch. The higher the pitch the higher his arms and the more distressed he gets.

[Video for Distressed Puppet](https://drive.google.com/file/d/1gmDH3vVgBclelb13uFMQZ24zH1UW0oBr/view?usp=sharing)

[Code for Distressed Puppet](Distressed.ino)
 
