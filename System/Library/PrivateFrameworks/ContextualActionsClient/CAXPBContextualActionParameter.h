//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContextualActionsClient/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CAXPBContextualActionParameter : PBCodable <NSCopying>
{
    NSData *_parameterMetadata;	// 8 = 0x8
    NSString *_parameterType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000097f0
@property(retain, nonatomic) NSData *parameterMetadata; // @synthesize parameterMetadata=_parameterMetadata;
@property(retain, nonatomic) NSString *parameterType; // @synthesize parameterType=_parameterType;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000009743
- (unsigned long long)hash;	// IMP=0x00000000000096f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000962e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009590
- (void)copyTo:(id)arg1;	// IMP=0x0000000000009532
- (void)writeTo:(id)arg1;	// IMP=0x00000000000094d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000094c3
- (id)dictionaryRepresentation;	// IMP=0x00000000000092ae
- (id)description;	// IMP=0x00000000000091ff
@property(readonly, nonatomic) _Bool hasParameterMetadata;

@end
