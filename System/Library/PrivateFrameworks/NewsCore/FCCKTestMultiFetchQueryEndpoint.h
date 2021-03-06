//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKTestQueryEndpoint-Protocol.h>

@class NSString;

@interface FCCKTestMultiFetchQueryEndpoint : NSObject <FCCKTestQueryEndpoint>
{
}

- (id)_collectRecordIDsFromRecords:(id)arg1 linkKeysByRecordType:(id)arg2;	// IMP=0x00000000001f8601
- (id)_collectRecordsWithRecords:(id)arg1 recordIDs:(id)arg2 linkKeysByRecordType:(id)arg3 visitedRecordIDs:(id)arg4 missingRecordIDs:(id)arg5;	// IMP=0x00000000001f7fe8
- (void)handleQueryOperation:(id)arg1 withRecords:(id)arg2 droppedFeeds:(id)arg3;	// IMP=0x00000000001f71d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

