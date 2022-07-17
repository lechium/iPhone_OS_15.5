//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/CNAutocompleteFetchDelegate-Protocol.h>

@class CNAutocompleteFetchContext, CNAutocompleteStore, CNCancelationToken, CNPromise, NSNumber, NSString;

@interface CNContactsAutocompleteSearchOperation <CNAutocompleteFetchDelegate>
{
    _Bool _includeContacts;	// 40 = 0x28
    _Bool _includeRecents;	// 41 = 0x29
    _Bool _includeSuggestions;	// 42 = 0x2a
    _Bool _includeServers;	// 43 = 0x2b
    _Bool _shouldUnifyResults;	// 44 = 0x2c
    _Bool _simulateResults;	// 45 = 0x2d
    CNCancelationToken *_fetchRequestToken;	// 48 = 0x30
    CNPromise *_fetchRequestPromise;	// 56 = 0x38
    NSNumber *_shouldIncludeGroupResults;	// 64 = 0x40
    CNAutocompleteFetchContext *_fetchContext;	// 72 = 0x48
    CNAutocompleteStore *_autocompleteStore;	// 80 = 0x50
}

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3 autocompleteStore:(id)arg4;	// IMP=0x000000000003dd83
- (void).cxx_destruct;	// IMP=0x0000000000040ab8
@property(retain, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(copy, nonatomic) CNAutocompleteFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property(nonatomic) _Bool simulateResults; // @synthesize simulateResults=_simulateResults;
@property(nonatomic) _Bool shouldUnifyResults; // @synthesize shouldUnifyResults=_shouldUnifyResults;
@property(retain, nonatomic) NSNumber *shouldIncludeGroupResults; // @synthesize shouldIncludeGroupResults=_shouldIncludeGroupResults;
@property(nonatomic) _Bool includeServers; // @synthesize includeServers=_includeServers;
@property(nonatomic) _Bool includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property(nonatomic) _Bool includeRecents; // @synthesize includeRecents=_includeRecents;
@property(nonatomic) _Bool includeContacts; // @synthesize includeContacts=_includeContacts;
@property(retain, nonatomic) CNPromise *fetchRequestPromise; // @synthesize fetchRequestPromise=_fetchRequestPromise;
@property(retain, nonatomic) CNCancelationToken *fetchRequestToken; // @synthesize fetchRequestToken=_fetchRequestToken;
- (void)autocompleteFetchDidFinish:(id)arg1;	// IMP=0x00000000000408e7
- (id)unifyingIdentifierForRecipient:(id)arg1;	// IMP=0x0000000000040894
- (id)unifyRecipientsIfNeccesary:(id)arg1;	// IMP=0x00000000000402b8
- (id)originContextForResult:(id)arg1;	// IMP=0x00000000000401a8
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;	// IMP=0x000000000003f82a
- (id)_simulatedRecipientResults;	// IMP=0x000000000003f643
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000003f623
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ed9b
- (void)main;	// IMP=0x000000000003e130
- (void)configureForSearchTypes:(unsigned long long)arg1;	// IMP=0x000000000003e0bc
- (void)cancel;	// IMP=0x000000000003e04e
- (id)init;	// IMP=0x000000000003de10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
