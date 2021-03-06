//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItemIdentifier;
@protocol MKMapServiceCuratedCollectionItemsTicket, MKMapServiceCuratedCollectionTicket;

@interface MKPlaceCuratedCollectionRefiner : NSObject
{
    MKMapItemIdentifier *_collectionIdentifier;	// 8 = 0x8
    id <MKMapServiceCuratedCollectionTicket> _identifierRefinementTicket;	// 16 = 0x10
    id <MKMapServiceCuratedCollectionItemsTicket> _mapItemRefinementTicket;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003f997
- (void)_resolveMapItemsWithCollection:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003f49f
- (void)fetchWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ef87
- (id)initWithCollectionIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2;	// IMP=0x000000000003edde
- (id)initWithCollectionIdentifier:(unsigned long long)arg1;	// IMP=0x000000000003edca

@end

