//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString, NSUUID;

@interface BMMicroLocationTruthTagEvent : NSObject <BMStoreData, BMProtoBufWrapper>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_clientBundleIdentifier;	// 16 = 0x10
    NSUUID *_truthTagIdentifier;	// 24 = 0x18
    NSUUID *_recordingRequestIdentifier;	// 32 = 0x20
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000001bfb5
- (void).cxx_destruct;	// IMP=0x000000000001c743
@property(readonly, copy, nonatomic) NSUUID *recordingRequestIdentifier; // @synthesize recordingRequestIdentifier=_recordingRequestIdentifier;
@property(readonly, copy, nonatomic) NSUUID *truthTagIdentifier; // @synthesize truthTagIdentifier=_truthTagIdentifier;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c489
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000001c326
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000001c28a
- (id)initWithProto:(id)arg1;	// IMP=0x000000000001c0b3
- (id)encodeAsProto;	// IMP=0x000000000001c063
- (id)serialize;	// IMP=0x000000000001c051
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithAbsoluteTimestamp:(double)arg1 clientBundleIdentifier:(id)arg2 truthTagIdentifier:(id)arg3 recordingRequestIdentifier:(id)arg4;	// IMP=0x000000000001beb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

