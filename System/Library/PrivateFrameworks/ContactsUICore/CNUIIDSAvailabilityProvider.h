//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSAvailabilityProvider-Protocol.h>

@class CNUIDSHandleAvailabilityCache, NSArray, NSString;
@protocol CNScheduler, CNUIIDSIDQueryControllerWrapper;

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider>
{
    id <CNUIIDSIDQueryControllerWrapper> _queryControllerWrapper;	// 8 = 0x8
    CNUIDSHandleAvailabilityCache *_faceTimeRequests;	// 16 = 0x10
    CNUIDSHandleAvailabilityCache *_iMessageRequests;	// 24 = 0x18
    CNUIDSHandleAvailabilityCache *_expanseRequests;	// 32 = 0x20
    NSArray *_requestFutures;	// 40 = 0x28
    id <CNScheduler> _resourceLock;	// 48 = 0x30
}

+ (id)makeExpanseRequestsCache;	// IMP=0x0000000000034a38
+ (id)makeIMessageRequestsCache;	// IMP=0x000000000003491b
+ (id)makeFaceTimeRequestsCache;	// IMP=0x00000000000347fe
- (void).cxx_destruct;	// IMP=0x000000000003592b
@property(retain, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(retain, nonatomic) NSArray *requestFutures; // @synthesize requestFutures=_requestFutures;
@property(retain, nonatomic) CNUIDSHandleAvailabilityCache *expanseRequests; // @synthesize expanseRequests=_expanseRequests;
@property(retain, nonatomic) CNUIDSHandleAvailabilityCache *iMessageRequests; // @synthesize iMessageRequests=_iMessageRequests;
@property(retain, nonatomic) CNUIDSHandleAvailabilityCache *faceTimeRequests; // @synthesize faceTimeRequests=_faceTimeRequests;
@property(retain, nonatomic) id <CNUIIDSIDQueryControllerWrapper> queryControllerWrapper; // @synthesize queryControllerWrapper=_queryControllerWrapper;
- (id)validateHandlesForExpanse:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x000000000003586f
- (id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x0000000000035855
- (id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x000000000003583e
- (id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3;	// IMP=0x00000000000352ce
- (id)cacheForService:(long long)arg1;	// IMP=0x000000000003529f
- (void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3;	// IMP=0x0000000000034b95
- (id)init;	// IMP=0x0000000000034b55
- (id)initWithQueryControllerWrapper:(id)arg1;	// IMP=0x00000000000346b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

