//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPMLModelEvaluate, NSString;
@protocol OS_dispatch_queue;

@interface CPMLModel : NSObject
{
    NSString *_savedPlistPath;	// 8 = 0x8
    NSString *_modelPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatch_queue;	// 24 = 0x18
    void *_mData;	// 32 = 0x20
    unsigned long long _totalBytesIntSection;	// 40 = 0x28
    unsigned long long _totalBytesRealSection;	// 48 = 0x30
    double *_realBase;	// 56 = 0x38
    CPMLModelEvaluate *cpModelEvaluate;	// 64 = 0x40
}

+ (id)initCPModelPath:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000001b63c
- (void).cxx_destruct;	// IMP=0x000000000001c5fc
@property(retain) CPMLModelEvaluate *cpModelEvaluate; // @synthesize cpModelEvaluate;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x000000000001c5c8
- (void)setCPMLAlgorithmEngine:(id)arg1;	// IMP=0x000000000001c5b1
- (void)setCPMLAlgorithm:(id)arg1;	// IMP=0x000000000001c59a
- (_Bool)reset;	// IMP=0x000000000001c34f
- (_Bool)updateModelWithCPDB:(id)arg1;	// IMP=0x000000000001c24d
- (_Bool)updateModelWithDB:(id)arg1;	// IMP=0x000000000001c0f6
- (void)boundResult:(id)arg1;	// IMP=0x000000000001c028
- (id)evalDict:(id)arg1;	// IMP=0x000000000001bee7
- (id)evalArray:(id)arg1;	// IMP=0x000000000001bda6
- (id)evalNSObjectV:(id)arg1;	// IMP=0x000000000001bc63
- (id)evalString:(id)arg1;	// IMP=0x000000000001bafd
- (id)getPropertyList;	// IMP=0x000000000001b9d9
- (void)initializeModel:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000001b8c0
- (id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000001b808
- (id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2;	// IMP=0x000000000001b73d

@end
