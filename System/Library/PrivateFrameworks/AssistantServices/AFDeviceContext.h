//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFCallStateSnapshot, AFClockAlarmSnapshot, AFClockTimerSnapshot, AFDeviceContextMetadata, AFHomeAnnouncementSnapshot, AFLocationSnapshot, AFMediaPlaybackStateSnapshot, AFMultiUserStateSnapshot, AFPeerInfo, AFSystemStateSnapshot, NSData, NSMutableDictionary, NSString, NSUUID;

@interface AFDeviceContext : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fromLocalDevice;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    AFPeerInfo *_deviceInfo;	// 24 = 0x18
    long long _privacyClass;	// 32 = 0x20
    NSMutableDictionary *_serializedBackingStore;	// 40 = 0x28
    long long _dirtyFlags;	// 48 = 0x30
    NSString *_cachedDescription;	// 56 = 0x38
    struct os_unfair_lock_s _cachedDescriptionLock;	// 64 = 0x40
    NSString *_contextCollectorSource;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aa555
- (void).cxx_destruct;	// IMP=0x00000000000ab3b9
@property(readonly, nonatomic) long long privacyClass; // @synthesize privacyClass=_privacyClass;
@property(readonly, nonatomic) AFPeerInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *contextCollectorSource; // @synthesize contextCollectorSource=_contextCollectorSource;
@property(readonly, nonatomic) _Bool fromLocalDevice; // @synthesize fromLocalDevice=_fromLocalDevice;
- (id)buildDescription;	// IMP=0x00000000000ab1d2
- (_Bool)isValid;	// IMP=0x00000000000ab1b9
- (id)updatedContextWithSerializedContextByKey:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000aadbf
- (id)partialSerializedBackingStoreIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2;	// IMP=0x00000000000aadad
- (id)deviceContextForDeviceContextKeys:(id)arg1 excludingMandatoryKeys:(id)arg2;	// IMP=0x00000000000aaccf
- (id)partiallyUpdatedContextForDeviceContextKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 fromDeviceContext:(id)arg3;	// IMP=0x00000000000aa7cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aa725
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aa55d
- (id)description;	// IMP=0x00000000000aa4fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa41a
- (unsigned long long)hash;	// IMP=0x00000000000aa33f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa334
- (id)allContextKeys;	// IMP=0x00000000000aa2e4
- (id)historicalContextMetadataForKey:(id)arg1;	// IMP=0x00000000000aa08a
- (id)contextMetadataForKey:(id)arg1;	// IMP=0x00000000000a9f9f
- (id)_safeContextDictionary;	// IMP=0x00000000000a9f34
- (id)serializedHistoricalContextForKey:(id)arg1;	// IMP=0x00000000000a9e72
- (id)serializedContextForKey:(id)arg1;	// IMP=0x00000000000a9db0
- (id)serializedBackingStore;	// IMP=0x00000000000a9d47
- (id)_serializedBackingStoreIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2;	// IMP=0x00000000000a9953
- (id)initWithSerializedBackingStore:(id)arg1 fromLocalDevice:(_Bool)arg2 contextCollectorSource:(id)arg3;	// IMP=0x00000000000a979a
- (id)init;	// IMP=0x00000000000a973d
- (id)buildBuiltInContextsDescriptions;	// IMP=0x000000000009d540
- (id)historicalSiriClientStateMetadata;	// IMP=0x000000000009d524
- (id)historicalSiriClientStates;	// IMP=0x000000000009d476
@property(readonly, nonatomic) AFDeviceContextMetadata *siriClientStateMetadata;
@property(readonly, nonatomic) unsigned long long siriClientState;
@property(readonly, nonatomic) AFDeviceContextMetadata *systemStateMetadata;
@property(readonly, nonatomic) AFSystemStateSnapshot *systemStateSnapshot;
@property(readonly, nonatomic) AFDeviceContextMetadata *callStateMetadata;
@property(readonly, nonatomic) AFCallStateSnapshot *callStateSnapshot;
@property(readonly, nonatomic) AFDeviceContextMetadata *locationMetadata;
@property(readonly, nonatomic) AFLocationSnapshot *locationSnapshot;
@property(readonly, nonatomic) AFDeviceContextMetadata *multiUserStateMetadata;
@property(readonly, nonatomic) AFMultiUserStateSnapshot *multiUserStateSnapshot;
@property(readonly, nonatomic) NSData *myriadAdvertisementContext;
@property(readonly, nonatomic) AFDeviceContextMetadata *heardVoiceTriggerMetadata;
@property(readonly, nonatomic) long long heardVoiceTrigger;
@property(readonly, nonatomic) AFDeviceContextMetadata *homeAnnouncementSnapshotMetadata;
@property(readonly, nonatomic) AFHomeAnnouncementSnapshot *homeAnnouncementSnapshot;
@property(readonly, nonatomic) AFDeviceContextMetadata *playbackStateMetadata;
@property(readonly, nonatomic) AFMediaPlaybackStateSnapshot *playbackStateSnapshot;
@property(readonly, nonatomic) AFDeviceContextMetadata *timerSnapshotMetadata;
@property(readonly, nonatomic) AFClockTimerSnapshot *timerSnapshot;
@property(readonly, nonatomic) AFDeviceContextMetadata *alarmSnapshotMetadata;
@property(readonly, nonatomic) AFClockAlarmSnapshot *alarmSnapshot;
- (id)af_validFlowContext;	// IMP=0x00000000000af0ae
- (_Bool)af_didHearVoiceTrigger;	// IMP=0x00000000000aefee
- (id)af_serviceDeviceContextForKeys:(id)arg1 excludeContextExpiredBefore:(id)arg2 proximity:(long long)arg3;	// IMP=0x00000000000aea73
- (id)af_serviceDeviceContextForKeys:(id)arg1;	// IMP=0x00000000000aea5c

@end
