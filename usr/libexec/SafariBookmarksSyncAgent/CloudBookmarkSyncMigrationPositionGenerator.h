//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol WBSBookmarkDBAccess;

@interface CloudBookmarkSyncMigrationPositionGenerator : NSObject
{
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 8 = 0x8
    NSDictionary *_recordNamesToChildRecordNames;	// 16 = 0x10
    NSDictionary *_recordNamesToChildFolderRecordNames;	// 24 = 0x18
    NSDictionary *_recordNamesToPositions;	// 32 = 0x20
    const void *_databaseRef;	// 40 = 0x28
    NSString *_rootRecordName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000058253
@property(copy, nonatomic) NSString *rootRecordName; // @synthesize rootRecordName=_rootRecordName;
@property(readonly, nonatomic) const void *databaseRef; // @synthesize databaseRef=_databaseRef;
- (id)recordNameEnumerator;	// IMP=0x0010000000058209
- (id)_existingPositionForRecordWithName:(id)arg1 getIsFolder:(_Bool *)arg2;	// IMP=0x0010000000058157
- (id)_recordNamesToGeneratePositionsForInRecordNames:(id)arg1 inParentRecordName:(id)arg2 getFolderRecordNames:(id *)arg3 getLastValidPosition:(id *)arg4;	// IMP=0x0010000000057bd1
- (id)_generatePositionsForChildRecordNames:(id)arg1 withStartingPosition:(id)arg2;	// IMP=0x00100000000578c9
- (id)_childRecordNamesInParentServerSyncId:(id)arg1;	// IMP=0x00100000000577f2
- (void)_generateRecordPositions;	// IMP=0x0010000000057432
- (id)positionForRecordName:(id)arg1;	// IMP=0x001000000005741c
- (id)childFolderRecordNamesForRecordName:(id)arg1;	// IMP=0x0010000000057406
- (id)childRecordNamesForRecordName:(id)arg1;	// IMP=0x00100000000573f0
- (void)dealloc;	// IMP=0x0010000000057309
- (id)initWithDatabase:(void *)arg1 databaseAccessor:(id)arg2;	// IMP=0x0010000000057278

@end
