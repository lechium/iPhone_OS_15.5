//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKMergeableValueID.h>

@class CKRecordID, CKRecordZoneID, NSString;

@interface CKMergeableValueID (CloudKit)
@property(readonly, nonatomic) NSString *fieldName;
@property(readonly, nonatomic) CKRecordID *recordID;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
- (id)initWithName:(id)arg1 recordID:(id)arg2 fieldName:(id)arg3 encrypted:(_Bool)arg4;	// IMP=0x000000000012cb28
- (id)initWithName:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000000012c9f7
@end
