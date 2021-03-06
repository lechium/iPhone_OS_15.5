//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMIdentifiableContentEvent-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface BMPhotosPhotoViewEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSString *_uniqueId;	// 8 = 0x8
    NSArray *_locations;	// 16 = 0x10
    double _absoluteTimestamp;	// 24 = 0x18
    NSString *_contentProtection;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002fa83
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000002f7de
- (void).cxx_destruct;	// IMP=0x00000000000302b1
@property(readonly, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030276
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000301f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003000e
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000002fe91
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000002fdf5
- (id)initWithProto:(id)arg1;	// IMP=0x000000000002fc1a
- (id)encodeAsProto;	// IMP=0x000000000002fbca
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002fb04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002fa8b
- (id)json;	// IMP=0x000000000002f9ae
- (id)jsonDict;	// IMP=0x000000000002f88c
- (id)serialize;	// IMP=0x000000000002f87a
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithUniqueId:(id)arg1 locations:(id)arg2 absoluteTimestamp:(double)arg3;	// IMP=0x000000000002f7be
- (id)initWithUniqueId:(id)arg1 locations:(id)arg2 absoluteTimestamp:(double)arg3 contentProtection:(id)arg4;	// IMP=0x000000000002f604
- (id)init;	// IMP=0x000000000002f5fe

// Remaining properties
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *domainId;
@property(readonly) Class superclass;

@end

