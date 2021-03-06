//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBTagSet : PBCodable
{
    NSMutableArray *_tags;	// 8 = 0x8
}

+ (Class)tagsType;	// IMP=0x002000000009b54a
+ (id)options;	// IMP=0x001000000009b439
- (void).cxx_destruct;	// IMP=0x002000000009bdcc
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000009bc72
- (unsigned long long)hash;	// IMP=0x001000000009bc55
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009bbbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009b9f8
- (void)copyTo:(id)arg1;	// IMP=0x001000000009b931
- (void)writeTo:(id)arg1;	// IMP=0x001000000009b801
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009b7f4
- (id)dictionaryRepresentation;	// IMP=0x001000000009b60a
- (id)description;	// IMP=0x001000000009b55b
- (id)tagsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000009b52d
- (unsigned long long)tagsCount;	// IMP=0x001000000009b510
- (void)addTags:(id)arg1;	// IMP=0x001000000009b4a6
- (void)clearTags;	// IMP=0x001000000009b489

@end

