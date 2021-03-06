//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/_UIKeyboardArbiterLink-Protocol.h>

@class FBSScene, FBSSceneClientSettings, NSString, _UIKeyboardArbiter;
@protocol OS_dispatch_queue;

@interface _UIKeyboardArbiter_ForSpringBoard : NSObject <_UIKeyboardArbiterLink>
{
    FBSScene *_scene;	// 8 = 0x8
    FBSSceneClientSettings *_clientSettings;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _UIKeyboardArbiter *owner;	// 32 = 0x20
}

+ (id)launchAdvisorWithOmniscientDelegate:(id)arg1;	// IMP=0x00000000000131ba
+ (void)launch;	// IMP=0x000000000001319d
- (void).cxx_destruct;	// IMP=0x0000000000013ea8
@property(nonatomic) __weak _UIKeyboardArbiter *owner; // @synthesize owner;
- (id)_createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2;	// IMP=0x000000000001373f
- (void)detach:(id)arg1;	// IMP=0x00000000000136a1
- (void)attach:(id)arg1;	// IMP=0x0000000000013603
- (void)updateSceneSettings;	// IMP=0x0000000000013505
- (void)createSceneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000133de
- (void)connectWithQueue:(id)arg1;	// IMP=0x00000000000133cd
@property(readonly, nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000012fd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

