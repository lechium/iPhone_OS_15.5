//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class NSString;

@interface GEOAPEvalSetModeReply <GEOXPCReply>
{
    _Bool _previousEnabledState;	// 32 = 0x20
}

@property(nonatomic) _Bool previousEnabledState; // @synthesize previousEnabledState=_previousEnabledState;
- (_Bool)isValid;	// IMP=0x0000000000c40ab4
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000c40a3e
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c409b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

