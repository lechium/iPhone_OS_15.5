//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSString, SBSLockScreenRemoteContentAssertion;

@interface SBLockScreenContentAssertionTestRecipe : NSObject <SBTestRecipe>
{
    SBSLockScreenRemoteContentAssertion *_currentAssertion;	// 8 = 0x8
}

+ (void)load;	// IMP=0x0000000000687fea
- (void).cxx_destruct;	// IMP=0x00000000006880f1
- (void)handleVolumeDecrease;	// IMP=0x00000000006880bf
- (void)handleVolumeIncrease;	// IMP=0x0000000000688013
- (id)title;	// IMP=0x0000000000688006

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

