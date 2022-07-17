//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSession, CARSessionStatus, NSString, VGVirtualGarage;

__attribute__((visibility("hidden")))
@interface AutomaticVehicleSelectionTask : NSObject
{
    _Bool _isNavigating;	// 8 = 0x8
    VGVirtualGarage *_garage;	// 16 = 0x10
    CARSessionStatus *_carSessionStatus;	// 24 = 0x18
}

+ (long long)creationPreference;	// IMP=0x002000000041a3bd
- (void).cxx_destruct;	// IMP=0x002000000041afe6
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x001000000041afd4
- (void)_didUpdateCarPlayConnection;	// IMP=0x001000000041aaa3
- (id)_vehicleForCurrentSession;	// IMP=0x001000000041a7dd
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000041a67e
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000041a51f
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000041a4d0
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000041a4ca
- (void)_updateSelectedVehicleWithGarage:(id)arg1;	// IMP=0x001000000041a3c8
@property(readonly, nonatomic) CARSession *currentSession;
- (id)initWithPlatformController:(id)arg1;	// IMP=0x001000000041a0ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
