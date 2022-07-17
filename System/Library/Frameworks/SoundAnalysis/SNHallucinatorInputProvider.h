//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNHallucinatorInputProvider : NSObject <MLFeatureProvider>
{
    MLMultiArray *_feature;	// 8 = 0x8
    MLMultiArray *_tokenGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020894
@property(retain, nonatomic) MLMultiArray *tokenGroup; // @synthesize tokenGroup=_tokenGroup;
@property(retain, nonatomic) MLMultiArray *feature; // @synthesize feature=_feature;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000207c3
@property(readonly, nonatomic) NSSet *featureNames;

@end
