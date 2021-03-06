//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAutocompleteStoreQueryContext, CNAutocompleteUserSession;
@protocol CNAutocompleteFetchDelegate, CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStoreQueryHelper : NSObject
{
    id <CNAutocompleteSearchProvider> _searchProvider;	// 8 = 0x8
    id <CNAutocompleteFetchDelegate> _delegate;	// 16 = 0x10
    id <CNScheduler> _scheduler;	// 24 = 0x18
    CNAutocompleteStoreQueryContext *_queryContext;	// 32 = 0x20
    id <CNAutocompleteProbeProvider> _probeProvider;	// 40 = 0x28
    CNAutocompleteUserSession *_userSession;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002ddcf
@property(readonly, nonatomic) CNAutocompleteUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(readonly, nonatomic) CNAutocompleteStoreQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) __weak id <CNAutocompleteFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CNAutocompleteSearchProvider> searchProvider; // @synthesize searchProvider=_searchProvider;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3;	// IMP=0x000000000002db5a
- (id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5;	// IMP=0x000000000002da27

@end

