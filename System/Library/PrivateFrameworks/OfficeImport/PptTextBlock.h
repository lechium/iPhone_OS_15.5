//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface PptTextBlock : NSObject
{
    struct PptTextHeaderAtom *mTextHeader;	// 8 = 0x8
    NSMutableString *mText;	// 16 = 0x10
    void *mStyleText;	// 24 = 0x18
    void *mSpecialInfo;	// 32 = 0x20
    NSMutableArray *mMetaCharacterFields;	// 40 = 0x28
    NSMutableArray *mBookmarks;	// 48 = 0x30
    NSMutableArray *mHyperlinks;	// 56 = 0x38
    void *mTextRuler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000442078
- (void *)specialInfoRunAtIndex:(int)arg1;	// IMP=0x000000000044204c
- (int)specialInfoRunCount;	// IMP=0x000000000044202d
- (struct PptCharRun *)characterRunAtIndex:(int)arg1;	// IMP=0x000000000002eb06
- (int)characterRunCount;	// IMP=0x000000000002bfeb
- (void *)paragraphRunAtIndex:(int)arg1;	// IMP=0x000000000002bfb4
- (int)paragraphRunCount;	// IMP=0x000000000002bf95
- (void *)textRuler;	// IMP=0x000000000002b9af
- (id)bookmarks;	// IMP=0x000000000044201d
- (id)hyperlinks;	// IMP=0x000000000002c00b
- (id)metaCharacterFields;	// IMP=0x000000000002c019
- (id)text;	// IMP=0x000000000002b9c7
- (unsigned int)textIndex;	// IMP=0x000000000044200b
- (int)textType;	// IMP=0x000000000002b9ba
- (void)writeTextBlock:(id)arg1;	// IMP=0x0000000000442004
- (void)readTextBlock:(id)arg1;	// IMP=0x000000000002af49
- (id)init;	// IMP=0x000000000002ae62
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;	// IMP=0x000000000002b529
- (void)readSpecialInfo:(id)arg1;	// IMP=0x00000000004420b7
- (void)readStyles:(id)arg1;	// IMP=0x000000000002b414
- (void)readString:(id)arg1;	// IMP=0x000000000002b14a

@end
