//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEOExternalRequestCounterInfo, NSString;

@interface GEOExternalRequestCounterIncrementRequest <GEOXPCRequest>
{
    GEOExternalRequestCounterInfo *_info;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x0000000000704106
- (void).cxx_destruct;	// IMP=0x00000000007042eb
@property(retain, nonatomic) GEOExternalRequestCounterInfo *info; // @synthesize info=_info;
- (_Bool)expectsReply;	// IMP=0x00000000007042be
- (_Bool)isValid;	// IMP=0x00000000007042b6
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000704219
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000704130
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x000000000070410e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

