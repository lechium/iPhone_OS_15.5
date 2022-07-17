//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearchObservableProvider-Protocol.h>

@class CNAutocompleteFetchRequest, NSString;
@protocol CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider>
{
    id <CNAutocompleteSearchProvider> _searchProvider;	// 8 = 0x8
    CNAutocompleteFetchRequest *_fetchRequest;	// 16 = 0x10
    id <CNScheduler> _scheduler;	// 24 = 0x18
}

+ (id)providerWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;	// IMP=0x00000000000103d1
- (void).cxx_destruct;	// IMP=0x00000000000110ba
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) id <CNAutocompleteSearchProvider> searchProvider; // @synthesize searchProvider=_searchProvider;
- (id)observableWithWrappedSearchProviderGetter:(CDUnknownBlockType)arg1 name:(id)arg2;	// IMP=0x0000000000010dd6
- (id)calendarServersSearchObservable;	// IMP=0x0000000000010d09
- (id)directoryServersSearchObservable;	// IMP=0x0000000000010c3c
- (id)localExtensionSearchObservables;	// IMP=0x0000000000010acd
- (_Bool)shouldAllowPredictionSearchToSourceResults;	// IMP=0x00000000000109c9
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1;	// IMP=0x000000000001078f
- (id)suggestionsSearchObservable;	// IMP=0x00000000000106c2
- (id)recentsSearchObservable;	// IMP=0x00000000000105f5
- (id)localSearchObservable;	// IMP=0x0000000000010528
- (id)initWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;	// IMP=0x000000000001045f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
