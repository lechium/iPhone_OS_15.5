//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBSoundDetectionEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_soundDetectionType;	// 24 = 0x18
    CDStruct_d3e759b0 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000abe5e
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *soundDetectionType; // @synthesize soundDetectionType=_soundDetectionType;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000abd7b
- (unsigned long long)hash;	// IMP=0x00000000000abc17
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000abb1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aba57
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ab9d0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ab94d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ab940
- (id)dictionaryRepresentation;	// IMP=0x00000000000ab658
- (id)description;	// IMP=0x00000000000ab5a9
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasSoundDetectionType;
@property(nonatomic) _Bool hasAbsoluteTimestamp;

@end

