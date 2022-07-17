//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAAccessory, MISSING_TYPE, MapsExternalAccessoryState;

__attribute__((visibility("hidden")))
@interface MapsExternalAccessory : NSObject
{
    EAAccessory *_accessory;	// 8 = 0x8
    MapsExternalAccessoryState *_currentState;	// 16 = 0x10
    MISSING_TYPE *_lastState;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x004000000061aa47
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000061a9d5
+ (id)sharedInstance;	// IMP=0x001000000061957e
- (void).cxx_destruct;	// IMP=0x002000000061b14b
@property(retain, nonatomic) MapsExternalAccessoryState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) MapsExternalAccessoryState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_disconnectFromVehicle;	// IMP=0x001000000061b05e
- (void)_postNotificationsIfNeeded;	// IMP=0x001000000061ae49
- (_Bool)_isCurrentStateEqualLastState;	// IMP=0x001000000061ad1f
- (void)_updateFromNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000061aa7a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000061a9ae
- (void)forwardInvocation:(id)arg1;	// IMP=0x001000000061a8ef
@property(readonly, nonatomic) int primaryEngineType;
@property(readonly, nonatomic) _Bool isHybridEngineType;
@property(readonly, nonatomic) _Bool needsFuel;
@property(readonly, nonatomic) _Bool hasEngineType;
- (id)identifier;	// IMP=0x001000000061a558
- (void)_accessoryDidDisconnect:(id)arg1;	// IMP=0x001000000061a546
- (void)_accessoryDidUpdate:(id)arg1;	// IMP=0x001000000061a4b1
- (void)_accessoryDidUpdateVehicle:(id)arg1;	// IMP=0x001000000061a41c
- (void)_accessoryDidConnect:(id)arg1;	// IMP=0x001000000061a387
- (void)_handleFake:(id)arg1;	// IMP=0x0010000000619f94
- (void)_stopListenForDebugTestNotifications;	// IMP=0x0010000000619e61
- (void)_startListenForDebugTestNotifications;	// IMP=0x00100000006199a9
- (void)sendDestinationInformation:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000619923
- (void)dealloc;	// IMP=0x001000000061986a
- (id)init;	// IMP=0x00100000006195d3

@end
