//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSQuery-Protocol.h>
#import <ClassKit/NSLocking-Protocol.h>

@class CLSSearchSpecification, NSDate, NSMutableArray, NSString;

@interface CLSQuery <NSLocking, CLSQuery>
{
    NSMutableArray *_results;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _executing;	// 20 = 0x14
    _Bool _shouldAddResultsToDataStore;	// 21 = 0x15
    _Bool _shouldFaultResults;	// 22 = 0x16
    long long _fetchLimit;	// 24 = 0x18
    CLSSearchSpecification *_searchSpec;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    unsigned long long _state;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
}

+ (id)queryWithSearchSpecification:(id)arg1;	// IMP=0x000000000001e889
+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e811
+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2;	// IMP=0x000000000001e722
+ (id)queryWithQuerySpecification:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000001e6a7
- (void).cxx_destruct;	// IMP=0x000000000001fcad
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool shouldFaultResults; // @synthesize shouldFaultResults=_shouldFaultResults;
@property(nonatomic) _Bool shouldAddResultsToDataStore; // @synthesize shouldAddResultsToDataStore=_shouldAddResultsToDataStore;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) CLSSearchSpecification *searchSpec; // @synthesize searchSpec=_searchSpec;
@property(nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2;	// IMP=0x000000000001f882
- (void)_notifyOfCompletionWithError:(id)arg1;	// IMP=0x000000000001f5d1
- (void)_faultResultsAndComplete;	// IMP=0x000000000001f28f
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000001f16d
- (oneway void)clientRemote_deliverObject:(id)arg1;	// IMP=0x000000000001ef39
- (oneway void)clientRemote_invalidate;	// IMP=0x000000000001ee6f
- (void)reset;	// IMP=0x000000000001ee5a
@property(readonly, copy) NSString *description;
- (void)unlock;	// IMP=0x000000000001ecdf
- (void)lock;	// IMP=0x000000000001ecce
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001ec2a
- (id)initWithSearchSpecification:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001eb77
- (id)initWithQuerySpecification:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000001ea6c
- (id)initWithQuerySpecification:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e99b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

