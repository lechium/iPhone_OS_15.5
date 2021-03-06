//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TSKAVQueuePlayerController
{
    NSArray *mAssets;	// 8 = 0x8
}

- (void)p_enqueueAssetsFromIndex:(unsigned long long)arg1;	// IMP=0x00000000000ab74d
- (void)skipToAssetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ab6f4
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;	// IMP=0x00000000000ab5e1
- (void)dealloc;	// IMP=0x00000000000ab59f
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 initialAssetIndex:(unsigned long long)arg4;	// IMP=0x00000000000ab509
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3;	// IMP=0x00000000000ab4f4

@end

