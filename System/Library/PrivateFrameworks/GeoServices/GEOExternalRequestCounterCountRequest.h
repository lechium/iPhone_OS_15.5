//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOExternalRequestCounterCountRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;	// IMP=0x00000000007042fe
- (_Bool)expectsReply;	// IMP=0x00000000007043b6
- (_Bool)isValid;	// IMP=0x00000000007043ae
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x000000000070437f
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000704331
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x000000000070430f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

