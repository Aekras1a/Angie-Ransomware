@FOR /F "tokens=* USEBACKQ" %%F IN (`timestampx86`) DO @( SET TIMESTAMP=%%F )
@"%WINDBG%\x86\windbg.exe" -logo "%PROJECT_PATH%/log/windbg/%PROJECT_BUILD%/%TIMESTAMP%.txt" -T "X %PROJECT_BUILD% " "%PROJECT_BIN_PATH%/%PROJECT_BUILD%/Master.exe"