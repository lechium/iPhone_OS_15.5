//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServicePhotoLookupTicket-Protocol.h>

@class GEOMapItemIdentifier, GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlacePhotoLookupTicket <GEOMapServicePhotoLookupTicket>
{
    NSString *_vendorIdentifier;	// 72 = 0x48
    GEOMapItemIdentifier *_mapItemIdentifier;	// 80 = 0x50
    struct _NSRange _range;	// 88 = 0x58
    GEOMapServiceTraits *_traits;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000721d5f
- (void)cancel;	// IMP=0x0000000000721cd9
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x0000000000721a0c
- (id)initWithVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(struct _NSRange)arg3 traits:(id)arg4;	// IMP=0x00000000007218c9

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

