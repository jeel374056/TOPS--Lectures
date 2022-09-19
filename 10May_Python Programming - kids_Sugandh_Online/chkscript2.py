from lib2to3.pgen2 import driver
from selenium import webdriver
import time
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
url ="https://topsint.com/topserp/index.php"
user="sugandh"
password="Tops?123"
driver=webdriver.Chrome( r'C:\Users\Sugandh\Desktop\Assignment\chromedriver_win32\chromedriver.exe')
driver.get(url)
driver.maximize_window()
driver.find_element(By.XPATH,'//*[@id="lutype"]').click()
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="lutype"]/option[10]').click()
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="l_username"]').send_keys(user)
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="l_password"]').send_keys(password)
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="frmlogin"]/table/tbody/tr[9]/td[2]/input').click()
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="smoothmenu1"]/ul/li[10]').click()
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="smoothmenu1"]/ul/li[10]/ul/li[4]').click()
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="frm_statusreport"]/fieldset/table/tbody/tr[7]/td/input').click()
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="btn_sendmaildaily_t"]').click() #remove this xpath, add send mail xpath(//*[@id="btn_sendmaildaily_t"])
time.sleep(1)
driver.find_element(By.XPATH,'//*[@id="smoothmenu1"]/ul/li[14]/a').click()
time.sleep(1)
# //*[@id="smoothmenu1"]/ul/li[14]/a