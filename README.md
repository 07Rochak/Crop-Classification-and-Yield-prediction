# Crop Yield Prediction Using Drone

## Overview

This repository contains code and models for a comprehensive system that leverages drone imagery for crop-related tasks. The system is divided into three main modules:

1. **Crop Identification**: Utilizing images captured by drones, this model can identify various crops such as rice, maize, wheat, sugarcane, and paddy. The accuracy of this model is an impressive 91.9%.

   [Crop Identification Model](https://drive.google.com/file/d/1vu8APu1H27H5Lg7KOVyezbdi6H8VsOHx/view?usp=drive_link)

2. **Fire Detection**: The second module focuses on fire detection using image processing techniques. The model can analyze drone images to identify and locate fires in agricultural fields. The accuracy of this model is 95%.

   [Fire Detection Model](https://drive.google.com/file/d/1eB_6I6iJ-R2C9hIYvnDiZPKoXMbDYx0p/view?usp=drive_link)

3. **Crop Yield Prediction**: The third module predicts crop yield based on the collected data. It incorporates information from the crop identification module and provides accurate predictions with a high accuracy of 96.5%. Additionally, the system offers valuable suggestions for improving production based on the provided data.

   [Crop Yield Prediction Model](https://drive.google.com/file/d/1-55fvL0BrwEMcwdocIWnDmPvcchZbBfj/view?usp=sharing)

4. **Aerial Seeding**: Another feature of this project is of aerial seeding in which there is a system using which seeds can be dropped in the farm using the drone. The drone will be provided 30 seconds to position itself and then the seed box will continue to open and close at intervals of 5 seconds for 20 to 30 minutes. The code for the arduino file has been provided in the repository

## Datasets

### Crop Identification Dataset
The crop identification model was trained on a diverse dataset containing images of rice, maize, wheat, sugarcane, and paddy. You can find the dataset [here](https://www.kaggle.com/datasets/aman2000jaiswal/agriculture-crop-images?resource=download).

### Fire Detection Dataset
The fire detection model relies on a dataset specifically curated for identifying fires in agricultural fields. Access the dataset [here](https://drive.google.com/drive/folders/1qpnajiy9wa5dZStqIhFHVgy2hE_fK4fb).

### Crop Yield Prediction Dataset
The crop yield prediction model was trained on a dataset encompassing various factors influencing crop yield. You can access the dataset in the repository itself

## Model Accuracies

- **Crop Identification Model Accuracy**: 91.9%
- **Fire Detection Model Accuracy**: 95%
- **Crop Yield Prediction Model Accuracy**: 96.5%

## Usage

1. Clone the repository:

```bash
git clone https://github.com/your-username/crop-yield-prediction-using-drone.git
