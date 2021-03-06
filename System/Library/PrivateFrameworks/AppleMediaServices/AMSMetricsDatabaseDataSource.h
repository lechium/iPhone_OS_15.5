//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSMetricsDataSource-Protocol.h>

@class AMSMetricsDatabase, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>
{
    AMSMetricsDatabase *_database;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    NSString *_currentLockKey;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000019f77b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *currentLockKey; // @synthesize currentLockKey=_currentLockKey;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (_Bool)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019f4e5
- (_Bool)skipEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019f290
- (_Bool)removeEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019f016
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ede9
- (void)didFinishBatching;	// IMP=0x000000000019eaeb
- (void)removeAllEvents;	// IMP=0x000000000019e842
- (id)enqueueEvents:(id)arg1;	// IMP=0x000000000019e4bd
- (void)cancel;	// IMP=0x000000000019e4b7
@property(readonly, nonatomic) AMSMetricsDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;	// IMP=0x000000000019df9f
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x000000000019df18

@end

