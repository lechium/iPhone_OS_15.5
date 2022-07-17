//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBFullscreenZoomView
{
    _Bool _hasImage;	// 24 = 0x18
    id _surface;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003addb
- (void)_addBlackBackground;	// IMP=0x000000000016e54a
@property(readonly, nonatomic) __weak id surface;
- (id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3;	// IMP=0x000000000016e3a7
- (id)initWithContainingBounds:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2 statusBarFrame:(struct CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(_Bool)arg7 allowStatusBarToOverlap:(_Bool)arg8 useLargerCornerRadii:(_Bool)arg9 preventSplit:(_Bool)arg10 needsZoomFilter:(_Bool)arg11 asyncDecodeImage:(_Bool)arg12 forJail:(_Bool)arg13 hasOrientationMismatchForClassicApp:(_Bool)arg14;	// IMP=0x000000000016d901
- (id)_initWithView:(id)arg1 displayConfiguration:(id)arg2;	// IMP=0x000000000016d814
- (id)_initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002b16b

@end
