//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueFilterItem-Protocol.h>

@protocol GEOVenueIdentifier, GEOVenueLabel;

@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem>
{
    id <GEOVenueIdentifier> _filterID;	// 8 = 0x8
    id <GEOVenueLabel> _label;	// 16 = 0x10
    _Bool _describesParentVenue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001048eb2
@property(readonly, nonatomic) _Bool describesParentVenue; // @synthesize describesParentVenue=_describesParentVenue;
@property(readonly, nonatomic) id <GEOVenueLabel> label; // @synthesize label=_label;
@property(readonly, nonatomic) id <GEOVenueIdentifier> filterID; // @synthesize filterID=_filterID;
- (id)initWithFilterElementInfo:(id)arg1;	// IMP=0x0000000001048d8f
- (id)initWithLabel:(id)arg1 filterID:(id)arg2;	// IMP=0x0000000001048cf2
- (id)init;	// IMP=0x0000000001048cc8

@end

