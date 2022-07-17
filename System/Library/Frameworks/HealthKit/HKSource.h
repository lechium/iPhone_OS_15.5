//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    _Bool _localDevice;	// 24 = 0x18
    NSString *_owningAppBundleIdentifier;	// 32 = 0x20
    NSNumber *_sourceID;	// 40 = 0x28
    NSString *_productType;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
}

+ (_Bool)isAppleDeviceBundleIdentifier:(id)arg1;	// IMP=0x00000000000a46c4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c087
+ (unsigned long long)_sourceOptionsForAppEntitlements:(id)arg1;	// IMP=0x00000000000a4066
+ (id)_sourceWithBundleIdentifier:(id)arg1 defaultBundleIdentifier:(id)arg2 appEntitlements:(id)arg3 name:(id)arg4;	// IMP=0x00000000000a3dd3
+ (id)_publicSourceForClinicalExternalIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x00000000000a3c17
+ (id)_privateSourceForClinicalAccountIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x00000000000a3a71
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000a396f
+ (id)_researchStudiesDirectoryURL;	// IMP=0x00000000000a38e7
+ (_Bool)_isPlaceholderBundleIdentifier:(id)arg1;	// IMP=0x00000000000a38c8
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;	// IMP=0x00000000000a3852
+ (id)_generateIdentifierForAppleDevice;	// IMP=0x00000000000a37ec
+ (id)_sourceNameWithRepresentsCurrentDevice:(_Bool)arg1 defaultSource:(_Bool)arg2;	// IMP=0x000000000001c2b7
+ (id)_currentSourceProductType:(_Bool)arg1;	// IMP=0x000000000001c21e
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(_Bool)arg3;	// IMP=0x000000000000502f
+ (_Bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000a37cd
+ (id)_connectedGymSource;	// IMP=0x00000000000a3693
+ (id)_localDeviceSource;	// IMP=0x000000000000dce0
+ (id)_uncachedDefaultSourceWithEntitlements:(id)arg1;	// IMP=0x00000000000a3463
+ (id)_uncachedDefaultSource;	// IMP=0x00000000000a3376
+ (id)defaultSource;	// IMP=0x00000000000a32e1
- (void).cxx_destruct;	// IMP=0x00000000000119ca
@property(nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) _Bool localDevice; // @synthesize localDevice=_localDevice;
@property(retain, nonatomic, getter=_sourceID, setter=_setSourceID:) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic, getter=_owningAppBundleIdentifier, setter=_setOwningAppBundleIdentifier:) NSString *owningAppBundleIdentifier; // @synthesize owningAppBundleIdentifier=_owningAppBundleIdentifier;
- (_Bool)_isConnectedGymSource;	// IMP=0x0000000000021d81
- (_Bool)_hasFirstPartyBundleID;	// IMP=0x00000000000a46e0
- (_Bool)_isAppleDevice;	// IMP=0x00000000000a46a7
- (_Bool)_isAppleWatch;	// IMP=0x000000000001de5f
- (void)_setBundleIdentifier:(id)arg1;	// IMP=0x0000000000016d74
@property(readonly) NSString *bundleIdentifier;
- (void)_setName:(id)arg1;	// IMP=0x000000000001c09b
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000054cb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000028f0
- (id)description;	// IMP=0x00000000000a4659
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000cd27
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005407
- (unsigned long long)hash;	// IMP=0x00000000000053f1
- (id)_init;	// IMP=0x0000000000016d34
- (id)init;	// IMP=0x00000000000a45df
- (id)_fetchBundleWithError:(id *)arg1;	// IMP=0x00000000000a42be
- (id)_deducedClinicalAccountIdentifier;	// IMP=0x00000000000a41f5
- (_Bool)_isAllowedBackgroundDelivery;	// IMP=0x00000000000a41e7
- (_Bool)_isResearchStudy;	// IMP=0x00000000000a41d9
- (_Bool)_isClinicalSource;	// IMP=0x00000000000a41cb
- (_Bool)_isHidden;	// IMP=0x00000000000a4159
- (_Bool)_requiresAuthorization;	// IMP=0x00000000000a414b
- (_Bool)_isPreferredSource;	// IMP=0x0000000000021d74
- (_Bool)_isApplication;	// IMP=0x000000000001c0fb

@end
