//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BRCTermDumper
{
    struct __sFILE *_file;	// 8 = 0x8
    unsigned long long _termWidth;	// 16 = 0x10
    unsigned long long _usedTermWidth;	// 24 = 0x18
    int _curAttrs;	// 32 = 0x20
    int _curFg;	// 36 = 0x24
    int _curBg;	// 40 = 0x28
    _Bool _isatty;	// 44 = 0x2c
    _Bool _useColor;	// 45 = 0x2d
    _Bool _supportsEscapeSequences;	// 46 = 0x2e
}

+ (void)execPagerOnFileFd:(int)arg1;	// IMP=0x00000000002823eb
+ (void)setupPagerForFd:(int)arg1;	// IMP=0x000000000028238a
@property(readonly, nonatomic) _Bool supportsEscapeSequences; // @synthesize supportsEscapeSequences=_supportsEscapeSequences;
@property(readonly, nonatomic) _Bool useColor; // @synthesize useColor=_useColor;
@property(readonly, nonatomic) _Bool isatty; // @synthesize isatty=_isatty;
- (void)write:(const char *)arg1;	// IMP=0x0000000000282ae1
- (void)put:(id)arg1;	// IMP=0x0000000000282aa5
- (void)puts:(const char *)arg1;	// IMP=0x0000000000282a76
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;	// IMP=0x0000000000282a37
- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;	// IMP=0x00000000002829f0
- (void)forgetRemainingSpace;	// IMP=0x00000000002829db
- (unsigned long long)remainingSpace;	// IMP=0x000000000028298a
- (void)endLine;	// IMP=0x0000000000282941
- (void)startNewLine;	// IMP=0x00000000002828d4
- (void)cursorGotoLineStart;	// IMP=0x00000000002828a9
- (void)cursorLeft:(unsigned int)arg1;	// IMP=0x0000000000282877
- (void)cursorRight:(unsigned int)arg1;	// IMP=0x0000000000282845
- (void)cursorDown:(unsigned int)arg1;	// IMP=0x0000000000282813
- (void)cursorUp:(unsigned int)arg1;	// IMP=0x00000000002827e1
- (void)cursorRestore;	// IMP=0x00000000002827b6
- (void)cursorSave;	// IMP=0x000000000028278b
- (void)eraseScreenUp;	// IMP=0x0000000000282760
- (void)eraseScreenDown;	// IMP=0x0000000000282735
- (void)eraseLine;	// IMP=0x000000000028270a
- (void)eraseStartOfLine;	// IMP=0x00000000002826df
- (void)eraseEndOfLine;	// IMP=0x00000000002826b4
- (void)reset;	// IMP=0x0000000000282695
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;	// IMP=0x000000000028260c
- (id)stringForReset;	// IMP=0x00000000002825ed
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;	// IMP=0x000000000028255a
- (unsigned long long)_startInCString:(char [256])arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;	// IMP=0x0000000000282450
- (void)startPager;	// IMP=0x000000000028244a
- (id)initWithFd:(int)arg1 forceColor:(_Bool)arg2;	// IMP=0x0000000000282267

@end
