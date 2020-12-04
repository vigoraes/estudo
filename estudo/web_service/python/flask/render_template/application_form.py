from flask import Flask
from flask import render_template 

app = Flask(__name__)

#@app.route('/hello/')
@app.route('/')
def hello():
    return render_template('form.html')