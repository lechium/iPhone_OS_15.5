//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PFLPrivacyParameters : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _shouldUseCustomEpsilon;	// 16 = 0x10
    double _rho;	// 24 = 0x18
    double _precision;	// 32 = 0x20
    double _minCDProduct;	// 40 = 0x28
    long long _maxRejection;	// 48 = 0x30
    double _normmax;	// 56 = 0x38
    unsigned long long _dimension;	// 64 = 0x40
    double _reconstructionProbability;	// 72 = 0x48
    double _epsilon;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000023b15
@property(nonatomic) _Bool shouldUseCustomEpsilon; // @synthesize shouldUseCustomEpsilon=_shouldUseCustomEpsilon;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double reconstructionProbability; // @synthesize reconstructionProbability=_reconstructionProbability;
@property(nonatomic) unsigned long long dimension; // @synthesize dimension=_dimension;
@property(nonatomic) double normmax; // @synthesize normmax=_normmax;
@property(nonatomic) long long maxRejection; // @synthesize maxRejection=_maxRejection;
@property(nonatomic) double minCDProduct; // @synthesize minCDProduct=_minCDProduct;
@property(nonatomic) double precision; // @synthesize precision=_precision;
@property(nonatomic) double rho; // @synthesize rho=_rho;
- (_Bool)populateFromFile:(id)arg1;	// IMP=0x00000000000232bf
- (_Bool)populateFromDefaultFile;	// IMP=0x0000000000023212
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000231a7

@end
