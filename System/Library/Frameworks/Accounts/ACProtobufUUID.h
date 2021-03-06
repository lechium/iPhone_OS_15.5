//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface ACProtobufUUID : PBCodable <NSCopying>
{
    NSString *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005a17a
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005a131
- (unsigned long long)hash;	// IMP=0x000000000005a114
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a07a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a002
- (void)copyTo:(id)arg1;	// IMP=0x0000000000059fdf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000059fc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000059fb5
- (id)dictionaryRepresentation;	// IMP=0x0000000000059de7
- (id)description;	// IMP=0x0000000000059d38
@property(retain, nonatomic) NSUUID *uuid;
- (id)initWithUUID:(id)arg1;	// IMP=0x000000000004f69c

@end

