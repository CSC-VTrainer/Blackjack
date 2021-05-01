#!/usr/bin/env python
# -*- coding: utf-8 -*-
import random
from flask import Flask, render_template, request

app = Flask(__name__)


@app.route('/stop')
def shutdown():
    func = request.environ.get('werkzeug.server.shutdown')
    if func is None:
        raise RuntimeError('Not running with the Werkzeug Server')
    func()
    return 'Server stopped'


@app.route('/')
def hello_world():
    return render_template('index.html', text='Hello World!', num=random.random())


if __name__ == '__main__':
    app.run('0.0.0.0', 5001)
