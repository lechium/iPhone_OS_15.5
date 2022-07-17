//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _CDPModelTuningState : NSObject <NSSecureCoding>
{
    int _i;	// 8 = 0x8
    int _j;	// 12 = 0xc
    float _bestLogLambda;	// 16 = 0x10
    float _bestW0;	// 20 = 0x14
    float _bestScore;	// 24 = 0x18
    float _bestThreshold;	// 28 = 0x1c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000065e28
+ (id)initialTuningState;	// IMP=0x0000000000065a1b
@property(nonatomic) float bestThreshold; // @synthesize bestThreshold=_bestThreshold;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) float bestW0; // @synthesize bestW0=_bestW0;
@property(nonatomic) float bestLogLambda; // @synthesize bestLogLambda=_bestLogLambda;
@property(nonatomic) int j; // @synthesize j=_j;
@property(nonatomic) int i; // @synthesize i=_i;
@property(readonly, nonatomic) float progress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000065cff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000065c0a
- (id)description;	// IMP=0x0000000000065b7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000065a4f

@end
