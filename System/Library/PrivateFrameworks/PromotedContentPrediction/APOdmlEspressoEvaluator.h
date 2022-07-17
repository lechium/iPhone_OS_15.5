//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APOdmlRecipe, APOdmlTrainingSetBuilder, NSURL;

@interface APOdmlEspressoEvaluator : NSObject
{
    unsigned long long _trainingSetSize;	// 8 = 0x8
    APOdmlTrainingSetBuilder *_builder;	// 16 = 0x10
    APOdmlRecipe *_recipe;	// 24 = 0x18
    NSURL *_netURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010163
@property(readonly, nonatomic) NSURL *netURL; // @synthesize netURL=_netURL;
@property(readonly, nonatomic) APOdmlRecipe *recipe; // @synthesize recipe=_recipe;
@property(readonly, nonatomic) APOdmlTrainingSetBuilder *builder; // @synthesize builder=_builder;
@property(nonatomic) unsigned long long trainingSetSize; // @synthesize trainingSetSize=_trainingSetSize;
- (_Bool)_setError:(id *)arg1 errorCode:(long long)arg2;	// IMP=0x00000000000100e2
- (id)_generateMetrics:(id)arg1 postTrainingMetrics:(id)arg2 tapAndImpressionMetrics:(id)arg3 deltaPttrMetrics:(id)arg4;	// IMP=0x000000000000fe6d
- (id)_computeModelDeltas:(id)arg1 weightsAfter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000fc49
- (id)_evaluate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e79c
- (id)_logWithLoggerKey:(id)arg1 message:(id)arg2;	// IMP=0x000000000000e645
- (id)evaluate:(id *)arg1;	// IMP=0x000000000000e13e
- (id)initWithTrainingRowBuilder:(id)arg1 recipe:(id)arg2 netURL:(id)arg3;	// IMP=0x000000000000e05b

@end
