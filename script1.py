import cv2
from pyzbar.pyzbar import decode
import numpy as np  # Import numpy

# Initialize the webcam
cap = cv2.VideoCapture(0)

while True:
    # Capture frame-by-frame
    ret, frame = cap.read()

    # Decode the QR codes in the frame
    decoded_objects = decode(frame)

    # Draw bounding boxes and print the decoded text
    for obj in decoded_objects:
        points = obj.polygon
        if len(points) == 4:
            points = [tuple(pt) for pt in points]
            cv2.polylines(frame, [np.array(points, dtype=np.int32)], isClosed=True, color=(0, 255, 0), thickness=2)

        # Display the QR code's data
        qr_data = obj.data.decode('utf-8')
        qr_type = obj.type
        print(f"Detected {qr_type} with data: {qr_data}")

        # Draw the text on the image
        cv2.putText(frame, qr_data, (points[0][0], points[0][1] - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)

    # Display the resulting frame
    cv2.imshow("QR Code Scanner", frame)

    # Break the loop if 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the capture and close windows
cap.release()
cv2.destroyAllWindows()
