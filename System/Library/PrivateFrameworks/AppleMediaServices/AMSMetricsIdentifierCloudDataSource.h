//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject
{
    id <AMSMetricsIdentifierCloudDataSourceDelegate> _delegate;	// 8 = 0x8
}

+ (id)_sharedQueue;	// IMP=0x00000000001a9d88
+ (id)_database;	// IMP=0x00000000001a95e5
+ (void)removeAllRecords;	// IMP=0x00000000001a863a
+ (void)clearSyncState;	// IMP=0x00000000001a7cfa
+ (void)cleanupIdentifiers;	// IMP=0x00000000001a7ce1
- (void).cxx_destruct;	// IMP=0x00000000001a9dc8
@property(nonatomic) __weak id <AMSMetricsIdentifierCloudDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_parseRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a95fe
- (id)_createRecordForIdentifier:(id)arg1;	// IMP=0x00000000001a93a3
- (id)_createRecordForIdentifierStore:(id)arg1;	// IMP=0x00000000001a9150
- (void)saveRecord:(id)arg1 isServerRecord:(_Bool)arg2;	// IMP=0x00000000001a8b13
- (void)removeRecordWithIdentifier:(id)arg1;	// IMP=0x00000000001a8855
- (void)fetchModifiedRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a7f05

@end

