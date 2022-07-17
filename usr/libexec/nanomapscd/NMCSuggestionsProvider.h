//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsRemoteSource, NSLock, NSMutableDictionary, NSString;
@protocol MapsSuggestionsFullResourceDepot, NMCSuggestionsProviderDelegate;

__attribute__((visibility("hidden")))
@interface NMCSuggestionsProvider : NSObject
{
    id <MapsSuggestionsFullResourceDepot> _resourceDepot;	// 8 = 0x8
    MapsSuggestionsRemoteSource *_connectionToDestinationd;	// 16 = 0x10
    NSMutableDictionary *_storage;	// 24 = 0x18
    unsigned long long _changeCount;	// 32 = 0x20
    NSLock *_lock;	// 40 = 0x28
    _Bool _hasOngoingRequest;	// 48 = 0x30
    id <NMCSuggestionsProviderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000037b41
@property(nonatomic) __weak id <NMCSuggestionsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hintRefreshOfType:(long long)arg1;	// IMP=0x0010000000037b14
- (_Bool)detachSource:(id)arg1;	// IMP=0x0010000000037b0c
- (_Bool)attachSource:(id)arg1;	// IMP=0x0010000000037b04
- (unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2;	// IMP=0x0010000000037915
- (unsigned long long)_replaceEntriesFromSource:(id)arg1 withEntries:(id)arg2;	// IMP=0x0010000000037313
- (unsigned long long)_mergeInEntries:(id)arg1 fromSource:(id)arg2;	// IMP=0x0010000000036dc4
- (id)_entriesForSource:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0010000000036c4b
- (_Bool)_isEntry:(id)arg1 probablyEqualToNewEntry:(id)arg2;	// IMP=0x00100000000368c5
- (void)_notifyDelegateOfChangesFinishingRequest:(_Bool)arg1;	// IMP=0x00100000000364df
- (void)_notifyDelegateOfChanges;	// IMP=0x00100000000364c8
- (void)cleanup;	// IMP=0x001000000003645f
- (void)requestBlob;	// IMP=0x0010000000036353
- (void)_disconnectFromDestinationd;	// IMP=0x0010000000036173
- (void)_connectToDestinationd;	// IMP=0x0010000000035faa
- (void)dealloc;	// IMP=0x0010000000035e49
- (id)initWithDelegate:(id)arg1 resourceDepot:(id)arg2;	// IMP=0x0010000000035d53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
