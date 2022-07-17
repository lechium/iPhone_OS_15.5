//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDOperationMetrics, NSMutableDictionary, NSString;

@interface CKDOperationStatistics : NSObject <NSCopying>
{
    NSString *_operationClassName;	// 8 = 0x8
    NSMutableDictionary *_recentErrorsByDate;	// 16 = 0x10
    unsigned long long _operationCount;	// 24 = 0x18
    CKDOperationMetrics *_aggregateCKMetrics;	// 32 = 0x20
    CKDOperationMetrics *_aggregateMMCSMetrics;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000dab77
@property(readonly, nonatomic) CKDOperationMetrics *aggregateMMCSMetrics; // @synthesize aggregateMMCSMetrics=_aggregateMMCSMetrics;
@property(readonly, nonatomic) CKDOperationMetrics *aggregateCKMetrics; // @synthesize aggregateCKMetrics=_aggregateCKMetrics;
@property(readonly) unsigned long long operationCount; // @synthesize operationCount=_operationCount;
@property(readonly, nonatomic) NSMutableDictionary *recentErrorsByDate; // @synthesize recentErrorsByDate=_recentErrorsByDate;
@property(readonly, nonatomic) NSString *operationClassName; // @synthesize operationClassName=_operationClassName;
- (id)CKStatusReportArray;	// IMP=0x00000000000da35b
- (void)merge:(id)arg1;	// IMP=0x00000000000d9e25
- (void)addOperation:(id)arg1;	// IMP=0x00000000000d98ec
- (id)_trimmedError:(id)arg1;	// IMP=0x00000000000d93cb
- (void)_addMetrics:(id)arg1 toAggregate:(id)arg2;	// IMP=0x00000000000d9206
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d90b4
- (id)initWithOperationClassName:(id)arg1;	// IMP=0x00000000000d9014

@end
