//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMIdentifiableContentEvent-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface BMSiriQueryEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper>
{
    NSString *_uniqueId;	// 8 = 0x8
    double _absoluteTimestamp;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
    NSArray *_results;	// 32 = 0x20
    NSString *_contentProtection;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006b08
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000680f
- (void).cxx_destruct;	// IMP=0x00000000000074ca
@property(readonly, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007485
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000073ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000071c6
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x0000000000006fdf
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000006f43
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000006c9f
- (id)encodeAsProto;	// IMP=0x0000000000006c4f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006b89
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006b10
- (id)json;	// IMP=0x0000000000006a33
- (id)jsonDict;	// IMP=0x00000000000068bd
- (id)serialize;	// IMP=0x00000000000068ab
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 query:(id)arg3 results:(id)arg4;	// IMP=0x00000000000067ec
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 query:(id)arg3 results:(id)arg4 contentProtection:(id)arg5;	// IMP=0x0000000000006592
- (id)init;	// IMP=0x000000000000658c

// Remaining properties
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *domainId;
@property(readonly) Class superclass;

@end
