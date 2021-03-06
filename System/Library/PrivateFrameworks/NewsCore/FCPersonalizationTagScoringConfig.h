//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@interface FCPersonalizationTagScoringConfig : NSObject <NSCopying, NSSecureCoding>
{
    double _channelTopicMappingWeight;	// 8 = 0x8
    double _democratizationFactor;	// 16 = 0x10
    double _locationScoreDecayFactor;	// 24 = 0x18
    double _locationWeight;	// 32 = 0x20
    double _maxDistanceThreshold;	// 40 = 0x28
    long long _maxLocationsToConsider;	// 48 = 0x30
    double _topicTopicMappingWeight;	// 56 = 0x38
    double _userMembershipWeight;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000183258
@property(nonatomic) double userMembershipWeight; // @synthesize userMembershipWeight=_userMembershipWeight;
@property(nonatomic) double topicTopicMappingWeight; // @synthesize topicTopicMappingWeight=_topicTopicMappingWeight;
@property(nonatomic) long long maxLocationsToConsider; // @synthesize maxLocationsToConsider=_maxLocationsToConsider;
@property(nonatomic) double maxDistanceThreshold; // @synthesize maxDistanceThreshold=_maxDistanceThreshold;
@property(nonatomic) double locationWeight; // @synthesize locationWeight=_locationWeight;
@property(nonatomic) double locationScoreDecayFactor; // @synthesize locationScoreDecayFactor=_locationScoreDecayFactor;
@property(nonatomic) double democratizationFactor; // @synthesize democratizationFactor=_democratizationFactor;
@property(nonatomic) double channelTopicMappingWeight; // @synthesize channelTopicMappingWeight=_channelTopicMappingWeight;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000183382
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000183260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018324d
- (id)initWithChannelTopicMappingWeight:(double)arg1 democratizationFactor:(double)arg2 locationScoreDecayFactor:(double)arg3 locationWeight:(double)arg4 maxDistanceThreshold:(double)arg5 maxLocationsToConsider:(long long)arg6 topicTopicMappingWeight:(double)arg7 userMembershipWeight:(double)arg8;	// IMP=0x00000000001831a7
- (id)initWithConfigDictionary:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x0000000000182e65
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x0000000000182c15
- (id)init;	// IMP=0x0000000000182ad0

@end

