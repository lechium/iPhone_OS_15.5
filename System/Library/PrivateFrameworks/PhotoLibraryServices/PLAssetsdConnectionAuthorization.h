//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLClientAuthorization-Protocol.h>

@class BKSApplicationStateMonitor, NSDate, NSNumber, NSSet, NSString, PLSandboxedURL;
@protocol OS_dispatch_queue;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization>
{
    CDStruct_4c969caf _auditToken;	// 8 = 0x8
    NSSet *_photoKitEntitlements;	// 40 = 0x28
    NSNumber *_photosAccessAllowed;	// 48 = 0x30
    NSNumber *_photosAddAccessAllowed;	// 56 = 0x38
    _Bool _libraryUpgradeAuthorized;	// 64 = 0x40
    _Bool _directDatabaseAccessAuthorized;	// 65 = 0x41
    _Bool _directDatabaseWriteAuthorized;	// 66 = 0x42
    _Bool _isEntitledForPhotoKitOrPrivatePhotosTCC;	// 67 = 0x43
    NSString *_fetchFilterIdentifier;	// 72 = 0x48
    PLSandboxedURL *_clientMainBundleSandboxedURL;	// 80 = 0x50
    NSDate *_connectionStartDate;	// 88 = 0x58
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_duetUpdateQueue;	// 104 = 0x68
    _Bool _photoKitEntitled;	// 112 = 0x70
    _Bool _cloudInternalEntitled;	// 113 = 0x71
    _Bool _analyticsCacheReadEntitled;	// 114 = 0x72
    _Bool _analyticsCacheWriteEntitled;	// 115 = 0x73
    _Bool _clientLimitedLibraryCapable;	// 116 = 0x74
    _Bool _clientIsSandboxed;	// 117 = 0x75
    _Bool _photosDataVaultEntitled;	// 118 = 0x76
    _Bool _internalDataReadWriteAuthorized;	// 119 = 0x77
    int _clientProcessIdentifier;	// 120 = 0x78
    NSString *_trustedCallerBundleID;	// 128 = 0x80
    NSString *_trustedCallerDisplayName;	// 136 = 0x88
    NSString *_trustedCallerPhotoLibraryUsageDescription;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000004b6ffd
@property(readonly, nonatomic) _Bool internalDataReadWriteAuthorized; // @synthesize internalDataReadWriteAuthorized=_internalDataReadWriteAuthorized;
@property(readonly, nonatomic) _Bool photosDataVaultEntitled; // @synthesize photosDataVaultEntitled=_photosDataVaultEntitled;
@property(readonly, nonatomic) _Bool clientIsSandboxed; // @synthesize clientIsSandboxed=_clientIsSandboxed;
@property(readonly, nonatomic, getter=isClientLimitedLibraryCapable) _Bool clientLimitedLibraryCapable; // @synthesize clientLimitedLibraryCapable=_clientLimitedLibraryCapable;
@property(readonly, nonatomic) _Bool analyticsCacheWriteEntitled; // @synthesize analyticsCacheWriteEntitled=_analyticsCacheWriteEntitled;
@property(readonly, nonatomic) _Bool analyticsCacheReadEntitled; // @synthesize analyticsCacheReadEntitled=_analyticsCacheReadEntitled;
@property(readonly, nonatomic) _Bool cloudInternalEntitled; // @synthesize cloudInternalEntitled=_cloudInternalEntitled;
@property(readonly, nonatomic) _Bool photoKitEntitled; // @synthesize photoKitEntitled=_photoKitEntitled;
@property(readonly, nonatomic) NSString *trustedCallerBundleID; // @synthesize trustedCallerBundleID=_trustedCallerBundleID;
@property(readonly, nonatomic) int clientProcessIdentifier; // @synthesize clientProcessIdentifier=_clientProcessIdentifier;
- (void)handleInvalidation;	// IMP=0x00000000004b6f43
- (_Bool)photoKitEntitledFor:(id)arg1;	// IMP=0x00000000004b6f2d
@property(readonly, nonatomic) NSString *fetchFilterIdentifier; // @synthesize fetchFilterIdentifier=_fetchFilterIdentifier;
@property(readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription; // @synthesize trustedCallerPhotoLibraryUsageDescription=_trustedCallerPhotoLibraryUsageDescription;
@property(readonly, nonatomic) NSString *trustedCallerDisplayName; // @synthesize trustedCallerDisplayName=_trustedCallerDisplayName;
- (void)_handleDuetReportIsForeground:(_Bool)arg1;	// IMP=0x00000000004b6a9c
- (void)_trackDKEventIfNecessary;	// IMP=0x00000000004b6998
- (_Bool)_shouldTrackEventForBundle:(id)arg1;	// IMP=0x00000000004b68e6
- (void)_trackCAConnectionEvent;	// IMP=0x00000000004b654f
- (void)setupFromConnection:(id)arg1;	// IMP=0x00000000004b5f71
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
- (_Bool)isClientAuthorizedForSandboxExtensions;	// IMP=0x00000000004b5f09
- (_Bool)isPhotosClient;	// IMP=0x00000000004b5ee9
@property(readonly, nonatomic) _Bool directDatabaseWriteAuthorized;
@property(readonly, nonatomic) _Bool directDatabaseAccessAuthorized;
- (_Bool)isClientAuthorizedForLibraryUpgrade;	// IMP=0x00000000004b5ece
- (void)setClientMainBundleSandboxedURL:(id)arg1;	// IMP=0x00000000004b5ebd
- (void)setClientLimitedLibraryCapable:(_Bool)arg1;	// IMP=0x00000000004b5eb4
- (_Bool)isClientInRestrictedMode;	// IMP=0x00000000004b5e2d
- (_Bool)isClientInFullLibraryMode;	// IMP=0x00000000004b5da7
- (_Bool)isClientInLimitedLibraryMode;	// IMP=0x00000000004b5d20
@property(readonly, nonatomic) _Bool limitedLibraryMode;
- (_Bool)isClientEntitledForPhotoKitOrPrivatePhotosTCC;	// IMP=0x00000000004b5d05
- (void)invalidateClientAuthorizationCache;	// IMP=0x00000000004b5ccc
@property(readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotosAdd) _Bool clientAuthorizedForTCCServicePhotosAdd;
@property(readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotos) _Bool clientAuthorizedForTCCServicePhotos;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000004b5a7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

