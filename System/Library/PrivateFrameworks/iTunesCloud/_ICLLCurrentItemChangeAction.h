//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLCurrentItemChangeAction : PBCodable <NSCopying>
{
    NSString *_itemId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c72aa
- (unsigned long long)hash;	// IMP=0x00000000000c728d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c71f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c717b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c7157
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c714a
- (id)dictionaryRepresentation;	// IMP=0x00000000000c70ee
- (id)description;	// IMP=0x00000000000c703f

@end
