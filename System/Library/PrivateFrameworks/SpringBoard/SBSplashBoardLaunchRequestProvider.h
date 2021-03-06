//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/XBApplicationLaunchRequestProviding-Protocol.h>

@class FBSDisplayConfiguration, NSString, SBApplicationController;

@interface SBSplashBoardLaunchRequestProvider : NSObject <XBApplicationLaunchRequestProviding>
{
    SBApplicationController *_applicationController;	// 8 = 0x8
    FBSDisplayConfiguration *_displayConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000271114
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 defaultLaunchRequests:(id)arg3;	// IMP=0x0000000000270b17
- (id)initWithApplicationController:(id)arg1 displayConfiguration:(id)arg2;	// IMP=0x0000000000270a7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

