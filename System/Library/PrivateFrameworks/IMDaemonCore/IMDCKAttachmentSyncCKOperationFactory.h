//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
{
}

+ (id)_desiredKeysArrayForType:(long long)arg1;	// IMP=0x00000000000418bd
- (id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1;	// IMP=0x0000000000041989
- (id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4;	// IMP=0x00000000000417da
- (id)_operationGroupWithName:(id)arg1;	// IMP=0x00000000000417a2
- (_Bool)_defaultsSayWeHaveSyncedOnce;	// IMP=0x0000000000041760
- (id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 activity:(id)arg3;	// IMP=0x00000000000415e1
- (id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 activity:(id)arg4;	// IMP=0x00000000000414bf
- (id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 activity:(id)arg6;	// IMP=0x0000000000041354

@end

