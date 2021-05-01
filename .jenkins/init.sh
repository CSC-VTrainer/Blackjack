#!/bin/bash
curl -O https://bootstrap.pypa.io/pip/2.7/get-pip.py
sudo apt-get update && apt-get install -y apt-transport-https python3 python3-pip

python3 -m pip install -r ./requirements.txt