//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface MLNeuralNetworksCompileTimeParams : NSObject <NSSecureCoding>
{
    long long _lossType;	// 8 = 0x8
    long long _optimizerType;	// 16 = 0x10
    NSDictionary *_optimizerParameters;	// 24 = 0x18
    NSDictionary *_lossParameters;	// 32 = 0x20
    NSArray *_trainableLayerNames;	// 40 = 0x28
    NSDictionary *_updateParameters;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000118731
- (void).cxx_destruct;	// IMP=0x00000000001186f3
@property(retain, nonatomic) NSDictionary *updateParameters; // @synthesize updateParameters=_updateParameters;
@property(retain, nonatomic) NSArray *trainableLayerNames; // @synthesize trainableLayerNames=_trainableLayerNames;
@property(retain, nonatomic) NSDictionary *lossParameters; // @synthesize lossParameters=_lossParameters;
@property(retain, nonatomic) NSDictionary *optimizerParameters; // @synthesize optimizerParameters=_optimizerParameters;
@property(nonatomic) long long optimizerType; // @synthesize optimizerType=_optimizerType;
@property(nonatomic) long long lossType; // @synthesize lossType=_lossType;
- (id)unarchiveUpdatableParamsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000118436
- (_Bool)writeUpdatableParamsToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000118353
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001181df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000118047
- (id)initWithLossType:(long long)arg1 optimizerType:(long long)arg2 optimizerParameters:(id)arg3 lossParameters:(id)arg4 trainableLayerNames:(id)arg5 updateParameters:(id)arg6;	// IMP=0x0000000000117f2d

@end

