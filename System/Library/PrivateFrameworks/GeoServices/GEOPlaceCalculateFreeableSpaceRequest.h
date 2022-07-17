//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOPlaceCalculateFreeableSpaceRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;	// IMP=0x0000000001081457
- (_Bool)expectsReply;	// IMP=0x000000000108150f
- (_Bool)isValid;	// IMP=0x0000000001081507
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x00000000010814d8
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000108148a
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000001081468

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
