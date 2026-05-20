# Hand Gesture Recognition using Edge Impulse and ESP32

A TinyML-based hand gesture recognition system built using Edge Impulse and ESP32.  
This project focuses on real-time gesture classification for future smart home and automation applications.

---

# 📌 Project Overview

This project was developed to explore:

- Embedded AI (TinyML)
- Computer Vision on microcontrollers
- Dataset engineering
- Real-time gesture classification
- ESP32 deployment workflow

The system was trained using custom hand gesture datasets collected manually and processed through Edge Impulse.

The trained model classifies multiple hand gestures such as:

- ✊ fist
- ☝️ one
- ✌️ two
- 🤟 three
- 🖖 four
- ✋ palm
- 🚫 no_hand

---

# 🚀 Features

- Custom hand gesture dataset
- Edge Impulse image classification pipeline
- TinyML deployment-ready model
- Real-time inference testing
- Dataset balancing and refinement
- no_hand detection support
- Future-ready smart home integration concept

---

# 🧠 Technologies Used

- Edge Impulse
- Arduino IDE
- ESP32
- TinyML
- Embedded AI
- C++
- Image Classification

---

# 📂 Project Structure

```text
Hand-Gesture-AI-ESP32/
│
├── Arduino_Code/
│   └── gesture_ai.ino
│
├── EdgeImpulse_Model/
│   └── Gesture_Control_System_inferencing.zip
│
├── Dataset_Samples/
│   ├── fist/
│   ├── one/
│   ├── two/
│   ├── three/
│   ├── four/
│   ├── palm/
│   └── no_hand/
│
├── Images/
│   ├── confusion_matrix.png
│   ├── feature_explorer.png
│   ├── training_result.png
│   └── testing.png
│
├── README.md
└── LICENSE
```

---

# 📸 Dataset Collection

The dataset was collected manually using different hand gestures under multiple environmental conditions.

Dataset improvements included:

- Different backgrounds
- Different lighting conditions
- Various hand angles
- Distance variations
- Real-world testing samples
- no_hand class addition

The project initially suffered from overfitting due to repeated video-frame extraction, which was later corrected through proper dataset rebuilding and balancing.

---

# 🧪 Model Training

The model was trained using:

- Image Classification
- 96x96 image input
- CNN-based classifier
- Edge Impulse EON Compiler optimization

Training workflow:

```text
Dataset Collection
→ Feature Generation
→ Model Training
→ Validation
→ Testing
→ Refinement
```

---

# 📊 Model Performance

Final model results achieved approximately:

- Validation Accuracy: ~91%
- Test Accuracy: ~89%
- Improved real-world prediction stability

The project focused more on real-world generalization than achieving artificially high training accuracy.

---

# ⚠️ Challenges Faced

During development, several embedded AI challenges were encountered:

- Dataset overfitting
- Gesture overlap confusion
- Memory limitations on ESP32-CAM
- Camera integration issues
- RAM overflow during inference
- Real-time prediction instability
- Dataset balancing problems

These issues helped improve understanding of TinyML deployment constraints and embedded AI optimization.

---

# 🔧 Deployment Status

Current Status:

- ✅ Dataset completed
- ✅ Model trained
- ✅ Arduino library exported
- ✅ Initial ESP32 deployment experiments completed
- ⏸ ESP32-S3 deployment planned for future improvements

The project is currently paused due to hardware limitations of ESP32-CAM and future plans to migrate toward ESP32-S3 for better AI performance.

---

# 🔮 Future Improvements

Planned future upgrades include:

- ESP32-S3 deployment
- Real-time camera inference
- Relay control integration
- Smart home automation
- MQTT/Firebase connectivity
- Flutter mobile app integration
- Better dataset augmentation
- Higher FPS optimization

---

# 💡 Learning Outcomes

This project provided practical experience in:

- TinyML workflow
- Dataset engineering
- Embedded AI deployment
- ESP32 limitations
- Model optimization
- Real-world AI testing

One of the biggest lessons learned during this project:

```text
Good datasets are more important than high training accuracy.
```

---

# 🤝 Contributions

This project was developed as a personal embedded AI learning project.  
Suggestions, improvements, and collaborations are always welcome.

---

# ⭐ Acknowledgements

Special thanks to:

- Edge Impulse
- TinyML community
- Open-source embedded AI ecosystem

---

# 📜 License

This project is open-source and available under the MIT License.
