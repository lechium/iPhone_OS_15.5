//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/TLTimelineDataSourceProvider-Protocol.h>

@class NSOperationQueue, NSString, NTKTimelineDataSourceWrapper;
@protocol CLKComplicationDataSource;

@interface NTKTimelineRemoteDataSourceProvider : NSObject <TLTimelineDataSourceProvider>
{
    NTKTimelineDataSourceWrapper *_wrapper;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009c81c
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NTKTimelineDataSourceWrapper *wrapper; // @synthesize wrapper=_wrapper;
- (void)tl_getDataSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009c75d
@property(readonly, nonatomic) id <CLKComplicationDataSource> dataSource;
- (void)getEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009c352
- (void)getCurrentEntryForComplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bf9c
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000009becd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

