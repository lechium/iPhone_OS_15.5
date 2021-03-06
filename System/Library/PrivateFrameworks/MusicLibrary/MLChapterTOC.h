//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLChapterTOC : NSObject
{
}

- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x000000000017eae1
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x000000000017ead9
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x000000000017ead1
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x000000000017eac9
- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)arg1;	// IMP=0x000000000017ea40
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x000000000017ea38
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x000000000017ea30
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x000000000017ea28
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x000000000017ea20
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x000000000017ea18
- (unsigned int)countOfGroupsForProperty:(int)arg1;	// IMP=0x000000000017ea10
- (_Bool)hasDataForProperty:(int)arg1;	// IMP=0x000000000017e9f8
- (unsigned int)countOfChapters;	// IMP=0x000000000017e9f0
- (struct ChapterData *)chapterDataRef;	// IMP=0x00000000000eecd8

@end

