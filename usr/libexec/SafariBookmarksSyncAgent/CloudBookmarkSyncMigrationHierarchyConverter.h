//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WBSBookmarkDBAccess;

@interface CloudBookmarkSyncMigrationHierarchyConverter : NSObject
{
    const void *_databaseRef;	// 8 = 0x8
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000072bb5
@property(readonly, nonatomic) id <WBSBookmarkDBAccess> databaseAccessor; // @synthesize databaseAccessor=_databaseAccessor;
@property(readonly, nonatomic) const void *databaseRef; // @synthesize databaseRef=_databaseRef;
- (id)_cloudKitRecordNameForBookmarkDAVServerSyncId:(id)arg1;	// IMP=0x0010000000072a92
- (void)_convertItem:(void *)arg1;	// IMP=0x0010000000072701
- (_Bool)convertRecordsForMigration;	// IMP=0x0010000000072390
- (void)dealloc;	// IMP=0x0010000000072351
- (id)initWithDatabase:(void *)arg1 databaseAccessor:(id)arg2;	// IMP=0x00100000000722c0

@end
