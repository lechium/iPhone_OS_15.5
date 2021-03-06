//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2StreamGroup : PBCodable <NSCopying>
{
    NSMutableArray *_payloads;	// 8 = 0x8
    unsigned int _streamGroup;	// 16 = 0x10
    NSMutableArray *_streams;	// 24 = 0x18
    struct {
        unsigned int streamGroup:1;
    } _has;	// 32 = 0x20
}

+ (Class)streamsType;	// IMP=0x00000000000be9bd
+ (Class)payloadsType;	// IMP=0x00000000000be908
+ (unsigned int)streamGroupIDFromStreamGroup:(unsigned int)arg1;	// IMP=0x000000000025b945
+ (unsigned int)streamGroupFromStreamGroupID:(unsigned int)arg1;	// IMP=0x000000000025b86f
+ (_Bool)isValidStreamGroupIDFromConfig:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x000000000025b7d8
+ (id)negotiationCipherSuiteAsString:(unsigned int)arg1;	// IMP=0x000000000025b76b
+ (void)updateParentStreamIDForGroupConfig:(id)arg1;	// IMP=0x000000000025b5de
+ (id)defaultsForStreamGroupCustom:(unsigned int)arg1;	// IMP=0x000000000025a4d4
+ (id)defaultsForStreamGroup:(unsigned int)arg1;	// IMP=0x000000000025a2bf
@property(retain, nonatomic) NSMutableArray *streams; // @synthesize streams=_streams;
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned int streamGroup; // @synthesize streamGroup=_streamGroup;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000bf853
- (unsigned long long)hash;	// IMP=0x00000000000bf7d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bf714
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf431
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bf2f8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bf113
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bf106
- (id)dictionaryRepresentation;	// IMP=0x00000000000bea68
- (id)description;	// IMP=0x00000000000be9ce
- (id)streamsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000be9a0
- (unsigned long long)streamsCount;	// IMP=0x00000000000be983
- (void)addStreams:(id)arg1;	// IMP=0x00000000000be936
- (void)clearStreams;	// IMP=0x00000000000be919
- (id)payloadsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000be8eb
- (unsigned long long)payloadsCount;	// IMP=0x00000000000be8ce
- (void)addPayloads:(id)arg1;	// IMP=0x00000000000be881
- (void)clearPayloads;	// IMP=0x00000000000be864
@property(nonatomic) _Bool hasStreamGroup;
- (void)dealloc;	// IMP=0x00000000000be7a5
- (void)updateDefaultPayloadConfigsWithConfig:(id)arg1 rtpSampleRates:(id)arg2;	// IMP=0x000000000025b408
- (_Bool)updatePayloadConfigsWithStreamGroupConfig:(id)arg1 rtpSampleRates:(id)arg2;	// IMP=0x000000000025b018
- (_Bool)setupPayloadsWithGroupConfig:(id)arg1;	// IMP=0x000000000025ad22
- (_Bool)isUsedPayloadConfigAtIndex:(id)arg1 streamGroupConfig:(id)arg2 rtpTimestampRate:(unsigned int *)arg3;	// IMP=0x000000000025ab9e
- (_Bool)setupStreamsWithGroupConfig:(id)arg1;	// IMP=0x000000000025a96f
- (id)customPayloadConfigStateWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000025a8a9
- (_Bool)isDefaultPayloadConfigsWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000025a6f4
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x0000000000259df4
- (_Bool)appendStreamsToStreamGroupConfig:(id)arg1 streamGroupID:(unsigned int)arg2 rtpSampleRates:(id)arg3;	// IMP=0x0000000000259644
- (int)getStreamGroupConfig:(id *)arg1;	// IMP=0x0000000000259168
- (id)initWithStreamGroupConfig:(id)arg1;	// IMP=0x0000000000258f77
- (id)initWithStreamGroupConfig:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x0000000000258b7c

@end

