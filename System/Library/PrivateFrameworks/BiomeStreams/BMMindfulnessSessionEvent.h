//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMMindfulnessSessionEvent <BMStoreData, BMProtoBufWrapper>
{
    unsigned long long _sessionType;	// 8 = 0x8
    unsigned long long _stateType;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000009c277
@property(nonatomic) unsigned long long stateType; // @synthesize stateType=_stateType;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c7e0
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000009c5aa
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000009c50e
- (id)initWithProto:(id)arg1;	// IMP=0x000000000009c322
- (id)encodeAsProto;	// IMP=0x000000000009c2d2
- (id)serialize;	// IMP=0x000000000009c2c0
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithSessionType:(unsigned long long)arg1 stateType:(unsigned long long)arg2;	// IMP=0x000000000009c15d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
