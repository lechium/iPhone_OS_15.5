//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <SiriPrivateLearningAnalytics/MLFeatureProvider-Protocol.h>

@class MISSING_TYPE, NSSet;

@interface _TtC28SiriPrivateLearningAnalytics15FeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider>
{
    MISSING_TYPE *namedFeatures;	// 16 = 0x10
    MISSING_TYPE *targetName;	// 24 = 0x18
    MISSING_TYPE *featureNames;	// 40 = 0x28
}

- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000042a0
@property(nonatomic, readonly) NSSet *featureNames;

@end

