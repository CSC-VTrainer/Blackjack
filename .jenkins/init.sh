#!/bin/bash
curl -O https://bootstrap.pypa.io/pip/2.7/get-pip.py
apt-get update && apt-get install -y apt-transport-https
apt-get update && apt-get install -y python3 python3-pip
python3 -m pip install -r ./web/requirementstxt