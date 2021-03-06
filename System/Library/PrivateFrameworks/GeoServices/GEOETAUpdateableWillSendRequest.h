//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOETAUpdateableWillSendRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;	// IMP=0x000000000099b232
- (_Bool)expectsReply;	// IMP=0x000000000099b2c8
- (_Bool)isValid;	// IMP=0x000000000099b2c0
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x000000000099b291
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000099b243

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

