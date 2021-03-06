//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, CloudBookmarkAccountPropertiesStore, CloudBookmarkStore, NSArray, NSString;
@protocol WBSBookmarkDBAccess;

@interface CloudBookmarkDatabaseHandler : NSObject
{
    CloudBookmarkStore *_bookmarkStore;	// 8 = 0x8
    const void *_databaseRef;	// 16 = 0x10
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 24 = 0x18
    CloudBookmarkAccountPropertiesStore *_accountPropertiesStore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001dbad
@property(readonly, nonatomic) CloudBookmarkAccountPropertiesStore *accountPropertiesStore; // @synthesize accountPropertiesStore=_accountPropertiesStore;
@property(readonly, nonatomic) id <WBSBookmarkDBAccess> databaseAccessor; // @synthesize databaseAccessor=_databaseAccessor;
@property(readonly, nonatomic) const void *databaseRef; // @synthesize databaseRef=_databaseRef;
@property(readonly, nonatomic) CloudBookmarkStore *bookmarkStore; // @synthesize bookmarkStore=_bookmarkStore;
- (_Bool)shouldApplyReference:(id)arg1 withGeneration:(id)arg2 toAttribute:(id)arg3 inRecordWithName:(id)arg4;	// IMP=0x001000000001db7d
@property(readonly, copy, nonatomic) NSArray *itemConfigurations;
- (id)positionForCloudBookmarkWithRecordName:(id)arg1;	// IMP=0x001000000001db5f
- (id)generateIdentityHashWithComponents:(id)arg1;	// IMP=0x001000000001db57
@property(readonly, nonatomic) CKRecordZoneID *bookmarksRecordZoneID;
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (void)dealloc;	// IMP=0x001000000001daec
- (id)initWithBookmarkStore:(id)arg1 database:(void *)arg2 databaseAccessor:(id)arg3 accountPropertiesStore:(id)arg4;	// IMP=0x001000000001da12
- (id)init;	// IMP=0x001000000001da04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

