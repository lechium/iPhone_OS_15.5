//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface VenueSearchCardItem : NSObject
{
    MKMapItem *_venueMapItem;	// 8 = 0x8
    GEOSearchCategory *_venueSearchCategory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000089506d
@property(readonly, nonatomic) GEOSearchCategory *venueSearchCategory; // @synthesize venueSearchCategory=_venueSearchCategory;
@property(readonly, nonatomic) MKMapItem *venueMapItem; // @synthesize venueMapItem=_venueMapItem;
@property(readonly, nonatomic) _Bool isVenueItem;
@property(readonly, nonatomic) unsigned long long venueCardID;
@property(readonly, nonatomic) unsigned long long venueID;
- (id)initWithMapItem:(id)arg1 searchCategory:(id)arg2;	// IMP=0x0010000000894f1f
- (id)init;	// IMP=0x0010000000894f11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
