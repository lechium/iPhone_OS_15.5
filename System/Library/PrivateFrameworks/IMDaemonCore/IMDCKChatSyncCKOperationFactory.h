//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDCKChatSyncCKOperationFactory : NSObject
{
}

- (id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1;	// IMP=0x0000000000050b4a
- (id)saveChatsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2;	// IMP=0x00000000000509ef
- (id)_chatWriteRecordsCKConfiguration:(id)arg1;	// IMP=0x0000000000050968
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 activity:(id)arg4;	// IMP=0x0000000000050946
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4 activity:(id)arg5;	// IMP=0x00000000000507e7
- (id)_chatSyncOperationGroup;	// IMP=0x00000000000507d3
- (id)_chatSyncOperationGroupWithName:(id)arg1;	// IMP=0x0000000000050773
- (id)_chatFetchRecordZoneChangesCKConfiguration:(id)arg1;	// IMP=0x00000000000506ec
- (id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;	// IMP=0x0000000000050642

@end
