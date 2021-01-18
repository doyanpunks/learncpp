Write-Output " "

cl /Zi /Za /WX  /sdl /Oy- /EHsc /GS /fp:precise /permissive- /Zc:wchar_t /Zc:forScope /Zc:inline /Gd /FC /std:c++17 *.cpp

Write-Output " " 

.\*.exe

Write-Output " "