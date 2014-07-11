#!/bin/bash

clear
clear
rm ./ExperimentClient

gcc -Wall -Werror -shared ExperimentLibrary.c -o libExperimentLibrary.dylib
gcc -Wall -Werror ExperimentClient.c -o ExperimentClient -L. -lExperimentLibrary

./ExperimentClient