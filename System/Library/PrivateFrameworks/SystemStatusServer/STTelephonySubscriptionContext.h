//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/BSDebugDescriptionProviding-Protocol.h>

@class NSArray, NSString, STMutableTelephonyCarrierBundleInfo, STMutableTelephonyMobileEquipmentInfo, STMutableTelephonySubscriptionInfo;

@interface STTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding>
{
    _Bool _pretendingToSearch;	// 8 = 0x8
    STMutableTelephonySubscriptionInfo *_subscriptionInfo;	// 16 = 0x10
    _Bool *_fakeServiceCanceled;	// 24 = 0x18
    _Bool *_fakeRegistrationCanceled;	// 32 = 0x20
    _Bool *_fakeCellularRegistrationCanceled;	// 40 = 0x28
    NSString *_cachedCTRegistrationDisplayStatus;	// 48 = 0x30
    NSString *_cachedCTRegistrationCellularStatus;	// 56 = 0x38
    unsigned long long _modemDataConnectionType;	// 64 = 0x40
    NSString *_cachedCTOperatorName;	// 72 = 0x48
    NSArray *_statusBarImages;	// 80 = 0x50
    STMutableTelephonyCarrierBundleInfo *_carrierBundleInfo;	// 88 = 0x58
    STMutableTelephonyMobileEquipmentInfo *_mobileEquipmentInfo;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000017096
@property(retain, nonatomic) STMutableTelephonyMobileEquipmentInfo *mobileEquipmentInfo; // @synthesize mobileEquipmentInfo=_mobileEquipmentInfo;
@property(retain, nonatomic) STMutableTelephonyCarrierBundleInfo *carrierBundleInfo; // @synthesize carrierBundleInfo=_carrierBundleInfo;
@property(copy, nonatomic) NSArray *statusBarImages; // @synthesize statusBarImages=_statusBarImages;
@property(copy, nonatomic) NSString *cachedCTOperatorName; // @synthesize cachedCTOperatorName=_cachedCTOperatorName;
@property(nonatomic) unsigned long long modemDataConnectionType; // @synthesize modemDataConnectionType=_modemDataConnectionType;
@property(copy, nonatomic) NSString *cachedCTRegistrationCellularStatus; // @synthesize cachedCTRegistrationCellularStatus=_cachedCTRegistrationCellularStatus;
@property(copy, nonatomic) NSString *cachedCTRegistrationDisplayStatus; // @synthesize cachedCTRegistrationDisplayStatus=_cachedCTRegistrationDisplayStatus;
@property(nonatomic, getter=isPretendingToSearch) _Bool pretendingToSearch; // @synthesize pretendingToSearch=_pretendingToSearch;
@property(nonatomic) _Bool *fakeCellularRegistrationCanceled; // @synthesize fakeCellularRegistrationCanceled=_fakeCellularRegistrationCanceled;
@property(nonatomic) _Bool *fakeRegistrationCanceled; // @synthesize fakeRegistrationCanceled=_fakeRegistrationCanceled;
@property(nonatomic) _Bool *fakeServiceCanceled; // @synthesize fakeServiceCanceled=_fakeServiceCanceled;
@property(retain, nonatomic) STMutableTelephonySubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
- (id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000016beb
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000016b9b
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000169cc
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001697c
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000016854
- (id)succinctDescription;	// IMP=0x0000000000016804
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFakingCellularRegistration) _Bool fakingCellularRegistration;
@property(readonly, nonatomic, getter=isFakingRegistration) _Bool fakingRegistration;
@property(readonly, nonatomic, getter=isFakingService) _Bool fakingService;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

