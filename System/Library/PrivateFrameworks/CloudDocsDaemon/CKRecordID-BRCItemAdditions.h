//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions) <PQLValuable>
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00000000000f6ffa
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00000000000f6f30
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;	// IMP=0x00000000002c3b0d
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;	// IMP=0x00000000000f7ffb
- (BOOL)brc_itemType;	// IMP=0x00000000000f7ec9
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00000000000f7eb7
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f7c43
- (id)brc_itemIDWithSession:(id)arg1;	// IMP=0x00000000000f7b1e
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00000000000f737a
- (_Bool)brc_isZoneRootRecordID;	// IMP=0x00000000000f72d1
- (id)brc_appLibraryDocumentsZoneName;	// IMP=0x00000000000f721b
- (_Bool)brc_isAppLibraryDocumentsRecordID;	// IMP=0x00000000000f71d0
- (id)brc_appLibraryRootZoneName;	// IMP=0x00000000000f711a
- (_Bool)brc_isAppLibraryRootRecordID;	// IMP=0x00000000000f70cf
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00000000000f6ec3
- (id)brc_shareItemID;	// IMP=0x00000000002c3ab6
- (id)brc_shareZoneName;	// IMP=0x00000000002c3a66
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;	// IMP=0x00000000002c39e4
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;	// IMP=0x00000000002c392e
- (id)initShareIDWithShareableItem:(id)arg1;	// IMP=0x00000000002c3876
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000000002c378d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
