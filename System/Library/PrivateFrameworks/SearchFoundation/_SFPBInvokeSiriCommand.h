//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBInvokeSiriCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBInvokeSiriCommand : PBCodable <_SFPBInvokeSiriCommand, NSSecureCoding>
{
    NSString *_utteranceText;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a978a
@property(copy, nonatomic) NSString *utteranceText; // @synthesize utteranceText=_utteranceText;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a968f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a95d1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a94b1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a9312
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a92aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a929d
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000018882b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
