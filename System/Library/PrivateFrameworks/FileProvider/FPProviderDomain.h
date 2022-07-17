//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPItemCollection, NSArray, NSDictionary, NSError, NSFileProviderDomain, NSFileProviderManager, NSProgress, NSString, NSURL;

@interface FPProviderDomain : NSObject <NSSecureCoding, NSCopying>
{
    FPItemCollection *_itemCollection;	// 8 = 0x8
    _Bool _keepLocalStorageUpToDate;	// 16 = 0x10
    _Bool _readOnly;	// 17 = 0x11
    _Bool _useFPFS;	// 18 = 0x12
    _Bool _supportsEnumeration;	// 19 = 0x13
    _Bool _isAvailableSystemWide;	// 20 = 0x14
    _Bool _enabled;	// 21 = 0x15
    _Bool _canDisable;	// 22 = 0x16
    _Bool _usesUniqueItemIdentifiersAcrossDevices;	// 23 = 0x17
    _Bool _supportsPickingFolders;	// 24 = 0x18
    _Bool _needsAuthentication;	// 25 = 0x19
    _Bool _allowsUserControlledEviction;	// 26 = 0x1a
    _Bool _allowsSystemDeleteAlerts;	// 27 = 0x1b
    _Bool _allowsContextualMenuDownloadEntry;	// 28 = 0x1c
    _Bool _appliesChangesAtomically;	// 29 = 0x1d
    _Bool _hidden;	// 30 = 0x1e
    _Bool _ejectable;	// 31 = 0x1f
    _Bool _shouldHideExtensionName;	// 32 = 0x20
    _Bool _shouldHideDomainDisplayName;	// 33 = 0x21
    NSString *_identifier;	// 40 = 0x28
    NSString *_providerID;	// 48 = 0x30
    NSArray *_supportedFileTypes;	// 56 = 0x38
    NSString *_topLevelBundleIdentifier;	// 64 = 0x40
    NSURL *_extensionBundleURL;	// 72 = 0x48
    NSArray *_storageURLs;	// 80 = 0x50
    unsigned long long _disconnectionState;	// 88 = 0x58
    NSArray *_supportedSearchFilters;	// 96 = 0x60
    NSDictionary *_domainUserInfo;	// 104 = 0x68
    NSProgress *_progress;	// 112 = 0x70
    NSFileProviderManager *_manager;	// 120 = 0x78
    NSString *_providerDisplayName;	// 128 = 0x80
    NSFileProviderDomain *_domain;	// 136 = 0x88
    NSString *_purposeIdentifier;	// 144 = 0x90
    NSString *_version;	// 152 = 0x98
}

+ (void)removeDomainWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b2bd
+ (void)removeDomainAndPreserveDataWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b112
+ (void)fetchProviderDomainForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b09a
+ (id)providerDomainForItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b033
+ (id)providerDomainsWithError:(id *)arg1;	// IMP=0x000000000008adce
+ (id)providerDomainWithID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008aaf0
+ (void)fetchProviderDomainWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a8ef
+ (id)providerDomainForURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008a5f3
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000089697
+ (void)_t_discardCache;	// IMP=0x0000000000089125
+ (void)endMonitoringProviderDomainChanges:(id)arg1;	// IMP=0x0000000000089043
+ (id)beginMonitoringProviderDomainChangesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000088fbc
- (void).cxx_destruct;	// IMP=0x000000000008b5f6
@property(nonatomic) _Bool shouldHideDomainDisplayName; // @synthesize shouldHideDomainDisplayName=_shouldHideDomainDisplayName;
@property(nonatomic) _Bool shouldHideExtensionName; // @synthesize shouldHideExtensionName=_shouldHideExtensionName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *purposeIdentifier; // @synthesize purposeIdentifier=_purposeIdentifier;
@property(nonatomic, getter=isEjectable) _Bool ejectable; // @synthesize ejectable=_ejectable;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *providerDisplayName; // @synthesize providerDisplayName=_providerDisplayName;
@property(readonly, nonatomic) NSFileProviderManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool appliesChangesAtomically; // @synthesize appliesChangesAtomically=_appliesChangesAtomically;
@property(nonatomic) _Bool allowsContextualMenuDownloadEntry; // @synthesize allowsContextualMenuDownloadEntry=_allowsContextualMenuDownloadEntry;
@property(nonatomic) _Bool allowsSystemDeleteAlerts; // @synthesize allowsSystemDeleteAlerts=_allowsSystemDeleteAlerts;
@property(nonatomic) _Bool allowsUserControlledEviction; // @synthesize allowsUserControlledEviction=_allowsUserControlledEviction;
@property(retain, nonatomic) NSDictionary *domainUserInfo; // @synthesize domainUserInfo=_domainUserInfo;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) _Bool supportsPickingFolders; // @synthesize supportsPickingFolders=_supportsPickingFolders;
@property(nonatomic) _Bool usesUniqueItemIdentifiersAcrossDevices; // @synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices;
@property(retain, nonatomic) NSArray *supportedSearchFilters; // @synthesize supportedSearchFilters=_supportedSearchFilters;
@property(nonatomic) _Bool canDisable; // @synthesize canDisable=_canDisable;
@property(nonatomic) unsigned long long disconnectionState; // @synthesize disconnectionState=_disconnectionState;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isAvailableSystemWide; // @synthesize isAvailableSystemWide=_isAvailableSystemWide;
@property(retain, nonatomic) NSArray *storageURLs; // @synthesize storageURLs=_storageURLs;
@property(retain, nonatomic) NSURL *extensionBundleURL; // @synthesize extensionBundleURL=_extensionBundleURL;
@property(retain, nonatomic) NSString *topLevelBundleIdentifier; // @synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier;
@property(nonatomic) _Bool supportsEnumeration; // @synthesize supportsEnumeration=_supportsEnumeration;
@property(retain, nonatomic) NSArray *supportedFileTypes; // @synthesize supportedFileTypes=_supportedFileTypes;
@property(nonatomic, getter=isUsingFPFS) _Bool useFPFS; // @synthesize useFPFS=_useFPFS;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSString *personaIdentifier;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool isDataSeparatedDomain;
@property(readonly, nonatomic) _Bool isEnterpriseDomain;
@property(readonly, nonatomic) _Bool isMainiCloudDriveDomain;
@property(readonly, nonatomic) _Bool isiCloudDriveProvider;
- (void)setEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a3b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008a3a7
- (unsigned long long)hash;	// IMP=0x000000000008a391
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008a303
@property(readonly) NSString *spotlightMountPoint;
@property(readonly, nonatomic) NSString *localizedDisconnectionBannerText;
@property(readonly, nonatomic) unsigned long long testingModes;
@property(readonly, nonatomic) _Bool isConnectedToAppExtension;
@property(readonly, nonatomic) NSString *disconnectionReason;
@property(readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property(readonly, nonatomic) _Bool containsPhotos;
@property(readonly, nonatomic) _Bool canDisconnect;
@property(readonly, nonatomic) NSString *containingBundleIdentifier;
@property(readonly, nonatomic) NSString *extensionBundleIdentifier;
@property(readonly, nonatomic) NSString *domainFullDisplayName;
@property(readonly, nonatomic) NSString *domainDisplayName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000089bb1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008969f
- (id)description;	// IMP=0x0000000000089312
- (id)initWithProviderID:(id)arg1 domain:(id)arg2;	// IMP=0x0000000000089169
- (id)init;	// IMP=0x0000000000088f8d
- (id)storageURL;	// IMP=0x000000000006f84b
- (id)bundleURL;	// IMP=0x000000000006f839
- (id)providerIdentifier;	// IMP=0x000000000006f827
- (id)localizedName;	// IMP=0x000000000006f815
- (id)localizedTitleForSortDescriptor:(id)arg1;	// IMP=0x000000000006f803

@end
