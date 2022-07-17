//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface WFREPBKeyValuePair : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSData *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e18a4
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e17f7
- (unsigned long long)hash;	// IMP=0x00000000002e17aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e16e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e1644
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e15d3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e1538
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e152b
- (id)dictionaryRepresentation;	// IMP=0x00000000002e14a8
- (id)description;	// IMP=0x00000000002e13f9

@end
