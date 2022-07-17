//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPActionItemForFeedback-Protocol.h>

@class NSData, NSString, _CPPunchoutForFeedback;

@interface _CPActionItemForFeedback : PBCodable <_CPActionItemForFeedback, NSSecureCoding>
{
    _CPPunchoutForFeedback *_punchout;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ad18
@property(retain, nonatomic) _CPPunchoutForFeedback *punchout; // @synthesize punchout=_punchout;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ab68
- (void)writeTo:(id)arg1;	// IMP=0x000000000003aae1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003aad4
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000008bd78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end
