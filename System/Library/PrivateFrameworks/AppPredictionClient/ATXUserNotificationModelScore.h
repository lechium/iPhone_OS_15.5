//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXJSONSerializableProtocol-Protocol.h>
#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface ATXUserNotificationModelScore : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>
{
    NSString *_modelId;	// 8 = 0x8
    unsigned long long _modelVersion;	// 16 = 0x10
    double _score;	// 24 = 0x18
    double _scoreTimestamp;	// 32 = 0x20
    NSUUID *_scoreUUID;	// 40 = 0x28
    NSData *_scoreInfo;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010ebf6
- (void).cxx_destruct;	// IMP=0x000000000010ed55
@property(readonly, nonatomic) NSData *scoreInfo; // @synthesize scoreInfo=_scoreInfo;
@property(readonly, nonatomic) NSUUID *scoreUUID; // @synthesize scoreUUID=_scoreUUID;
@property(readonly, nonatomic) double scoreTimestamp; // @synthesize scoreTimestamp=_scoreTimestamp;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) unsigned long long modelVersion; // @synthesize modelVersion=_modelVersion;
@property(readonly, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010ec77
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010ebfe
- (id)proto;	// IMP=0x000000000010eb37
- (id)initWithProto:(id)arg1;	// IMP=0x000000000010e977
- (id)encodeAsProto;	// IMP=0x000000000010e927
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000010e88b
- (id)jsonRepresentation;	// IMP=0x000000000010e83b
- (id)initFromJSON:(id)arg1;	// IMP=0x000000000010e7bd
- (_Bool)isEqualToATXUserNotificationModelScore:(id)arg1;	// IMP=0x000000000010e6a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010e63e
- (id)initFromModelScoreData:(id)arg1 modelVersion:(unsigned long long)arg2 score:(double)arg3 scoreTimestamp:(double)arg4 scoreUUID:(id)arg5 scoreInfo:(id)arg6;	// IMP=0x000000000010e55b

@end

