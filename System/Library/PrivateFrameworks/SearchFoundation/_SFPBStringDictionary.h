//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBStringDictionary-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding>
{
    NSArray *_keyValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012231e
@property(copy, nonatomic) NSArray *keyValues; // @synthesize keyValues=_keyValues;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001220a1
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000121fe3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000121ced
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000121b4e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000121a1a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000121a0d
- (id)keyValuesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001219f0
- (unsigned long long)keyValuesCount;	// IMP=0x00000000001219d3
- (void)addKeyValues:(id)arg1;	// IMP=0x0000000000121959
- (void)clearKeyValues;	// IMP=0x000000000012193c
- (id)initWithNSDictionary:(id)arg1;	// IMP=0x00000000001d0e25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

