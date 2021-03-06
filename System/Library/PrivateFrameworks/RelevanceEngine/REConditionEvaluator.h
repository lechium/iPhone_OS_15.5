//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RECondition;

@interface REConditionEvaluator : NSObject
{
    unsigned long long _mode;	// 8 = 0x8
    RECondition *_condition;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000074f4c
@property(readonly, nonatomic) RECondition *condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) _Bool needsPredictionSet;
- (_Bool)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2;	// IMP=0x0000000000074ea2
- (_Bool)acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;	// IMP=0x0000000000074e13
- (id)initWithCondition:(id)arg1;	// IMP=0x0000000000074d90

@end

