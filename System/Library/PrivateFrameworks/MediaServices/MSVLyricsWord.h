//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSVLyricsLine;

@interface MSVLyricsWord
{
    MSVLyricsLine *_parentLine;	// 72 = 0x48
    MSVLyricsWord *_nextWord;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000d2ba
@property(retain, nonatomic) MSVLyricsWord *nextWord; // @synthesize nextWord=_nextWord;
@property(retain, nonatomic) MSVLyricsLine *parentLine; // @synthesize parentLine=_parentLine;
- (id)init;	// IMP=0x000000000000d21f

@end

