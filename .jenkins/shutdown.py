#!/usr/bin/env python
# -*- coding: utf-8 -*-
import requests
import argparse
import urlparse

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Example')
    parser.add_argument(
        '--base_url', dest='base_url', required=False, default='http://127.0.0.1:5001/', help='url to stop server')
    args = parser.parse_args()
    try:
        requests.get(urlparse.urljoin(args.base_url, 'stop'))
    except Exception as ex:
        pass