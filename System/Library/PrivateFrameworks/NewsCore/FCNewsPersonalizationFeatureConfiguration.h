//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCNewsPersonalizationFeatureConfiguration : NSObject
{
    long long _articleLengthMediumThreshold;	// 8 = 0x8
    long long _articleLengthLongThreshold;	// 16 = 0x10
    long long _publisherTopicPairPublisherEventCountThreshold;	// 24 = 0x18
    long long _publisherTopicPairTopicEventCountThreshold;	// 32 = 0x20
}

@property(nonatomic) long long publisherTopicPairTopicEventCountThreshold; // @synthesize publisherTopicPairTopicEventCountThreshold=_publisherTopicPairTopicEventCountThreshold;
@property(nonatomic) long long publisherTopicPairPublisherEventCountThreshold; // @synthesize publisherTopicPairPublisherEventCountThreshold=_publisherTopicPairPublisherEventCountThreshold;
@property(nonatomic) long long articleLengthLongThreshold; // @synthesize articleLengthLongThreshold=_articleLengthLongThreshold;
@property(nonatomic) long long articleLengthMediumThreshold; // @synthesize articleLengthMediumThreshold=_articleLengthMediumThreshold;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027a92d

@end

