//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNUniqueObservationClassCompoundRequest
{
    NSMapTable *_requestToObservationClassMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002476d9
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x00000000002472ae
- (id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2;	// IMP=0x0000000000247236
- (id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2;	// IMP=0x00000000002470d5

@end
