# Cap Eyes — Smart Container Lid
Cap Eyes is a smart container-lid project designed to monitor the container's fill level automatically.

An ESP32 processessensor readings to determine how full the container is and can send the information wirelessly.

The system follows a simple cycle:

**SLEEP → WAKE → MEASURE → SEND**

A distance sensor measures the gap between the lid and the contents.

The system uses threshold logic to classify the container as **FULL, HALF, or EMPTY**.

An accelerometer can detect lid movement and wake the device.

Battery level is also monitored so the system can reduce or skip  sending data when the battery is low.

The firmware is being developed and tested first using **plain C++ simulation and Wokwi** without physical hardware.~