flacboi-for-windows

Windows port of flacboi — a simple command-line tool that downloads high-quality FLAC audio and cover art from YouTube and YouTube Music.


Features
URLPaste a YouTube or YouTube Music URL → downloads as FLACSearchType a song name → searches and downloads the top resultPlaylistPaste a playlist URL → downloads the entire playlistCover artSaves thumbnails to a Covers folderLoopRuns in a loop — no need to restart

Setup
1. Install yt-dlp
Download yt-dlp.exe from yt-dlp releases and place it in C:\Windows\System32\
2. Install ffmpeg
Download from ffmpeg.org and place ffmpeg.exe in C:\Windows\System32\
3. Create output folders
batmkdir "%USERPROFILE%\Desktop\YTAudio"
mkdir "%USERPROFILE%\Desktop\YTAudio\Covers"
4. Clone and build
batgit clone https://github.com/raid118/flacboi-for-windows.git
cd flacboi-for-windows
g++ -std=c++20 main.cpp -o flacboi

Usage
batflacboi
Then enter a song name, YouTube URL, or playlist URL. Type quit to exit.

Output
Desktop/
└── YTAudio/
    ├── Song Name.flac
    └── Covers/
        └── Song Name.jpg

Tips

For square thumbnails, use a YouTube Music link instead of a regular YouTube link
To move Spotify playlists to YouTube, try TuneMyMusic


Requirements

C++20 compiler
yt-dlp.exe in C:\Windows\System32\
ffmpeg.exe in C:\Windows\System32\


Audio Note
FLAC is lossless — but playback quality still depends on your output device.
For best results, use wired headphones or a high-quality Bluetooth codec.

Credits
yt-dlp • ffmpeg • Made by raid118
