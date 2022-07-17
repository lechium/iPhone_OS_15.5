//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryRepresentableItem-Protocol.h>
#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFMediaAccessoryLikeItem-Protocol.h>
#import <Home/HFMediaAccessoryProtocol-Protocol.h>

@class HFMediaAccessoryCommonSettingsManager, HMHome, NSSet, NSString;
@protocol HFAccessoryRepresentable, HFCharacteristicValueSource, HFHomeKitObject, HFHomeKitSettingsVendor, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItem <HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFMediaAccessoryLikeItem, HFActionBuilderFactory>
{
    _Bool _isItemInActionBuilder;	// 8 = 0x8
    id <HFHomeKitObject> _homeKitObject;	// 16 = 0x10
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;	// 24 = 0x18
    id <HFCharacteristicValueSource> _valueSource;	// 32 = 0x20
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 40 = 0x28
    long long _mediaAccessoryItemType;	// 48 = 0x30
}

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;	// IMP=0x000000000017afd4
- (void).cxx_destruct;	// IMP=0x00000000002acad4
@property(nonatomic) _Bool isItemInActionBuilder; // @synthesize isItemInActionBuilder=_isItemInActionBuilder;
@property(readonly, nonatomic) long long mediaAccessoryItemType; // @synthesize mediaAccessoryItemType=_mediaAccessoryItemType;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (id)currentStateActionBuildersForHome:(id)arg1;	// IMP=0x00000000002ac8ca
- (_Bool)actionsMayRequireDeviceUnlock;	// IMP=0x00000000002ac8c2
- (_Bool)containsActions;	// IMP=0x00000000002ac8ba
- (unsigned long long)preferredActionOnTap:(id)arg1;	// IMP=0x00000000002ac870
- (id)iconDescriptor:(id)arg1;	// IMP=0x00000000002ac555
- (id)serviceNameComponents;	// IMP=0x00000000002ac505
- (_Bool)_isInstallingSoftwareUpdate;	// IMP=0x00000000002ac33d
- (id)performStandardUpdateWithOptions:(id)arg1;	// IMP=0x00000000002ac26b
- (void)_decorateWithSiriEndpointProfileSpecificKeys:(id)arg1;	// IMP=0x00000000002ac115
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;	// IMP=0x00000000002abfbd
- (void)_decorateServiceLikeItemKeys:(id)arg1;	// IMP=0x00000000002abd8b
- (void)_decorateSettingsSyncKeys:(id)arg1;	// IMP=0x00000000002abc88
- (void)_decorateWithMediaSessionKeys:(id)arg1;	// IMP=0x00000000002ab847
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;	// IMP=0x00000000002ab488
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;	// IMP=0x00000000002ab306
- (_Bool)supportsAlarmQuickControls;	// IMP=0x00000000002ab2b9
- (_Bool)supportsMediaQuickControls;	// IMP=0x00000000002ab235
- (id)enableDoorbellChime:(_Bool)arg1;	// IMP=0x00000000002ab134
- (_Bool)isDoorbellChimeEnabled;	// IMP=0x00000000002ab0dd
- (_Bool)isSiriDisabled;	// IMP=0x00000000002aaed0
- (_Bool)isAudioReceiver;	// IMP=0x00000000002aae62
- (_Bool)_isHAPCapableSpeaker;	// IMP=0x00000000002aadc8
- (_Bool)_isDumbSpeaker;	// IMP=0x00000000002aad5a
- (_Bool)isAirPort;	// IMP=0x00000000002aacec
- (_Bool)isAppleTV;	// IMP=0x00000000002aac7e
- (_Bool)isContainedWithinMediaSystem;	// IMP=0x00000000002aab98
- (_Bool)isHomePodAndIsInMediaSystem;	// IMP=0x00000000002aab5f
- (_Bool)isStandaloneHomePod;	// IMP=0x00000000002aab28
- (_Bool)supportsMultiUser;	// IMP=0x00000000002aaaaf
- (unsigned long long)homePodVariant;	// IMP=0x00000000002aa9a0
- (_Bool)isHomePod;	// IMP=0x00000000002aa932
- (_Bool)isHomePodMediaSystem;	// IMP=0x00000000002aa8d3
@property(readonly, nonatomic) _Bool supportsMediaAction;
@property(readonly, nonatomic) _Bool allowsAppleMusicAccount;
@property(readonly, nonatomic) NSSet *availableSoftwareUpdates;
@property(readonly, nonatomic) NSSet *accessoriesSupportingSoftwareUpdate;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)namingComponentForHomeKitObject;	// IMP=0x00000000002aa4b9
- (id)serviceLikeBuilderInHome:(id)arg1;	// IMP=0x00000000002aa411
- (id)accessories;	// IMP=0x00000000002aa3c1
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HMHome *home;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;	// IMP=0x00000000002a9fe2
- (id)copyWithValueSource:(id)arg1;	// IMP=0x00000000002a9f45
- (id)settings;	// IMP=0x00000000002a9ef1
- (id)profiles;	// IMP=0x00000000002a9ea1
- (id)setEnableAnnounce:(_Bool)arg1;	// IMP=0x00000000002a9c40
- (_Bool)isAnnounceEnabled;	// IMP=0x00000000002a9a75
- (_Bool)_hasOnboarded;	// IMP=0x00000000002a9a06
- (_Bool)isSiriEndpointAccessory;	// IMP=0x00000000002a999a
@property(readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
- (id)room;	// IMP=0x00000000002a98b2
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000002a8c7e
- (id)createControlItems;	// IMP=0x00000000002a8ad8
@property(readonly, nonatomic) id <HFMediaValueSource> mediaValueSource;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a8881
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;	// IMP=0x00000000002a8520
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;	// IMP=0x00000000002a7dfd
- (id)init;	// IMP=0x00000000002a7d48
@property(readonly, nonatomic) id <HFAccessoryRepresentable> accessoryRepresentableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
