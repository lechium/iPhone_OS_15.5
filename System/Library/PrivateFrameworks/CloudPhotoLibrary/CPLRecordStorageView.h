//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLRecordStorageView : NSObject
{
}

- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000e9eb6
- (id)recordViewWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000e9de4
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class *)arg3 error:(id *)arg4;	// IMP=0x00000000000ac1d5
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 record:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000abe4c
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000ab6a2
- (id)compactedBatchFromExpandedBatch:(id)arg1;	// IMP=0x00000000000aae87
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000aad27
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000aacf4
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000aaca4

@end
