//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMPOICategoryEvent <BMStoreData, BMProtoBufWrapper>
{
    NSString *_poiCategory;	// 8 = 0x8
    unsigned long long _rank;	// 16 = 0x10
    double _timeIntervalSince1970;	// 24 = 0x18
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000002a349
- (void).cxx_destruct;	// IMP=0x000000000002aa7e
@property(nonatomic) double timeIntervalSince1970; // @synthesize timeIntervalSince1970=_timeIntervalSince1970;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *poiCategory; // @synthesize poiCategory=_poiCategory;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a86e
- (id)proto;	// IMP=0x000000000002a7d3
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000002a737
- (id)initWithProto:(id)arg1;	// IMP=0x000000000002a5f5
- (id)encodeAsProto;	// IMP=0x000000000002a5a5
- (id)json;	// IMP=0x000000000002a4e5
- (id)jsonDict;	// IMP=0x000000000002a3a4
- (id)serialize;	// IMP=0x000000000002a392
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithPOICategory:(id)arg1 rank:(unsigned long long)arg2 timeIntervalSince1970:(double)arg3;	// IMP=0x000000000002a26d
- (id)init;	// IMP=0x000000000002a267

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

