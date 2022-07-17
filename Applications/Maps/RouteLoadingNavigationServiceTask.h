//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, MNNavigationServiceDirectionsRequestTicket, NSString, Result;
@protocol MNRouteRequestBuilder, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RouteLoadingNavigationServiceTask : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
    id <MNRouteRequestBuilder> _routeRequestBuilder;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 24 = 0x18
    unsigned long long _taskState;	// 32 = 0x20
    MNNavigationServiceDirectionsRequestTicket *_ticket;	// 40 = 0x28
    Result *_resultOnIsolationQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000006eced0
@property(retain, nonatomic) Result *resultOnIsolationQueue; // @synthesize resultOnIsolationQueue=_resultOnIsolationQueue;
@property(retain, nonatomic) MNNavigationServiceDirectionsRequestTicket *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned long long taskState; // @synthesize taskState=_taskState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(readonly, nonatomic) id <MNRouteRequestBuilder> routeRequestBuilder; // @synthesize routeRequestBuilder=_routeRequestBuilder;
@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, copy) NSString *description;
- (void)_createResultOnIsolationQueueWithRoutes:(id)arg1 error:(id)arg2 traceRecordingData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000006ec7e5
- (void)_handleNilNavdTicketOnIsolationQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000006ec4da
- (void)_createNavigationServiceTicketOnIsolationQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000006ebedf
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000006ebd02
- (void)cancel;	// IMP=0x00100000006ebb5d
@property(readonly, nonatomic) Result *result;
@property(readonly, nonatomic) _Bool inProgress;
- (void)dealloc;	// IMP=0x00100000006eb82f
- (id)initWithNavigationService:(id)arg1 routeRequestDetailsBuilder:(id)arg2;	// IMP=0x00100000006eb697

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
