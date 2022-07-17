//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVExternalDevice, CARNavigationOwnershipManager, MapsExternalAccessory, MapsExternalDeviceState, NSMapTable, NSString, UIScreen;

__attribute__((visibility("hidden")))
@interface MapsExternalDevice : NSObject
{
    struct __IOHIDEventSystemClient *_client;	// 8 = 0x8
    _Bool _carPlayIsNavigating;	// 16 = 0x10
    _Bool _monitoringIOHID;	// 17 = 0x11
    UIScreen *_carplayScreen;	// 24 = 0x18
    AVExternalDevice *_externalDevice;	// 32 = 0x20
    MapsExternalDeviceState *_currentState;	// 40 = 0x28
    MapsExternalDeviceState *_lastState;	// 48 = 0x30
    id _screenBorrowToken;	// 56 = 0x38
    MapsExternalAccessory *_externalAccessory;	// 64 = 0x40
    NSMapTable *_navigationAccessories;	// 72 = 0x48
    CARNavigationOwnershipManager *_navigationOwnershipManager;	// 80 = 0x50
}

+ (id)_stringRepresentationOfDictionary:(id)arg1;	// IMP=0x00200000003ec4cc
+ (id)_localizedReasonForHandoffError:(long long)arg1;	// IMP=0x00100000003ec39a
+ (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00100000003ec374
+ (id)_destinationHandoffErrorWithReason:(long long)arg1;	// IMP=0x00100000003ec206
+ (void)_presentActivityControllerForDestination:(id)arg1 searchResult:(id)arg2 dictionary:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003eba11
+ (void)_presentActivityControllerForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003eb750
+ (id)sharedInstance;	// IMP=0x00100000003e93fd
+ (void)initialize;	// IMP=0x00100000003e9399
- (void).cxx_destruct;	// IMP=0x00200000003ecca0
@property(retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager; // @synthesize navigationOwnershipManager=_navigationOwnershipManager;
@property(retain) NSMapTable *navigationAccessories; // @synthesize navigationAccessories=_navigationAccessories;
@property _Bool monitoringIOHID; // @synthesize monitoringIOHID=_monitoringIOHID;
@property(retain) MapsExternalAccessory *externalAccessory; // @synthesize externalAccessory=_externalAccessory;
@property(retain) id screenBorrowToken; // @synthesize screenBorrowToken=_screenBorrowToken;
@property(retain) MapsExternalDeviceState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) MapsExternalDeviceState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(nonatomic) _Bool carPlayIsNavigating; // @synthesize carPlayIsNavigating=_carPlayIsNavigating;
@property(retain, nonatomic) UIScreen *carplayScreen; // @synthesize carplayScreen=_carplayScreen;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000003ecb0f
- (void)forwardInvocation:(id)arg1;	// IMP=0x00100000003eca14
- (void)setRouteGuidanceBeingShownInApp:(_Bool)arg1;	// IMP=0x00100000003eca0e
- (void)stopMonitoringIOHIDRepeatCurrentGuidance;	// IMP=0x00100000003ec9a5
- (void)startMonitoringIOHIDRepeatCurrentGuidance;	// IMP=0x00100000003ec844
- (void)_handleIOHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000003ec6ab
- (void)handoffDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ea9de
- (_Bool)_destinationHandoffTestingEnabled;	// IMP=0x00100000003ea94f
- (_Bool)destinationHandoffEnabled;	// IMP=0x00100000003ea883
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;	// IMP=0x00100000003ea6f8
@property(readonly, nonatomic) _Bool externalAccessoryIsNavigating;
- (void)_postNotificationsIfNeeded;	// IMP=0x00100000003ea330
- (_Bool)_isCurrentStateEqualLastState;	// IMP=0x00100000003ea206
- (void)_updateExternalDevice:(id)arg1;	// IMP=0x00100000003e9fba
- (void)_connectAVDevice;	// IMP=0x00100000003e9ccd
- (void)_disconnectAVDevice;	// IMP=0x00100000003e9a36
- (void)relinquishScreenIfNeeded;	// IMP=0x00100000003e98fb
- (void)borrowScreenIfNeededForReason:(id)arg1;	// IMP=0x00100000003e97fa
- (void)_screenDidDisconnect:(id)arg1;	// IMP=0x00100000003e9746
- (void)_screenDidConnect:(id)arg1;	// IMP=0x00100000003e96a5
- (void)dealloc;	// IMP=0x00100000003e9630
- (id)init;	// IMP=0x00100000003e9452

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
