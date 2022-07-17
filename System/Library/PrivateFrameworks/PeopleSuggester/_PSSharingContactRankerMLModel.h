//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, NSDictionary;

@interface _PSSharingContactRankerMLModel : NSObject
{
    double _scoreThreshold;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    MLModel *_mlModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c0de
@property(retain) MLModel *mlModel; // @synthesize mlModel=_mlModel;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property double scoreThreshold; // @synthesize scoreThreshold=_scoreThreshold;
- (id)scoresOnFeatures:(id)arg1;	// IMP=0x000000000000bffd
- (void)loadDefaultModel;	// IMP=0x000000000000bd20
- (id)initWithScoreThreshold:(double)arg1;	// IMP=0x000000000000bbc6
- (id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2;	// IMP=0x000000000000ba96

@end
