//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOMapItemStorage, MapsSuggestionsContacts, NSNumber, NSString, PPConnectionsCriteria;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsPortraitConnector, OS_dispatch_queue;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject>
{
    id <MapsSuggestionsPortraitConnector> _connector;	// 8 = 0x8
    id <MapsSuggestionsNetworkRequester> _networkRequester;	// 16 = 0x10
    PPConnectionsCriteria *_criteria;	// 24 = 0x18
    NSString *_cachedKey;	// 32 = 0x20
    GEOMapItemStorage *_cachedMapItem;	// 40 = 0x28
    NSNumber *_cachedMapItemOrigin;	// 48 = 0x30
    MapsSuggestionsContacts *_contacts;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006e86d
- (id)fetchNamedEntitiesFromDate:(id)arg1;	// IMP=0x000000000006e012
- (_Bool)fetchConnectionEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000699f4
- (void)sendFeedbackforClientID:(id)arg1 storeType:(long long)arg2 explicitlyEngagedStrings:(id)arg3 explicitlyRejectedStrings:(id)arg4 implicitlyEngagedStrings:(id)arg5 implicitlyRejectedStrings:(id)arg6;	// IMP=0x0000000000069537
- (_Bool)fetchLocationEntriesForTray:(_Bool)arg1 currentLocation:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000673dd
- (id)initWithPortraitConnector:(id)arg1 networkRequester:(id)arg2 contacts:(id)arg3;	// IMP=0x0000000000067073
- (id)initFromResourceDepot:(id)arg1;	// IMP=0x0000000000066c5a
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
