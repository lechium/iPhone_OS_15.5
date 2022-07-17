//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAutocompleteFetchRequest, CNAutocompleteUsageMonitor, NSDate, _CNAutocompleteUserSessionDisplayedResults;
@protocol CNAutocompleteProbeProvider, CNFuture, OS_dispatch_queue;

@interface CNAutocompleteUserSession : NSObject
{
    id <CNAutocompleteProbeProvider> _probeProvider;	// 8 = 0x8
    CNAutocompleteFetchRequest *_currentRequest;	// 16 = 0x10
    unsigned long long _currentBatch;	// 24 = 0x18
    _CNAutocompleteUserSessionDisplayedResults *_lastDisplayedResults;	// 32 = 0x20
    NSDate *_requestStartTime;	// 40 = 0x28
    CNAutocompleteUsageMonitor *_usageMonitor;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncQueue;	// 56 = 0x38
    id <CNFuture> _duetResultsFuture;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003d50
@property(retain, nonatomic) id <CNFuture> duetResultsFuture; // @synthesize duetResultsFuture=_duetResultsFuture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) CNAutocompleteUsageMonitor *usageMonitor; // @synthesize usageMonitor=_usageMonitor;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) _CNAutocompleteUserSessionDisplayedResults *lastDisplayedResults; // @synthesize lastDisplayedResults=_lastDisplayedResults;
@property(nonatomic) unsigned long long currentBatch; // @synthesize currentBatch=_currentBatch;
@property(retain, nonatomic) CNAutocompleteFetchRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
- (void)_resetState;	// IMP=0x0000000000003c29
- (void)didSelectResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;	// IMP=0x0000000000003987
- (void)didReceiveResults:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000003295
- (void)willStartExecutingRequest:(id)arg1;	// IMP=0x0000000000002c4b
- (void)willStartDuetRequestWithMatchingResultsFuture:(id)arg1;	// IMP=0x0000000000002b57
- (id)initWithProbeProvider:(id)arg1;	// IMP=0x0000000000002a68

@end
