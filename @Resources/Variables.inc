[Variables]
Size=640
; The size of the album art in pixels. All of the size options below are relative to this one.

Padding=10
; The padding for the text from the edge of the album art in a percentage relative to the Size option.
GapSize=2.5
; The space between the Title and Artist text in a percentage relative to the Size option.

VerticalAlignment=Bottom
HorizontalAlignment=Center
; The vertical and horizontal alignment for the text. Valid values are:
; "Top", "Center" and "Bottom" for the vertical alignment, and
; "Left", "Center" and "Right" for the horizontal alignment.

TitleText=Adventures From Outer Space
; The text of the Title.
; TIP: Use "#CLRF#" for a line break.
TitleFont=Arial
; The font of the Title.
TitleSize=5
; The size of the Title in a percentage relative to the Size option.
TitleWeight=700
; The weight of the Title. Valid values are: 
; 100 - Thin, 200 - Extra Light, 300 - Light, 400 - Regular, 500 - Medium
; 600 - Semi Bold, 700 - Bold, 800 - Extra Bold, 900 - Black, 950 - Extra Black
TitleColor=FFFFFF
; The color of the Title.

ArtistText=SPACE INVADERS
; The text of the Artist.
; TIP: Use "#CLRF#" for a line break.
ArtistFont=Arial
; The font of the Artist.
ArtistSize=2.5
; The size of the Artist in a percentage relative to the Size option.
ArtistWeight=400
; The weight of the Artist. Valid values are: 
; 100 - Thin, 200 - Extra Light, 300 - Light, 400 - Regular, 500 - Medium
; 600 - Semi Bold, 700 - Bold, 800 - Extra Bold, 900 - Black, 950 - Extra Black
ArtistColor=FFFFFF
; The color of the Artist.

SwapTitleArtist=False
; This option switches the positions of the Title and Artist.
; Valid values are "True" and "False".

ShowMargins=False
; This option will show you the margins of the album art and text.
; Valid values are "True" and "False".

; The sections below ([TitleCustomOptions] and [ArtistCustomOptions]) are
; meant for adding additonal custom options to the Title and Artist text.
; Refer to the Rainmeter manual to see what you can do.
; I suggest https://docs.rainmeter.net/manual/meters/string/ and https://docs.rainmeter.net/manual/meters/string/inline/
; When using size related options, I really do recommend using a value relative to the Size option. For example, not "10", but "(#Size#*0.01)".
[TitleCustomOptions]

[ArtistCustomOptions]
InlineSetting=CharacterSpacing | 0 | (#Size#*0.01)
