from flask import Flask
app = Flask(__name__);

@app.route("/")
def index():
	return "Hello World";
@app.route("/<string:name>")
def Hello(name):
	return f"Hello, {name}"