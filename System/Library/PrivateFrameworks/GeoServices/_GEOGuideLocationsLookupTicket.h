//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceGuideLocationsLookupTicket-Protocol.h>

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOGuideLocationsLookupTicket <GEOMapServiceGuideLocationsLookupTicket>
{
    NSArray *_guideLocationEntries;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000072b433
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x000000000072adaf
- (id)initWithRequest:(id)arg1 traits:(id)arg2 guideLocationsEntries:(id)arg3;	// IMP=0x000000000072ad2d

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

