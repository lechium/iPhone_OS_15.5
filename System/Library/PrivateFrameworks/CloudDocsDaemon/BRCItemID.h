//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>
#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class BRCALRowID, BRCZoneRowID, NSString;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable>
{
    BRCALRowID *_appLibraryRowID;	// 8 = 0x8
    BRCZoneRowID *_zoneRowID;	// 16 = 0x10
    unsigned char _kind;	// 24 = 0x18
    unsigned char _uuid[16];	// 25 = 0x19
}

+ (_Bool)migrateItemIDsToVersion11WithDB:(id)arg1 serverTruth:(_Bool)arg2;	// IMP=0x000000000015938b
+ (_Bool)migrateItemIDsToVersion8WithDB:(id)arg1 serverTruth:(_Bool)arg2;	// IMP=0x00000000001591e5
+ (_Bool)migrateItemIDsToVersion5WithDB:(id)arg1 serverTruth:(_Bool)arg2;	// IMP=0x0000000000158a88
+ (id)parseMangledItemIDString:(id)arg1 mangledID:(id *)arg2 etag:(id *)arg3 session:(id)arg4;	// IMP=0x00000000001586a1
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000158205
+ (_Bool)isSharedZoneRootItemIDWithSQLiteValue:(struct sqlite3_value *)arg1;	// IMP=0x0000000000158051
+ (_Bool)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value *)arg1;	// IMP=0x0000000000158013
+ (_Bool)isRootItemIDWithSQLiteValue:(struct sqlite3_value *)arg1;	// IMP=0x0000000000157fd4
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x0000000000157de3
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x0000000000157c06
+ (id)documentsItemIDWithAppLibraryRowID:(id)arg1;	// IMP=0x0000000000157112
- (void).cxx_destruct;	// IMP=0x0000000000159826
- (id)derivedAliasItemIDWithOwnerName:(id)arg1;	// IMP=0x000000000015856c
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x000000000015835b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000158350
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015820d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158102
- (id)initWithItemID:(id)arg1;	// IMP=0x000000000015808d
- (id)initWithRootObject:(struct RootItemObject *)arg1;	// IMP=0x0000000000157b31
- (id)initWithUUID:(const char *)arg1;	// IMP=0x0000000000157aed
- (id)initWithAliasUUID:(id)arg1;	// IMP=0x0000000000157adb
- (id)initAsDocumentsWithAppLibraryRowID:(id)arg1;	// IMP=0x00000000001579a2
- (id)_initAsZoneRootWithZoneRowID:(id)arg1;	// IMP=0x0000000000157869
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1;	// IMP=0x0000000000157730
- (id)initWithUUIDString:(id)arg1;	// IMP=0x0000000000157657
- (id)initWithString:(id)arg1 libraryRowID:(id)arg2 sharedZoneRowID:(id)arg3;	// IMP=0x00000000001574dc
- (id)init;	// IMP=0x0000000000157490
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000157334
- (_Bool)isEqualToItemID:(id)arg1;	// IMP=0x0000000000157249
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) const char *UTF8String;
@property(readonly, nonatomic) NSString *debugItemIDString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *itemIDString;
- (id)zoneUniqueItemIDStringWithSession:(id)arg1;	// IMP=0x000000000015695a
- (id)itemUUIDString;	// IMP=0x00000000001568ca
@property(readonly, nonatomic) BRCZoneRowID *sharedZoneRowID;
@property(readonly, nonatomic) BRCALRowID *appLibraryRowID;
@property(readonly, nonatomic) _Bool isSharedZoneRoot;
@property(readonly, nonatomic) _Bool isDocumentsFolder;
@property(readonly, nonatomic) _Bool isNonDesktopRoot;
- (id)directoryReferenceInZone:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x00000000000f5aae
- (id)_directoryRecordNameWithSession:(id)arg1;	// IMP=0x00000000000f58dd
- (id)sideCarRecordIDWithZone:(id)arg1;	// IMP=0x00000000000f582b
- (id)sideCarRecordNameWithZone:(id)arg1;	// IMP=0x00000000000f5747
- (id)structureRecordIDForItemType:(BOOL)arg1 zone:(id)arg2 aliasTargetZoneIsShared:(_Bool)arg3;	// IMP=0x00000000000f53f0
- (id)structureRecordPrefixForItemType:(BOOL)arg1 targetZoneShared:(_Bool)arg2;	// IMP=0x00000000000f536d
- (id)pcsChainDocumentStructureReferenceInZoneID:(id)arg1;	// IMP=0x00000000000f5297
- (id)pcsChainParentReferenceInZone:(id)arg1;	// IMP=0x00000000000f5283
- (id)validatingDirectoryReferenceInZone:(id)arg1;	// IMP=0x00000000000f5267
- (id)documentStructureRecordIDInZoneID:(id)arg1;	// IMP=0x00000000000f51b8
- (id)directoryStructureRecordIDInZone:(id)arg1;	// IMP=0x00000000000f50e3
- (id)contentsRecordIDInZoneID:(id)arg1;	// IMP=0x00000000000f5034

// Remaining properties
@property(readonly) Class superclass;

@end
