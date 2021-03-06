//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSArray, NSData, NSString;

@interface BMUserActivityMetadataEvent : NSObject <BMStoreData, BMProtoBufWrapper>
{
    _Bool _hasAssociatedImageRepresentation;	// 8 = 0x8
    double _absoluteTimestamp;	// 16 = 0x10
    NSData *_userActivityData;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_activityType;	// 40 = 0x28
    NSString *_associatedBundleId;	// 48 = 0x30
    NSString *_associatedURLString;	// 56 = 0x38
    NSString *_modeIdentifier;	// 64 = 0x40
    NSArray *_topics;	// 72 = 0x48
    NSString *_uuid;	// 80 = 0x50
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000001add7
- (void).cxx_destruct;	// IMP=0x000000000001be4b
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _Bool hasAssociatedImageRepresentation; // @synthesize hasAssociatedImageRepresentation=_hasAssociatedImageRepresentation;
@property(readonly, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(readonly, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
@property(readonly, nonatomic) NSString *associatedURLString; // @synthesize associatedURLString=_associatedURLString;
@property(readonly, nonatomic) NSString *associatedBundleId; // @synthesize associatedBundleId=_associatedBundleId;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b79b
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000001b5f9
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000001b55d
- (id)initWithProto:(id)arg1;	// IMP=0x000000000001b1f0
- (id)encodeAsProto;	// IMP=0x000000000001b1a0
- (id)json;	// IMP=0x000000000001b0e0
- (id)jsonDict;	// IMP=0x000000000001ae85
- (id)serialize;	// IMP=0x000000000001ae73
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithAbsoluteTimestamp:(double)arg1 userActivityData:(id)arg2 title:(id)arg3 activityType:(id)arg4 associatedBundleId:(id)arg5 associatedURLString:(id)arg6 modeIdentifier:(id)arg7 topics:(id)arg8 hasAssociatedImageRepresentation:(_Bool)arg9 uuid:(id)arg10;	// IMP=0x000000000001ac16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

