//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSString, _DKPRValue;

@interface _DKPRMetadataEntry : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    _DKPRValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000164c6c
- (unsigned long long)hash;	// IMP=0x0000000000164bed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000164b25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000164a87
- (void)writeTo:(id)arg1;	// IMP=0x00000000001649ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001649df
- (id)dictionaryRepresentation;	// IMP=0x000000000016473e
- (id)description;	// IMP=0x000000000016468f

@end

