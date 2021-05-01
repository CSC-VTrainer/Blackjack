curl -O https://bootstrap.pypa.io/pip/2.7/get-pip.py
sudo apt-get update && apt-get install -y apt-transport-https
sudo apt-get install python
sudo python get-pip.py
sudo python -m pip install -r ./web/requirements.txt