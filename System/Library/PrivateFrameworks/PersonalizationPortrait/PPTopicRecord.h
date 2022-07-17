//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSMutableCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>
#import <PersonalizationPortrait/PPRecord-Protocol.h>

@class NSSet, NSString, PPSource, PPTopic, PPTopicMetadata;

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>
{
    PPTopic *_topic;	// 8 = 0x8
    PPSource *_source;	// 16 = 0x10
    unsigned long long _algorithm;	// 24 = 0x18
    double _initialScore;	// 32 = 0x20
    double _decayRate;	// 40 = 0x28
    _Bool _isLocal;	// 48 = 0x30
    NSString *_extractionOsBuild;	// 56 = 0x38
    unsigned int _extractionAssetVersion;	// 64 = 0x40
    PPTopicMetadata *_metadata;	// 72 = 0x48
    BOOL _bucketizedSentimentScore;	// 80 = 0x50
}

+ (id)algorithmForName:(id)arg1;	// IMP=0x000000000005a650
+ (id)describeAlgorithm:(unsigned long long)arg1;	// IMP=0x000000000005a535
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005a52d
- (void).cxx_destruct;	// IMP=0x0000000000059ff4
@property(readonly, nonatomic) PPTopicMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned int extractionAssetVersion; // @synthesize extractionAssetVersion=_extractionAssetVersion;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) double initialScore; // @synthesize initialScore=_initialScore;
@property(readonly, nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPTopic *topic; // @synthesize topic=_topic;
- (id)identifier;	// IMP=0x0000000000059f33
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000059ce1
@property(readonly, nonatomic) NSSet *featureNames;
@property(readonly, nonatomic) double sentimentScore; // @dynamic sentimentScore;
- (_Bool)isEqualToTopicRecord:(id)arg1;	// IMP=0x0000000000059ac2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000059a5a
- (unsigned long long)hash;	// IMP=0x000000000005990d
- (id)description;	// IMP=0x0000000000059829
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059753
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059748
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005961b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000593aa

@end
