//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSString;

@interface SBWidgetDebuggingTestRecipe : NSObject <SBTestRecipe>
{
}

+ (id)__systemService;	// IMP=0x000000000026545c
- (void)handleVolumeDecrease;	// IMP=0x00000000002656e0
- (void)handleVolumeIncrease;	// IMP=0x00000000002656ce
- (void)_openNotificationCenter;	// IMP=0x00000000002654b1
- (id)title;	// IMP=0x000000000026544f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

