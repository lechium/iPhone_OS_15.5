//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLNoiseStrategy-Protocol.h>

@class NSString;

@interface PMLSeparatedDPNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    const char *_pflIdentifier;	// 8 = 0x8
}

+ (id)getPFLIdentifier:(id)arg1;	// IMP=0x00000000000292c7
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000029089
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000002907c
- (_Bool)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(_Bool)arg2 scaleFactor:(float *)arg3;	// IMP=0x0000000000028f61
- (void)addNoiseToSparseVector:(id)arg1;	// IMP=0x0000000000028f52
- (void)addNoiseToSparseMatrix:(id)arg1;	// IMP=0x0000000000028f43
- (id)initWithPFLIdentifier:(const char *)arg1;	// IMP=0x0000000000028f06
- (id)init;	// IMP=0x0000000000028f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

