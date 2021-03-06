//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceTransitLineTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceTransitLineTicket;

__attribute__((visibility("hidden")))
@interface _MKTransitLineTicket : NSObject <MKMapServiceTransitLineTicket>
{
    id <GEOMapServiceTransitLineTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000fb6ec
- (void)cancel;	// IMP=0x00000000000fb6d6
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fb4e4
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000fb463

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

