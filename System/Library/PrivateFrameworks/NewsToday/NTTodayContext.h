//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsToday/NTTodayContext-Protocol.h>

@class FCAsyncSerialQueue, NSString, NTSourceAvailabilityManager;
@protocol FCContentContext, FCReadablePrivateDataStorage, FCWritablePrivateDataStorage, NTTodayResultsSource, OS_dispatch_queue;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>
{
    CDUnknownBlockType _newResultsHandler;	// 8 = 0x8
    id <FCContentContext> _contentContext;	// 16 = 0x10
    id <FCReadablePrivateDataStorage> _readablePrivateDataStorage;	// 24 = 0x18
    id <FCWritablePrivateDataStorage> _writablePrivateDataStorage;	// 32 = 0x20
    NTSourceAvailabilityManager *_sourceAvailabilityManager;	// 40 = 0x28
    id <NTTodayResultsSource> _todayResultsSource;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_accessQueue;	// 56 = 0x38
    FCAsyncSerialQueue *_fetchQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000023d0e
@property(readonly, nonatomic) FCAsyncSerialQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) id <NTTodayResultsSource> todayResultsSource; // @synthesize todayResultsSource=_todayResultsSource;
@property(retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager; // @synthesize sourceAvailabilityManager=_sourceAvailabilityManager;
@property(retain, nonatomic) id <FCWritablePrivateDataStorage> writablePrivateDataStorage; // @synthesize writablePrivateDataStorage=_writablePrivateDataStorage;
@property(retain, nonatomic) id <FCReadablePrivateDataStorage> readablePrivateDataStorage; // @synthesize readablePrivateDataStorage=_readablePrivateDataStorage;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) CDUnknownBlockType newResultsHandler; // @synthesize newResultsHandler=_newResultsHandler;
- (void)_setupTodayResultsSource;	// IMP=0x0000000000023b54
- (void)writeUserDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000239d1
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023752
- (id)placeholderResultsWithOperationInfo:(id)arg1;	// IMP=0x0000000000023677
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000233fd
- (void)fetchModuleDescriptorsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022f41
- (void)networkReachabilityDidChange:(id)arg1;	// IMP=0x0000000000022e43
- (id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4;	// IMP=0x0000000000022bbb
- (id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4;	// IMP=0x0000000000022507
- (id)init;	// IMP=0x00000000000223c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

