import socket
import RPi.GPIO as GPIO

# Configure GPIO mode
GPIO.setmode(GPIO.BCM)

# Set GPIO pin for the bulb
BULB_PIN = 18
GPIO.setup(BULB_PIN, GPIO.OUT)

# Server details
SERVER_HOST = '11.12.34.65'  # Replace with the actual server's IP address
SERVER_PORT = 65432

# Connect to the server
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client_socket:
    client_socket.connect((SERVER_HOST, SERVER_PORT))
    print("Connected to the server.")

    # Receive and process messages from the server indefinitely
    while True:
        try:
            # Receive message from server
            data = client_socket.recv(1024).decode("utf-8")
            if not data:
                break  # Connection closed by server

            # Process YOLO output
            yolo_output = int(data.split(":")[-1].strip())  # Extract YOLO output

            # If YOLO output is 1, turn on the bulb
            if yolo_output == 1:
                GPIO.output(BULB_PIN, GPIO.HIGH)
                print("Bulb turned ON.")
            else:
                GPIO.output(BULB_PIN, GPIO.LOW)
                print("Bulb turned OFF.")

        except KeyboardInterrupt:
            print("Client shutting down...")
            break

# Clean up GPIO
GPIO.cleanup()
print("Client closed.")
