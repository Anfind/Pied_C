import time
import pandas as pd
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.action_chains import ActionChains

# pick excel data
file_path = "DANH SÁCH THAM GIA GENMIX 9.xlsx" 
# Specify column names to read data
column1 = "Column2" 
column2 = "Column3"

google_form_url = "https://docs.google.com/forms/d/e/1FAIpQLSfOCbGHfw-LSSx3Z2KnWlax9EYpnBltK3XKmda6OZMOZWcFMA/closedform" 

# Set up Selenium WebDriver
driver_path = "C:/Program Files/Google/Chrome/Application/Chrome.exe"
driver = webdriver.Chrome(service=Chrome.exe)

# Loop through the data and fill out the form
try:
    for index, row in data.iterrows():
        # Open the Google Form
        driver.get(google_form_url)
        time.sleep(3)
        
        field1 = driver.find_element(By.XPATH, '//*[@id="text1"]/div/div[2]/div[2]/div[1]/div/div[1]/div[2]/div/div[1]/div/div[1]/input')  
        field2 = driver.find_element(By.XPATH, '//*[@id="text2"]/div/div[2]/div[2]/div[1]/div/div[1]/div[2]/div/div[1]/div/div[1]/input')

        field1.send_keys(str(row[column1]))
        field2.send_keys(str(row[column2]))
        
        submit_button = driver.find_element(By.XPATH, '//div[@role="button" and contains(text(), "Submit")]')  # Update with the submit button's XPath
        submit_button.click()
        
        time.sleep(3)
finally:
    driver.quit()
