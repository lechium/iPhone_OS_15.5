//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLMultiLabelClassifierModelProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSArray, NSString;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol>
{
    NSArray *_models;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000220d4
- (id)serialize;	// IMP=0x00000000000220ca
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000021e5b
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x0000000000021c15
- (id)predict:(id)arg1;	// IMP=0x0000000000021952
- (unsigned long long)outputDimension;	// IMP=0x000000000002193c
- (id)initWithModels:(id)arg1;	// IMP=0x00000000000218d1
- (id)initWithWeightsArray:(id)arg1 andIntercept:(_Bool)arg2;	// IMP=0x00000000000216c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

