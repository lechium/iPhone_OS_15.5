//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPTraceCollectionResponse : PBCodable <NSCopying>
{
    NSString *_msg;	// 8 = 0x8
    _Bool _success;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000054a03
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005498d
- (unsigned long long)hash;	// IMP=0x0000000000054951
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005489f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054819
- (void)copyTo:(id)arg1;	// IMP=0x00000000000547e2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054789
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005477c
- (id)dictionaryRepresentation;	// IMP=0x00000000000544b8
- (id)description;	// IMP=0x0000000000054409
@property(readonly, nonatomic) _Bool hasMsg;

@end

