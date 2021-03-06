//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject
{
    NSMutableDictionary *_fetchOperationsByIdentifier;	// 8 = 0x8
    NSMutableDictionary *_fetchOperationsByUUID;	// 16 = 0x10
    NSMutableDictionary *_retryCountByIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000248702
- (void)resetRetryCountForIdentifier:(id)arg1;	// IMP=0x00000000002486ec
- (void)incrementRetryCountForIdentifier:(id)arg1;	// IMP=0x000000000024865e
- (long long)retryCountForIdentifier:(id)arg1;	// IMP=0x0000000000248616
- (id)allPendingIdentifiers;	// IMP=0x0000000000248554
- (id)fetchOperationForIdentifier:(id)arg1;	// IMP=0x000000000024853e
- (void)removeFetchOperation:(id)arg1;	// IMP=0x000000000024849a
- (void)addFetchOperation:(id)arg1;	// IMP=0x0000000000248353
- (id)init;	// IMP=0x00000000002482c7

@end

