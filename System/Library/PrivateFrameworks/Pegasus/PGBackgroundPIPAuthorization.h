//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/PGBackgroundPIPServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;

@interface PGBackgroundPIPAuthorization : NSObject <PGBackgroundPIPServerToClientInterface>
{
    BSServiceConnection *_connection;	// 8 = 0x8
    long long _lock_state;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSString *_activitySessionIdentifier;	// 32 = 0x20
    NSString *_appBundleIdentifier;	// 40 = 0x28
    CDUnknownBlockType _stateTransitionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000010384
@property(readonly, copy) CDUnknownBlockType stateTransitionHandler; // @synthesize stateTransitionHandler=_stateTransitionHandler;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySessionIdentifier; // @synthesize activitySessionIdentifier=_activitySessionIdentifier;
- (void)dealloc;	// IMP=0x00000000000102a8
@property(readonly, copy) NSString *description;
- (void)revoke;	// IMP=0x0000000000010103
- (void)_transitionToState:(long long)arg1;	// IMP=0x0000000000010028
- (oneway void)transitionToState:(id)arg1;	// IMP=0x000000000000febe
@property(readonly, nonatomic) long long state;
- (id)initWithActivitySessionIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 stateTransitionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f4e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
