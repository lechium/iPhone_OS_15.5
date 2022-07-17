//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogTransportOption : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000301bb
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003010e
- (unsigned long long)hash;	// IMP=0x00000000000300c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002fff9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ff5b
- (void)copyTo:(id)arg1;	// IMP=0x000000000002feea
- (void)writeTo:(id)arg1;	// IMP=0x000000000002fe83
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002fe76
- (id)dictionaryRepresentation;	// IMP=0x000000000002fc5f
- (id)description;	// IMP=0x000000000002fbb0

@end
