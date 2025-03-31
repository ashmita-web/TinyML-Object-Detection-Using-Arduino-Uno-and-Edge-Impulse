# TinyML-Object-Detection-Using-Arduino-Uno-and-Edge-Impulse
Real-Time Object Detection using Arduino Uno and Edge Impulse with TinyML

You can find the public version of the project here: [Edge Impulse Project Link](https://studio.edgeimpulse.com/public/604837/live)

### Project Overview

This project demonstrates real-time object detection using an IR Object Sensor with Arduino Uno, leveraging Edge Impulse for data collection, model training, and deployment using TinyML. The model is deployed on Arduino for on-device inference.

### Components Used

- Arduino Uno
- IR Object Sensor
- USB Cable (for connecting Arduino to a computer)
- Computer (macOS or Windows for model training and deployment)

![PHOTO-2025-03-31-23-59-20](https://github.com/user-attachments/assets/f11ebef6-9bb5-4f30-be83-49a4ac48c3cb)



#### Files Included

- **Source Code & Models**
  - `Arduino_Code/object_detection.ino` → Arduino program for object detection
  - [Edge Impulse Project Link](https://studio.edgeimpulse.com/public/604837/live)
    
- **Documentation & Data**
  - TinyML projectL.pdf` → Project documentation
  
### Setup Instructions

#### Step 1: Install Required Software

- Download and install Arduino IDE → [Download Here](https://www.arduino.cc/en/software)
  
- Install Edge Impulse CLI (for data collection and model training):
  
  ```bash
  npm install -g edge-impulse-cli
  
### Step 2: Connect and Upload Code to Arduino

- Connect the IR Sensor to Arduino Uno using appropriate GPIO pins.
- Open the `Arduino_Code/object_detection.ino` file in Arduino IDE.
- Upload the code to Arduino Uno.

  ![PHOTO-2025-03-31-23-58-41](https://github.com/user-attachments/assets/8c518133-7c4b-4766-87c8-d0c4cbdbbc3f)

### Step 3: Collect Data & Train a Model Using Edge Impulse

- Use Edge Impulse Studio to collect sensor data.
- Train a TinyML model and export it as a `.tflite` file.
- Deploy the trained model back to the Arduino Uno.

### References

- [Edge Impulse Studio](https://www.edgeimpulse.com/)
- [Arduino IDE](https://www.arduino.cc/en/software)

