//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, UserProfileLink, VGVirtualGarage, VGVirtualGarageService;

__attribute__((visibility("hidden")))
@interface UserProfileLinkGarageProvider : NSObject
{
    UserProfileLink *_newLink;	// 8 = 0x8
    VGVirtualGarageService *_garageService;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
    _Bool _hasUnpairedVehicles;	// 32 = 0x20
    VGVirtualGarage *_virtualGarage;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0020000000160593
- (void).cxx_destruct;	// IMP=0x002000000016122c
@property(nonatomic) _Bool hasUnpairedVehicles; // @synthesize hasUnpairedVehicles=_hasUnpairedVehicles;
@property(retain, nonatomic) VGVirtualGarage *virtualGarage; // @synthesize virtualGarage=_virtualGarage;
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;	// IMP=0x0010000000161113
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x0010000000160fe0
- (void)_updateLinkAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000160f21
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_loadUnpairedVehicles;	// IMP=0x0010000000160c33
- (void)_loadGarage;	// IMP=0x00100000001609a8
- (id)retrieveSubtitleText;	// IMP=0x0010000000160890
@property(readonly, nonatomic) long long userProfileLinkType;
- (id)createUserProfileLink;	// IMP=0x0010000000160674
- (id)init;	// IMP=0x00100000001605e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

