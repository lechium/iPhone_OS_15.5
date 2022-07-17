//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBMicroLocationTruthTagEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_clientBundleId;	// 16 = 0x10
    NSString *_recordingRequestIdentifier;	// 24 = 0x18
    NSString *_truthTagIdentifier;	// 32 = 0x20
    CDStruct_d3e759b0 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000004c80
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(retain, nonatomic) NSString *recordingRequestIdentifier; // @synthesize recordingRequestIdentifier=_recordingRequestIdentifier;
@property(retain, nonatomic) NSString *truthTagIdentifier; // @synthesize truthTagIdentifier=_truthTagIdentifier;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000004b58
- (unsigned long long)hash;	// IMP=0x00000000000049dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000048a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000047bc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000004715
- (void)writeTo:(id)arg1;	// IMP=0x0000000000004675
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000004668
- (id)dictionaryRepresentation;	// IMP=0x0000000000004321
- (id)description;	// IMP=0x0000000000004272
@property(readonly, nonatomic) _Bool hasClientBundleId;
@property(readonly, nonatomic) _Bool hasRecordingRequestIdentifier;
@property(readonly, nonatomic) _Bool hasTruthTagIdentifier;
@property(nonatomic) _Bool hasAbsoluteTimestamp;

@end
