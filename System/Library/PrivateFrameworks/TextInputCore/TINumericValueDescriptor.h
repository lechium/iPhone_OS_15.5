//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface TINumericValueDescriptor
{
    NSString *_calculationExpression;	// 16 = 0x10
    NSString *_calculationPrecondition;	// 24 = 0x18
    NSNumber *_calculationDefaultValue;	// 32 = 0x20
    NSArray *_calculationDependencies;	// 40 = 0x28
    NSArray *_bucketThresholds;	// 48 = 0x30
    NSArray *_bucketValues;	// 56 = 0x38
}

+ (id)numericValueDescriptorWithMetricName:(id)arg1 calculationExpression:(id)arg2 calculationPrecondition:(id)arg3 calculationDefaultValue:(id)arg4 calculationDependencies:(id)arg5 bucketThresholds:(id)arg6 bucketValues:(id)arg7;	// IMP=0x0000000000079d4e
- (void).cxx_destruct;	// IMP=0x0000000000079cd9
@property(readonly, nonatomic) NSArray *bucketValues; // @synthesize bucketValues=_bucketValues;
@property(readonly, nonatomic) NSArray *bucketThresholds; // @synthesize bucketThresholds=_bucketThresholds;
@property(readonly, nonatomic) NSArray *calculationDependencies; // @synthesize calculationDependencies=_calculationDependencies;
@property(readonly, nonatomic) NSNumber *calculationDefaultValue; // @synthesize calculationDefaultValue=_calculationDefaultValue;
@property(readonly, nonatomic) NSString *calculationPrecondition; // @synthesize calculationPrecondition=_calculationPrecondition;
@property(readonly, nonatomic) NSString *calculationExpression; // @synthesize calculationExpression=_calculationExpression;
- (id)initWithMetricName:(id)arg1 calculationExpression:(id)arg2 calculationPrecondition:(id)arg3 calculationDefaultValue:(id)arg4 calculationDependencies:(id)arg5 bucketThresholds:(id)arg6 bucketValues:(id)arg7;	// IMP=0x0000000000079b29

@end
