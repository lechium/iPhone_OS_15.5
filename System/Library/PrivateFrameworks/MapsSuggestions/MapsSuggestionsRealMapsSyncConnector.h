//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMapsSyncConnector-Protocol.h>
#import <MapsSuggestions/_TtP8MapsSync25MapsSyncDataQueryDelegate_-Protocol.h>

@class NSString, _TtC8MapsSync24MapsSyncHistoryItemQuery, _TtC8MapsSync25MapsSyncFavoriteItemQuery, _TtC8MapsSync34MapsSyncCollectionTransitItemQuery;
@protocol MapsSuggestionsMapsSyncConnectorDelegate;

@interface MapsSuggestionsRealMapsSyncConnector : NSObject <_TtP8MapsSync25MapsSyncDataQueryDelegate_, MapsSuggestionsMapsSyncConnector>
{
    id <MapsSuggestionsMapsSyncConnectorDelegate> _delegate;	// 8 = 0x8
    _TtC8MapsSync24MapsSyncHistoryItemQuery *_historyQuery;	// 16 = 0x10
    _TtC8MapsSync34MapsSyncCollectionTransitItemQuery *_transitItemQuery;	// 24 = 0x18
    _TtC8MapsSync25MapsSyncFavoriteItemQuery *_favoriteItemQuery;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000110368
@property(readonly, nonatomic) NSString *uniqueName;
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x0000000000110124
- (_Bool)allContentOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010fd5a
- (id)newReviewedPlace;	// IMP=0x000000000010fd0e
- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1;	// IMP=0x000000000010fcf5
@property(nonatomic) __weak id <MapsSuggestionsMapsSyncConnectorDelegate> delegate;
- (id)init;	// IMP=0x000000000010fc08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
