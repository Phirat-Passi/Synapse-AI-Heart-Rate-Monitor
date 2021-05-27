# Synapse-AI-Heart-Rate-Monitor

Synapse’s third feature is an intelligent heart rate monitor which integrates sensors with the capability to monitor the blood pressure along with force sensors. This feature is uniquely important because it will be one of the first applications that can be used by patients to remotely monitor their heart rate, preventing cardiac arrests, blood clots and heart failure.   Our unique AI algorithms and app have been designed to extend the oscillometric principle, which is used by most automated cuff devices to measure blood pressure, to a cuff-less, accessible BP monitoring feature within our app. This feature will allow for patients to observe their heart rate and assess their blood pressure.  Our feature operates on the basis of our user pressing their finger against the Smartphone embedded camera sensor &amp; inertial sensor (force sensor); this is an effective approach because the external pressure of the underlying artery (transverse palmar arch artery) increases as the phone measures the applied pressure, resulting in accurate measurements of the variable-amplitude blood volume oscillations that constitute blood pressure measurements. The phone camera, embedded with photoplethysmography (PPG) biosensors and force transducers, serves as the sensor to measure the blood volume oscillations and applied pressure. From there, Synapse’s Blood Pressure monitoring system computes systolic and diastolic BP from the measurements and provides visual feedback to guide the patients in understanding their results.

# Blood Pressure Monitor System Software Framework

Flowchart of the smartphone application and important equations for computing BP running on the phone wherein the input is the measured blood volume waveform and applied pressure and the output is brachial BP values or a try again message. The blue box indicates the beginning of the flowchart, whereas the red boxes indicate the two possible ends of the flowchart. The plot illustrates a parametric model of the oscillogram [blood volume oscillation amplitude (y) as a function of the applied finger pressure (x)] from which BP is computed. 

![image](https://user-images.githubusercontent.com/67471222/119826499-b6fa2f80-bf15-11eb-8d05-eebfbde67ac2.png)
![image](https://user-images.githubusercontent.com/67471222/119826969-3be54900-bf16-11eb-8b36-2b824498aaa3.png)

Schematic diagrams of the proposed oscillometric finger-pressing method for cuff-less BP monitoring using a smartphone, in which the user serves as the actuator instead of the cuff, to vary the external pressure of the transverse palmar arch artery by finger pressing, whereas the phone serves as the sensor to measure blood volume oscillations and applied pressure similar to a cuff, provides a visual display of the applied finger pressure over time to guide the actuation.

![image](https://user-images.githubusercontent.com/67471222/119827079-5ddecb80-bf16-11eb-915c-038479cc1b6d.png)


