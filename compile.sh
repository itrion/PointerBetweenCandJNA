#!/bin/bash

clear
clear
rm ./ExperimentClient


gcc -Wall -Werror -shared C/ExperimentLibrary.c -o libExperimentLibrary.dylib
gcc -Wall -Werror C/ExperimentClient.c -o ExperimentClient -L. -lExperimentLibrary

./ExperimentClient