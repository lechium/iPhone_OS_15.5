//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKPassHealthPassFaceView
{
    unsigned long long _requestedRegions;	// 8 = 0x8
    unsigned long long _effectiveRegions;	// 16 = 0x10
}

- (void)didAuthenticate;	// IMP=0x000000000038b361
- (void)setVisibleRegions:(unsigned long long)arg1;	// IMP=0x000000000038b2dd
- (unsigned long long)visibleRegions;	// IMP=0x000000000038b2cc
- (id)templateForHeaderBucket;	// IMP=0x000000000038b1b6
- (id)templateForLayoutMode:(long long)arg1;	// IMP=0x000000000038ab59
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000038aaed

@end
