//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class GEOTransitRouteUpdateResponse, NSString;

@interface GEOTransitRouteUpdateReplySimple <GEOXPCReply>
{
    GEOTransitRouteUpdateResponse *_response;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000f3e4dc
@property(retain, nonatomic) GEOTransitRouteUpdateResponse *response; // @synthesize response=_response;
- (_Bool)isValid;	// IMP=0x0000000000f3e44b
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000f3e387
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000f3e286

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
