//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerChangeItemCommand-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerChangeItemCommand <MPCPlayerChangeItemCommand>
{
    unsigned long long _changeItemSupport;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long changeItemSupport; // @synthesize changeItemSupport=_changeItemSupport;
- (id)changeToItem:(id)arg1;	// IMP=0x0000000000101e61
- (id)changeToSection:(id)arg1;	// IMP=0x0000000000101e59
- (id)nextChapter;	// IMP=0x0000000000101d68
- (id)nextSection;	// IMP=0x0000000000101c77
- (id)nextItem;	// IMP=0x0000000000101ac5
- (id)previousChapter;	// IMP=0x00000000001019d4
- (id)previousSection;	// IMP=0x00000000001018e3
- (id)previousItemDeferringToPlaybackQueuePosition;	// IMP=0x0000000000101779
- (id)previousItem;	// IMP=0x00000000001015c7
- (id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2;	// IMP=0x0000000000101583

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

