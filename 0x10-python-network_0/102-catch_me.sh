#!/bin/bash
#Script to trigger a response from 0.0.0.0:5000/catch_me with the message "You got me!" in the body.
curl -sL 0.0.0.0:5000/catch_me_3 -X PUT -d "user_id=98" -H "Origin:School"
