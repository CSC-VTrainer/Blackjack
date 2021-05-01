#!/bin/bash
curl -O https://bootstrap.pypa.io/pip/2.7/get-pip.py
sudo apt-get update && apt-get install -y apt-transport-https
sudo apt-get update && sudo apt-get install -y python3 python3-pip
sudo python3 -m pip install -r ./web/requirements.txt