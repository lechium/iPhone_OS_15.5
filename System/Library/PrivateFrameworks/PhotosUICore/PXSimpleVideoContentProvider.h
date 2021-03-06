//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider
{
    PXVideoContentProviderLoadingResult *_loadingResult;	// 8 = 0x8
    NSString *_contentIdentifier;	// 16 = 0x10
    double _loadingProgress;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004727e9
- (void)setLoadingProgress:(double)arg1;	// IMP=0x00000000004727d7
- (double)loadingProgress;	// IMP=0x00000000004727c5
- (id)contentIdentifier;	// IMP=0x00000000004727b4
- (void)setLoadingResult:(id)arg1;	// IMP=0x00000000004727a0
- (id)loadingResult;	// IMP=0x000000000047278f
- (id)description;	// IMP=0x00000000004726e0
- (void)beginLoadingWithPriority:(long long)arg1;	// IMP=0x00000000004726da
- (id)initWithPlayerItem:(id)arg1 contentIdentifier:(id)arg2;	// IMP=0x00000000004725af
- (id)init;	// IMP=0x0000000000472535

@end

