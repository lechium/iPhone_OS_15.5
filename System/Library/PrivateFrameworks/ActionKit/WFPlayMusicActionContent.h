//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItemCollection, MPPlaybackArchive, NSArray;

@interface WFPlayMusicActionContent : NSObject
{
    NSArray *_storeIDs;	// 8 = 0x8
    MPMediaItemCollection *_mediaCollection;	// 16 = 0x10
    MPPlaybackArchive *_playbackArchive;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022a18c
@property(retain, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(retain, nonatomic) MPMediaItemCollection *mediaCollection; // @synthesize mediaCollection=_mediaCollection;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000022a135
- (id)initWithPlaybackArchive:(id)arg1;	// IMP=0x000000000022a0b7
- (id)initWithMediaCollection:(id)arg1;	// IMP=0x000000000022a039
- (id)initWithStoreIDs:(id)arg1;	// IMP=0x0000000000229faf

@end
