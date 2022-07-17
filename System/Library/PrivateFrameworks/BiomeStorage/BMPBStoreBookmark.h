//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStorage/NSCopying-Protocol.h>

@class NSString;

@interface BMPBStoreBookmark : PBCodable <NSCopying>
{
    double _iterationStartTime;	// 8 = 0x8
    unsigned int _offset;	// 16 = 0x10
    NSString *_segmentName;	// 24 = 0x18
    NSString *_streamId;	// 32 = 0x20
    struct {
        unsigned int iterationStartTime:1;
        unsigned int offset:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000138bd
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) double iterationStartTime; // @synthesize iterationStartTime=_iterationStartTime;
@property(retain, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000137ad
- (unsigned long long)hash;	// IMP=0x0000000000013626
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013505
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013426
- (void)copyTo:(id)arg1;	// IMP=0x0000000000013382
- (void)writeTo:(id)arg1;	// IMP=0x00000000000132d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000132c8
- (id)dictionaryRepresentation;	// IMP=0x0000000000012edd
- (id)description;	// IMP=0x0000000000012e2e
@property(nonatomic) _Bool hasOffset;
@property(nonatomic) _Bool hasIterationStartTime;
@property(readonly, nonatomic) _Bool hasSegmentName;
@property(readonly, nonatomic) _Bool hasStreamId;

@end
