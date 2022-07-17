//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe>
{
    _Bool _activated;	// 8 = 0x8
    NSString *_leftTestBundleID;	// 16 = 0x10
    NSString *_rightTestBundleID;	// 24 = 0x18
    FBApplicationUpdateScenesTransaction *_currentTransaction;	// 32 = 0x20
}

+ (void)load;	// IMP=0x0000000000349c08
- (void).cxx_destruct;	// IMP=0x000000000034a1c3
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (void)_updateAppsToBringUpFromPreferences;	// IMP=0x000000000034a097
- (void)_toggle;	// IMP=0x0000000000349c55
- (void)handleVolumeDecrease;	// IMP=0x0000000000349c43
- (void)handleVolumeIncrease;	// IMP=0x0000000000349c31
- (id)title;	// IMP=0x0000000000349c24
- (id)init;	// IMP=0x0000000000349b71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
