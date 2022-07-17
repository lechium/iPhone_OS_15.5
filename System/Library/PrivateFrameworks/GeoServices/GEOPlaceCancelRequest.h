//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString, NSUUID;

@interface GEOPlaceCancelRequest <GEOXPCRequest>
{
    NSUUID *_requestUUID;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x00000000010806f6
- (void).cxx_destruct;	// IMP=0x00000000010808ec
@property(retain, nonatomic) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
- (_Bool)expectsReply;	// IMP=0x00000000010808bf
- (_Bool)isValid;	// IMP=0x000000000108088c
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x00000000010807e0
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001080720
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x00000000010806fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
