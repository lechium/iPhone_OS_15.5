//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (EffectiveInterface)
+ (void)dc_enableUIViewAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e70d
- (void)dc_getEffectiveInterfaceOrientation:(long long *)arg1 andEffectiveInterfaceIdiom:(long long *)arg2;	// IMP=0x0000000000036316
- (long long)dc_effectiveInterfaceOrientation;	// IMP=0x000000000003622f
- (id)dc_safeAreaLayoutGuide;	// IMP=0x000000000004ea75
- (double)dc_safeAreaDistanceFromBottom;	// IMP=0x000000000004e97e
- (double)dc_safeAreaDistanceFromTop;	// IMP=0x000000000004e907
- (_Bool)dc_isViewVisible;	// IMP=0x000000000004e887
- (void)dc_showViewController:(id)arg1 animated:(_Bool)arg2 sender:(id)arg3;	// IMP=0x000000000004e792
@property(readonly, nonatomic) _Bool dc_isRTL;
@end
