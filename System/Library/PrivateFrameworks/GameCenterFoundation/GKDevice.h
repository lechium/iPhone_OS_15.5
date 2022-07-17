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

+ (id)currentDevice;	// IMP=0x0000000000014b71
- (void).cxx_destruct;	// IMP=0x00000000000156c8
@property(retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic, getter=isGameKitAvailable) _Bool gameKitAvailable; // @synthesize gameKitAvailable=_gameKitAvailable;
@property(readonly, nonatomic) NSString *gameKitVersion; // @synthesize gameKitVersion=_gameKitVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)removeLockStatusObserver:(id)arg1;	// IMP=0x0000000000015655
- (void)addLockStatusObserver:(id)arg1;	// IMP=0x000000000001563f
- (void)stopObservingKeyBagStatus;	// IMP=0x0000000000015639
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000015633
- (id)platformBuildVersion;	// IMP=0x0000000000015544
- (id)buildVersionHeader;	// IMP=0x0000000000015443
- (id)protocolVersionHeader;	// IMP=0x00000000000153e4
- (id)storeUserAgent;	// IMP=0x000000000001522a
- (id)processNameHeader;	// IMP=0x000000000001515c
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;	// IMP=0x0000000000014ef9
- (id)userAgent;	// IMP=0x0000000000014ee3
- (void)dealloc;	// IMP=0x0000000000014ea5
@property(readonly, nonatomic) NSString *udid;
- (id)init;	// IMP=0x0000000000014bf6
- (_Bool)isProductType:(unsigned int)arg1;	// IMP=0x00000000000daa4d
- (_Bool)isFocusDevice;	// IMP=0x00000000000daa20
- (_Bool)isDevelopmentDevice;	// IMP=0x00000000000da9b4
- (id)_platformUDID;	// IMP=0x00000000000da916
- (void)_initPlatform;	// IMP=0x00000000000da5c9

@end
