//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLRevisionHash : PBCodable <NSCopying>
{
    NSString *_hashValue;	// 8 = 0x8
    int _revision;	// 16 = 0x10
    int _type;	// 20 = 0x14
    struct {
        unsigned int revision:1;
        unsigned int type:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012d62b
- (unsigned long long)hash;	// IMP=0x000000000012d5b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012d4c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012d411
- (void)writeTo:(id)arg1;	// IMP=0x000000000012d385
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012d0e5
- (id)dictionaryRepresentation;	// IMP=0x000000000012cfc9
- (id)description;	// IMP=0x000000000012cf1a

@end

