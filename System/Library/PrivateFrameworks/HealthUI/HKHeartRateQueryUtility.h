//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSMutableDictionary;
@protocol HKHeartRateQueryHandler, OS_dispatch_queue;

@interface HKHeartRateQueryUtility : NSObject
{
    id <HKHeartRateQueryHandler> _queryHandler;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    long long _timeScope;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_clientQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_resourceQueue;	// 40 = 0x28
    NSMutableDictionary *_sampleResults;	// 48 = 0x30
    CDUnknownBlockType _resultsHandler;	// 56 = 0x38
}

+ (id)_orderedDisplayTypeContextResults:(id)arg1;	// IMP=0x0000000000004e82
+ (id)_minMaxStatisticsFromChartPoints:(id)arg1 dateInterval:(id)arg2;	// IMP=0x00000000000049cd
+ (void)enumerateDisplayTypeContextsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000049a9
- (void).cxx_destruct;	// IMP=0x0000000000005097
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(retain, nonatomic) NSMutableDictionary *sampleResults; // @synthesize sampleResults=_sampleResults;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) __weak id <HKHeartRateQueryHandler> queryHandler; // @synthesize queryHandler=_queryHandler;
- (void)setupQueries;	// IMP=0x000000000000425e
- (id)initWithQueryHandler:(id)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000040e4

@end
