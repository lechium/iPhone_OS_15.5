//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVStreamDataAssetInspector
{
    NSArray *_trackIDs;	// 8 = 0x8
}

- (id)trackIDs;	// IMP=0x00000000000f04e7
- (long long)trackCount;	// IMP=0x00000000000f04ca
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x00000000000f04c2
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000f04a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f049c
- (void)dealloc;	// IMP=0x00000000000f045a
- (id)initWithTrackIDs:(id)arg1;	// IMP=0x00000000000f03fc

@end
