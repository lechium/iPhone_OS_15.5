//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUStatusBarVisibilityHandling-Protocol.h>

@class NSString;

@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>
{
}

- (id)_statusBarAnimationParametersForAnimationSettings:(id)arg1;	// IMP=0x000000000029c1be
- (void)setStatusBarHidden:(_Bool)arg1 withAnimationSettings:(id)arg2;	// IMP=0x000000000029c0fe
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
