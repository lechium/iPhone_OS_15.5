//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitServices/UISApplicationSupportDisplayEdgeInfo.h>

@interface UISApplicationSupportDisplayEdgeInfo (SpringBoard)
+ (id)sb_displayEdgeInfoForApplication:(id)arg1;	// IMP=0x00000000005dee1e
+ (id)sb_floatingApplicationDisplayEdgeInfo;	// IMP=0x00000000005debf4
+ (id)sb_insetForHomeAffordanceApplicationDisplayEdgeInfo;	// IMP=0x00000000005debe2
+ (id)sb_thisDeviceDisplayEdgeInfo;	// IMP=0x00000000005deb3b
+ (id)sb_legacy_homeButtonDeviceDisplayEdgeInfo;	// IMP=0x00000000005df3f5
+ (id)sb_legacy_roundCornerPadDisplayEdgeInfo;	// IMP=0x00000000005df2f3
- (struct UIEdgeInsets)sb_orientedEdgeInsetsForInterfaceOrientation:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x00000000005df106
- (void)sb_applyDisplayEdgeInfoToSceneSettings:(id)arg1;	// IMP=0x00000000005defed
- (id)sb_displayEdgeInfoWithSafeAreaInsetsForStatusBarHeight:(double)arg1;	// IMP=0x00000000005deebc
@end

