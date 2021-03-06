//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSData, NSString;

@interface GEOAPReportRRLogRequest <GEOXPCRequest>
{
    NSData *_rrLogData;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x0000000000c402c5
- (void).cxx_destruct;	// IMP=0x0000000000c40527
@property(retain, nonatomic) NSData *rrLogData; // @synthesize rrLogData=_rrLogData;
- (_Bool)expectsReply;	// IMP=0x0000000000c404fa
- (_Bool)isValid;	// IMP=0x0000000000c404f2
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000c4041f
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c402f8
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000000c402d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

