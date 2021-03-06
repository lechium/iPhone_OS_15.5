//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FSNode, LSBundleProxy, LSPropertyList, NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, _LSLazyPropertyList, _LSLocalizedStringRecord;

@interface LSBundleRecord
{
    CDStruct_4c969caf *_auditToken;	// 8 = 0x8
    id _cachedDataContainerURL;	// 16 = 0x10
    FSNode *_node;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e4e0
+ (id)_propertyClasses;	// IMP=0x000000000006d94c
+ (id)_bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x000000000006b58e
+ (id)bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 error:(id *)arg2;	// IMP=0x000000000006b577
+ (id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b170
+ (id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000006af94
+ (id)coreTypesBundleRecord;	// IMP=0x000000000006af7b
+ (id)bundleRecordForCurrentProcess;	// IMP=0x000000000006ac0c
- (void).cxx_destruct;	// IMP=0x000000000006ed1d
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) FSNode *_node; // @synthesize _node;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ec14
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e621
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e4e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e3f0
- (unsigned long long)hash;	// IMP=0x000000000006e398
- (id)debugDescription;	// IMP=0x000000000006e277
- (id)description;	// IMP=0x000000000006e1bc
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x000000000006dd01
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000006da1d
- (void)_LSRecord_resolve__localizedMicrophoneUsageDescription;	// IMP=0x000000000006d931
@property(readonly) _LSLocalizedStringRecord *_localizedMicrophoneUsageDescription;
- (id)_localizedMicrophoneUsageDescriptionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d8e5
- (id)_localizedShort:(_Bool)arg1 nameWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleData:(const struct LSBundleBaseData *)arg5;	// IMP=0x000000000006d88a
- (void)_LSRecord_resolve__localizedShortName;	// IMP=0x000000000006d86f
@property(readonly) _LSLocalizedStringRecord *_localizedShortName;
- (id)_localizedShortNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d82e
- (void)_LSRecord_resolve__localizedName;	// IMP=0x000000000006d813
@property(readonly) _LSLocalizedStringRecord *_localizedName;
- (id)_localizedNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d7d5
@property(readonly) NSString *_fallbackLocalizedName;
@property(readonly) NSDictionary *groupContainerURLs;
- (id)_cachedDataContainerURL;	// IMP=0x000000000006d38e
- (void)_LSRecord_resolve__dataContainerURLFromDatabase;	// IMP=0x000000000006d373
@property(readonly) NSURL *_dataContainerURLFromDatabase;
- (id)_dataContainerURLFromDatabaseWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d2f9
- (void)_LSRecord_resolve__baseFlags;	// IMP=0x000000000006d2e7
@property(readonly) struct LSBundleBaseFlags _baseFlags;
- (struct LSBundleBaseFlags)_baseFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d2c9
- (void)_LSRecord_resolve__rawGroupContainerURLs;	// IMP=0x000000000006d2ae
@property(readonly) _LSLazyPropertyList *_rawGroupContainerURLs;
- (id)_rawGroupContainerURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d27d
@property(readonly) unsigned long long _containerClass;
@property(readonly) _Bool _containerized;
@property(readonly) _Bool _usesSystemPersona;
- (void)_LSRecord_resolve__profileValidationState;	// IMP=0x000000000006d253
@property(readonly) unsigned char _profileValidationState;
- (unsigned char)_profileValidationStateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d234
@property(readonly, nonatomic) LSBundleRecord *_realRecord;
- (void)_LSRecord_resolve__bundleVersion;	// IMP=0x000000000006d1e7
@property(readonly, nonatomic) struct LSVersionNumber _bundleVersion;
- (struct LSVersionNumber)_bundleVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006d1ac
@property(readonly, nonatomic) const CDStruct_4c969caf *_auditToken;
- (id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(struct LSContext *)arg3 tableID:(unsigned int)arg4 unitID:(unsigned int)arg5 bundleBaseData:(const struct LSBundleBaseData *)arg6 error:(id *)arg7;	// IMP=0x000000000006cdbc
@property(readonly) NSSet *serviceRecords;
- (void)_LSRecord_resolve_importedTypeRecords;	// IMP=0x000000000006cd88
@property(readonly) NSSet *importedTypeRecords;
- (id)importedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006cd4a
- (void)_LSRecord_resolve_exportedTypeRecords;	// IMP=0x000000000006cd2f
@property(readonly) NSSet *exportedTypeRecords;
- (id)exportedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006ccee
- (id)exported:(_Bool)arg1 typesWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 unitBytes:(const struct LSBundleData *)arg5;	// IMP=0x000000000006cb1e
- (void)_LSRecord_resolve_claimRecords;	// IMP=0x000000000006cb03
@property(readonly) NSSet *claimRecords;
- (id)claimRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006c944
@property(readonly, getter=wasBuiltWithThreadSanitizer) _Bool builtWithThreadSanitizer;
- (void)_LSRecord_resolve_platform;	// IMP=0x000000000006c91a
@property(readonly) unsigned int platform;
- (unsigned int)platformWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006c8ff
- (void)_LSRecord_resolve_SDKVersion;	// IMP=0x000000000006c8e4
@property(readonly) NSString *SDKVersion;
- (id)SDKVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006c87a
- (void)_LSRecord_resolve_machOUUIDs;	// IMP=0x000000000006c85f
@property(readonly) NSArray *machOUUIDs;
- (id)machOUUIDsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006c5b1
- (void)_LSRecord_resolve_registrationDate;	// IMP=0x000000000006c596
@property(readonly) NSDate *registrationDate;
- (id)registrationDateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006c54d
- (void)_LSRecord_resolve_developerType;	// IMP=0x000000000006c53b
@property(readonly) BOOL developerType;
- (BOOL)developerTypeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006c34e
@property(readonly) NSString *bundleVersion;
- (void)_LSRecord_resolve_executableURL;	// IMP=0x000000000006c2c6
@property(readonly) NSURL *executableURL;
- (id)executableURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006c179
@property(readonly) NSURL *URL;
- (void)_LSRecord_resolve_teamIdentifier;	// IMP=0x000000000006c141
@property(readonly) NSString *teamIdentifier;
- (id)teamIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006c0fb
@property(readonly) NSString *applicationIdentifier;
- (void)dealloc;	// IMP=0x000000000006c051
- (void)_LSRecord_resolve_infoDictionary;	// IMP=0x000000000006ed90
@property(readonly) LSPropertyList *infoDictionary;
- (id)infoDictionaryWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006ed5f
- (void)_LSRecord_resolve_entitlements;	// IMP=0x000000000006f0e0
@property(readonly) LSPropertyList *entitlements;
- (id)entitlementsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f028
@property(readonly) NSURL *dataContainerURL;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;	// IMP=0x000000000006f5cf
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;	// IMP=0x000000000006f4e2
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;	// IMP=0x000000000006f43f
- (id)localizedNameWithPreferredLocalizations:(id)arg1;	// IMP=0x000000000006f39c
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
- (void)_LSRecord_resolve_codeSignatureVersion;	// IMP=0x000000000006f7f1
@property(readonly) unsigned int codeSignatureVersion;
- (unsigned int)codeSignatureVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f7d3
@property(readonly, getter=isFreeProfileValidated) _Bool freeProfileValidated;
@property(readonly, getter=isUPPValidated) _Bool UPPValidated;
@property(readonly, getter=isProfileValidated) _Bool profileValidated;
- (void)_LSRecord_resolve_signerIdentity;	// IMP=0x000000000006f770
@property(readonly) NSString *signerIdentity;
- (id)signerIdentityWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f727
- (void)_LSRecord_resolve_signerOrganization;	// IMP=0x000000000006f70c
@property(readonly) NSString *signerOrganization;
- (id)signerOrganizationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f6c6
@property(readonly) NSArray *managedPersonas;
@property(readonly) NSString *accentColorName;
@property(readonly) NSArray *UIBackgroundModes;
@property(readonly) _Bool supportsNowPlaying;
@property(readonly) NSArray *WKBackgroundModes;
@property(readonly) NSArray *supportedIntentMediaCategories;
@property(readonly) NSArray *intentsRestrictedWhileProtectedDataUnavailable;
@property(readonly) NSArray *intentsRestrictedWhileLocked;
@property(readonly) NSArray *supportedIntents;
- (void)_LSRecord_resolve_intentDefinitionURLs;	// IMP=0x000000000006faff
@property(readonly) NSDictionary *intentDefinitionURLs;
- (id)intentDefinitionURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f939

// Remaining properties
@property(readonly, nonatomic) LSBundleProxy *compatibilityObject; // @dynamic compatibilityObject;

@end

