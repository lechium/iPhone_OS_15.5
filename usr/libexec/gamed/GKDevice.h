//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKEventEmitter, NSString;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject
{
    NSString *_udid;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_osVersion;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_gameKitVersion;	// 40 = 0x28
    _Bool _gameKitAvailable;	// 48 = 0x30
    GKEventEmitter<GKLockStatusObserver> *_emitter;	// 56 = 0x38
}

+ (id)currentDevice;	// IMP=0x004000000009cab7
- (void).cxx_destruct;	// IMP=0x001000000009d61a
@property(retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic, getter=isGameKitAvailable) _Bool gameKitAvailable; // @synthesize gameKitAvailable=_gameKitAvailable;
@property(readonly, nonatomic) NSString *gameKitVersion; // @synthesize gameKitVersion=_gameKitVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)removeLockStatusObserver:(id)arg1;	// IMP=0x001000000009d5a7
- (void)addLockStatusObserver:(id)arg1;	// IMP=0x001000000009d591
- (void)stopObservingKeyBagStatus;	// IMP=0x001000000009d58b
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x001000000009d585
- (id)platformBuildVersion;	// IMP=0x001000000009d496
- (id)buildVersionHeader;	// IMP=0x001000000009d395
- (id)protocolVersionHeader;	// IMP=0x001000000009d336
- (id)storeUserAgent;	// IMP=0x001000000009d17c
- (id)processNameHeader;	// IMP=0x001000000009d0ae
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;	// IMP=0x001000000009ce4b
- (id)userAgent;	// IMP=0x001000000009ce35
- (void)dealloc;	// IMP=0x001000000009cdf7
@property(readonly, nonatomic) NSString *udid;
- (id)init;	// IMP=0x001000000009cb48
- (_Bool)isProductType:(unsigned int)arg1;	// IMP=0x00100000000fee3f
- (_Bool)isFocusDevice;	// IMP=0x00100000000fee12
- (_Bool);	// IMP=0x00100000000feda6
- (id)_platformUDID;	// IMP=0x00100000000fed08
- (void)_initPlatform;	// IMP=0x00100000000fe9bb

@end
