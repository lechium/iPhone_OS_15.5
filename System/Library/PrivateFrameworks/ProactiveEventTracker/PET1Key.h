//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@class NSString;

@interface PET1Key : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b72b
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000b6e2
- (unsigned long long)hash;	// IMP=0x000000000000b6c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b62b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b5b3
- (void)copyTo:(id)arg1;	// IMP=0x000000000000b589
- (void)writeTo:(id)arg1;	// IMP=0x000000000000b565
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000b558
- (id)dictionaryRepresentation;	// IMP=0x000000000000b4fc
- (id)description;	// IMP=0x000000000000b44d
@property(readonly, nonatomic) _Bool hasKey;

@end
