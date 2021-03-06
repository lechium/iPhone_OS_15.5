//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpointInjector, NSMutableArray, NSString;
@protocol BSServiceConnectionHost, SASSignalServerDelegate;

@interface SASSignalServer : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;	// 16 = 0x10
    BSServiceConnection<BSServiceConnectionHost> *_connection;	// 24 = 0x18
    NSMutableArray *_waitForConnectBlocks;	// 32 = 0x20
    id <SASSignalServerDelegate> _weak_delegate;	// 40 = 0x28
    NSString *_assertionClientIdentifier;	// 48 = 0x30
}

+ (id)serviceQuality;	// IMP=0x0000000000035ae7
+ (id)interface;	// IMP=0x0000000000035a4b
+ (void)_unregisterConnection:(id)arg1;	// IMP=0x00000000000357e2
+ (id)serverForConnection:(id)arg1;	// IMP=0x0000000000034ff9
- (void).cxx_destruct;	// IMP=0x0000000000037f3d
@property(nonatomic) NSString *assertionClientIdentifier; // @synthesize assertionClientIdentifier=_assertionClientIdentifier;
@property(nonatomic) __weak id <SASSignalServerDelegate> weak_delegate; // @synthesize weak_delegate=_weak_delegate;
@property(retain, nonatomic) NSMutableArray *waitForConnectBlocks; // @synthesize waitForConnectBlocks=_waitForConnectBlocks;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector; // @synthesize workspaceServiceInjector=_workspaceServiceInjector;
- (oneway void)unregisterButtonEventListenerWithIdentifier:(id)arg1;	// IMP=0x0000000000037d80
- (oneway void)registerButtonEventListenerWithIdentifier:(id)arg1;	// IMP=0x0000000000037c57
- (oneway void)unregisterAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000000037b22
- (oneway void)registerAssertionWithIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000379c2
- (oneway void)buttonLongPressFromButtonIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x0000000000037890
- (oneway void)buttonTapFromButtonIdentifier:(id)arg1;	// IMP=0x0000000000037786
- (oneway void)buttonUpFromButtonIdentifier:(id)arg1 deviceIdentifier:(id)arg2 timestamp:(id)arg3 context:(id)arg4;	// IMP=0x00000000000374ae
- (oneway void)buttonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3;	// IMP=0x00000000000371e8
- (oneway void)cancelPrewarmFromButtonIdentifier:(id)arg1;	// IMP=0x00000000000370de
- (oneway void)prewarmFromButtonIdentifier:(id)arg1 longPressInterval:(id)arg2;	// IMP=0x0000000000036f9c
- (oneway void)prewarmFromButtonIdentifier:(id)arg1;	// IMP=0x0000000000036e8f
- (oneway void)activationRequestFromTestingWithContext:(id)arg1;	// IMP=0x0000000000036d92
- (oneway void)activationRequestFromSpotlightWithContext:(id)arg1;	// IMP=0x0000000000036c95
- (oneway void)activationRequestFromSimpleActivation:(id)arg1;	// IMP=0x0000000000036ba9
- (oneway void)activationRequestFromBluetoothKeyboardActivation:(id)arg1;	// IMP=0x0000000000036abd
- (oneway void)activationRequestFromBreadcrumb;	// IMP=0x00000000000369e8
- (oneway void)activationRequestFromRemotePresentationBringUpWithContext:(id)arg1;	// IMP=0x00000000000368eb
- (oneway void)activationRequestFromContinuityWithContext:(id)arg1;	// IMP=0x00000000000367ee
- (void)_activationRequestFromDirectActionEventWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000364d4
- (oneway void)activationRequestFromDirectActionEventWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000364c2
- (oneway void)activationRequestFromDirectActionEventWithContext:(id)arg1;	// IMP=0x00000000000364ae
- (oneway void)deactivationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2 options:(id)arg3;	// IMP=0x0000000000036376
- (oneway void)activationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036244
- (oneway void)unregisterNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;	// IMP=0x00000000000360b9
- (oneway void)registerNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;	// IMP=0x0000000000035f2e
- (oneway void)unregisterButtonIdentifier:(id)arg1 withUUID:(id)arg2;	// IMP=0x0000000000035d90
- (oneway void)registerButtonIdentifier:(id)arg1 withUUID:(id)arg2;	// IMP=0x0000000000035bf2
- (void)_unregisterSourceForIdentifier:(id)arg1;	// IMP=0x0000000000035b7c
- (void)_registerSourceForIdentifier:(id)arg1;	// IMP=0x0000000000035b00
- (void)_setConnection:(id)arg1;	// IMP=0x0000000000035271

@end

