//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

#import <CloudDocsDaemon/PQLBindable-Protocol.h>
#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSData, NSString;

@interface CKRecord (BRCSerializationAdditions) <PQLValuable, PQLBindable>
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00000000000f851f
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00000000000f842a
+ (id)desiredKeysWithMask:(unsigned short)arg1;	// IMP=0x0000000000102808
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000000010244e
+ (id)rootDirectoryRecordForZoneID:(id)arg1;	// IMP=0x000000000010229b
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;	// IMP=0x0000000000102d91
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;	// IMP=0x0000000000103b17
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2 isDeltaSync:(_Bool)arg3;	// IMP=0x0000000000100897
- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;	// IMP=0x0000000000100765
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(_Bool)arg4;	// IMP=0x00000000001004e0
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;	// IMP=0x00000000000ffce5
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;	// IMP=0x00000000000fed49
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3 inSharedAlias:(_Bool)arg4;	// IMP=0x00000000000fea93
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;	// IMP=0x00000000000fea7e
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00000000000fea66
- (void)serializeFinderTags:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00000000000fe9c4
- (void)serializeSystemFields:(id)arg1;	// IMP=0x00000000000fe87c
- (_Bool)locateSideCarServerZone:(id *)arg1 shareRecordName:(id *)arg2 withSession:(id)arg3;	// IMP=0x00000000000fe65c
- (_Bool)_locateSideCarServerZone:(id *)arg1 withShareAliasReference:(id)arg2 withSession:(id)arg3;	// IMP=0x00000000000fe397
- (_Bool)deserializeSideCarInfo:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000fe034
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 clientZone:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000fc86d
- (_Bool)deserializeSymlinkTarget:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000fc714
- (_Bool)deserializeStatInfo:(id *)arg1 serverMetrics:(id *)arg2 itemID:(id)arg3 session:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000fa3a4
- (void)deserializeFolderSharingOptions:(unsigned long long *)arg1;	// IMP=0x00000000000fa392
- (_Bool)deserializeiWorkSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000000000fa0b1
- (void)_deserializeRootSharingOptions:(unsigned long long *)arg1;	// IMP=0x00000000000fa06d
- (_Bool)deserializeAliasInfo:(id *)arg1 serverZone:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f8f67
- (_Bool)deserializeFilename:(id *)arg1 basename:(id *)arg2 bounceno:(id *)arg3 extension:(id *)arg4 userInfo:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000f8884
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3 expectClass:(Class)arg4 allowNil:(_Bool)arg5 errorDescription:(id *)arg6;	// IMP=0x00000000000f862b
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00000000000f8395
- (void)sanitizeShortTokenFields;	// IMP=0x0000000000102d50
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0000000000102206
- (id)brc_lastEditorDeviceName;	// IMP=0x0000000000101fd6
- (_Bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;	// IMP=0x0000000000101f53
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id *)arg2;	// IMP=0x0000000000101ab3
- (_Bool)brc_safeToGetURL;	// IMP=0x0000000000101976
- (id)brc_updateDroppedReason;	// IMP=0x000000000010191f
- (id)brc_oplockMergeEtag;	// IMP=0x00000000001018c8
- (_Bool)brc_isInterestingRecordForSave;	// IMP=0x000000000010182b
- (_Bool)brc_isInterestingRecordForSyncDown;	// IMP=0x0000000000101609
- (id)brc_containerMetadataIconPaths;	// IMP=0x0000000000103442
- (id)brc_containerMetadataIconNames;	// IMP=0x0000000000103243
@property(readonly, nonatomic) NSData *brc_containerMetadataPropertiesData;
- (_Bool)brc_isfakeRecordWithErrorMarkerFor20716676;	// IMP=0x0000000000103b47
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(_Bool)arg2;	// IMP=0x000000000010401b
- (id)brc_sharedLinkDisplayName;	// IMP=0x0000000000104009
- (id)brc_sharedRootDisplayName;	// IMP=0x0000000000103d3f
- (id)brc_sharedRootExtension;	// IMP=0x0000000000103bea
- (_Bool)isFolderShare;	// IMP=0x0000000000103b92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
