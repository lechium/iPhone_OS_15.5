//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying>
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _persistentIDs;	// 8 = 0x8
    _Bool _shouldContain;	// 32 = 0x20
    struct {
        unsigned int shouldContain:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
- (unsigned long long)hash;	// IMP=0x00000000002d34ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d345e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d33dc
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d32ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d324c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d323f
- (id)dictionaryRepresentation;	// IMP=0x00000000002d3159
- (id)description;	// IMP=0x00000000002d30aa
- (void)setPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002d3093
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d2fc6
- (void)addPersistentIDs:(long long)arg1;	// IMP=0x00000000002d2fb2
- (void)clearPersistentIDs;	// IMP=0x00000000002d2fa1
@property(readonly, nonatomic) long long *persistentIDs;
@property(readonly, nonatomic) unsigned long long persistentIDsCount;
@property(nonatomic) _Bool hasShouldContain;
- (void)dealloc;	// IMP=0x00000000002d2ef9

@end

