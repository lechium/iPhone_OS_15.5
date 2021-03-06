//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPSGraphVariableInitializer : NSObject
{
    double _constant;	// 8 = 0x8
    double _minimum;	// 16 = 0x10
    double _maximum;	// 24 = 0x18
    NSString *_file;	// 32 = 0x20
    unsigned int _initializerType;	// 40 = 0x28
}

+ (id)initializerWithFile:(id)arg1;	// IMP=0x00000000001e9d71
+ (id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2;	// IMP=0x00000000001e9cfc
+ (id)initializerWithOnes;	// IMP=0x00000000001e9cce
+ (id)initializerWithZeros;	// IMP=0x00000000001e9ca6
+ (id)initializerWithConstant:(double)arg1;	// IMP=0x00000000001e9c6f
- (void).cxx_destruct;	// IMP=0x00000000001ea004
@property(readonly, nonatomic) unsigned int initializerType; // @synthesize initializerType=_initializerType;
- (id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned int)arg2;	// IMP=0x00000000001e9e12
- (id)init;	// IMP=0x00000000001e9c24

@end

