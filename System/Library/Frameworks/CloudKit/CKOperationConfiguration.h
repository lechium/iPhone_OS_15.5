//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAssetDownloadStagingManager, CKContainer, CKSchedulerActivity, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol OS_xpc_object;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _allowsCellularAccess;	// 8 = 0x8
    _Bool _allowsExpensiveNetworkAccess;	// 9 = 0x9
    _Bool _longLived;	// 10 = 0xa
    _Bool _preferAnonymousRequests;	// 11 = 0xb
    _Bool _automaticallyRetryNetworkFailures;	// 12 = 0xc
    _Bool _xpcActivityAutomaticallyDefer;	// 13 = 0xd
    _Bool _discretionarySchedulingForEntireOperation;	// 14 = 0xe
    _Bool _allowsBackgroundNetworking;	// 15 = 0xf
    _Bool _isCloudKitSupportOperation;	// 16 = 0x10
    _Bool _hasQualityOfService;	// 17 = 0x11
    _Bool _hasContainer;	// 18 = 0x12
    _Bool _hasAllowsCellularAccess;	// 19 = 0x13
    _Bool _hasAllowsExpensiveNetworkAccess;	// 20 = 0x14
    _Bool _hasLongLived;	// 21 = 0x15
    _Bool _hasTimeoutIntervalForRequest;	// 22 = 0x16
    _Bool _hasTimeoutIntervalForResource;	// 23 = 0x17
    _Bool _hasAutomaticallyRetryNetworkFailures;	// 24 = 0x18
    _Bool _hasDiscretionaryNetworkBehavior;	// 25 = 0x19
    _Bool _hasXPCActivity;	// 26 = 0x1a
    _Bool _hasXPCActivityAutomaticallyDefer;	// 27 = 0x1b
    _Bool _hasSchedulerActivity;	// 28 = 0x1c
    _Bool _hasDiscretionarySchedulingForEntireOperation;	// 29 = 0x1d
    _Bool _hasPreferAnonymousRequests;	// 30 = 0x1e
    _Bool _hasAllowsBackgroundNetworking;	// 31 = 0x1f
    _Bool _hasSourceApplicationBundleIdentifier;	// 32 = 0x20
    _Bool _hasSourceApplicationSecondaryIdentifier;	// 33 = 0x21
    _Bool _hasApplicationBundleIdentifierOverrideForContainerAccess;	// 34 = 0x22
    _Bool _hasApplicationBundleIdentifierOverrideForNetworkAttribution;	// 35 = 0x23
    _Bool _hasAdditionalRequestHTTPHeaders;	// 36 = 0x24
    _Bool _hasIsCloudKitSupportOperation;	// 37 = 0x25
    _Bool _hasCacheDeleteAvailableSpaceClass;	// 38 = 0x26
    _Bool _hasAssetDownloadStagingManager;	// 39 = 0x27
    CKContainer *_container;	// 40 = 0x28
    long long _qualityOfService;	// 48 = 0x30
    double _timeoutIntervalForRequest;	// 56 = 0x38
    double _timeoutIntervalForResource;	// 64 = 0x40
    unsigned long long _discretionaryNetworkBehavior;	// 72 = 0x48
    NSObject<OS_xpc_object> *_xpcActivity;	// 80 = 0x50
    NSString *_sourceApplicationBundleIdentifier;	// 88 = 0x58
    NSString *_sourceApplicationSecondaryIdentifier;	// 96 = 0x60
    NSString *_applicationBundleIdentifierOverrideForContainerAccess;	// 104 = 0x68
    NSString *_applicationBundleIdentifierOverrideForNetworkAttribution;	// 112 = 0x70
    NSDictionary *_additionalRequestHTTPHeaders;	// 120 = 0x78
    NSNumber *_cacheDeleteAvailableSpaceClass;	// 128 = 0x80
    CKAssetDownloadStagingManager *_assetDownloadStagingManager;	// 136 = 0x88
    NSMutableDictionary *_unitTestOverrides;	// 144 = 0x90
    CKSchedulerActivity *_schedulerActivity;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014a056
- (void).cxx_destruct;	// IMP=0x000000000014b54e
@property(copy, nonatomic) CKSchedulerActivity *schedulerActivity; // @synthesize schedulerActivity=_schedulerActivity;
@property(retain, nonatomic) NSMutableDictionary *unitTestOverrides; // @synthesize unitTestOverrides=_unitTestOverrides;
@property(nonatomic) _Bool hasDiscretionaryNetworkBehavior; // @synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior;
@property(nonatomic) _Bool hasAutomaticallyRetryNetworkFailures; // @synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures;
@property(nonatomic) _Bool hasAllowsExpensiveNetworkAccess; // @synthesize hasAllowsExpensiveNetworkAccess=_hasAllowsExpensiveNetworkAccess;
@property(nonatomic) _Bool hasQualityOfService; // @synthesize hasQualityOfService=_hasQualityOfService;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // @synthesize xpcActivity=_xpcActivity;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x000000000014b158
- (id)description;	// IMP=0x000000000014b146
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014ac6a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014a515
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014a05e
@property(copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
- (void)setApplicationBundleIdentifierOverride:(id)arg1;	// IMP=0x0000000000149fa9
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // @synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution;
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // @synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess;
@property(copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // @synthesize _sourceApplicationSecondaryIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) _Bool allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(copy, nonatomic) CKAssetDownloadStagingManager *assetDownloadStagingManager; // @synthesize assetDownloadStagingManager=_assetDownloadStagingManager;
@property(copy, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass; // @synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass;
@property(nonatomic) _Bool isCloudKitSupportOperation; // @synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation;
@property(nonatomic) _Bool preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(nonatomic) _Bool discretionarySchedulingForEntireOperation; // @synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation;
@property(nonatomic) _Bool xpcActivityAutomaticallyDefer; // @synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) _Bool automaticallyRetryNetworkFailures; // @synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic, getter=isLongLived) _Bool longLived; // @synthesize longLived=_longLived;
@property(nonatomic) _Bool allowsExpensiveNetworkAccess; // @synthesize allowsExpensiveNetworkAccess=_allowsExpensiveNetworkAccess;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)resolveAgainstGenericConfiguration:(id)arg1;	// IMP=0x0000000000148c3c
- (id)init;	// IMP=0x0000000000148be0

@end
