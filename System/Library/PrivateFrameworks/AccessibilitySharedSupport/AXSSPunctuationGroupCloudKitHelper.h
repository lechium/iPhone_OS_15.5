//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer;

__attribute__((visibility("hidden")))
@interface AXSSPunctuationGroupCloudKitHelper
{
    AXDispatchTimer *_changeCoalescer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001c5d3
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;	// IMP=0x000000000001c13c
- (void)punctuationGroupsChanged:(id)arg1;	// IMP=0x000000000001bf13
- (void)beginWatchingForChanges;	// IMP=0x000000000001be1c
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b1c2
- (void)clearRecordsForPurging:(id)arg1;	// IMP=0x000000000001af3d
- (id)createCKRecordFromObject:(id)arg1;	// IMP=0x000000000001ad15
- (id)createCKRecordFromGroup:(id)arg1;	// IMP=0x000000000001aaed
- (id)testRecordForSchemaCreation:(id)arg1;	// IMP=0x000000000001aa2b
- (id)apsEnvironment;	// IMP=0x000000000001aa17
- (void)dealloc;	// IMP=0x000000000001a9a2
- (Class)managedObjectClass;	// IMP=0x000000000001a991
- (id)recordType;	// IMP=0x000000000001a984

@end
