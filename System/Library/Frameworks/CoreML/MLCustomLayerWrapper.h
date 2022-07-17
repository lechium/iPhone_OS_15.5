//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/EspressoBrick-Protocol.h>

@class NSString;
@protocol MLCustomLayer;

__attribute__((visibility("hidden")))
@interface MLCustomLayerWrapper : NSObject <EspressoBrick>
{
    _Bool _ndMode;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
    NSObject<MLCustomLayer> *_customImpl;	// 24 = 0x18
}

+ (id)factory;	// IMP=0x0000000000098d5d
+ (id)espressoTensorsToCoremlTensors:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x0000000000098c00
+ (id)espressoTensorsToCoremlTensorsGPU:(id)arg1;	// IMP=0x0000000000098aa9
+ (id)espressoTensorToCoremlTensor:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x000000000009893e
+ (id)getStrides:(id)arg1;	// IMP=0x00000000000986e1
+ (id)coremlShapesToEspressoShapes:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x0000000000098584
+ (id)coremlShapeToEspressoShape:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x0000000000098101
+ (id)espressoShapesToCoremlShapes:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x0000000000097fa4
+ (id)espressoShapeToCoremlShape:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00000000000977c0
- (void).cxx_destruct;	// IMP=0x000000000009763f
@property(retain, nonatomic) NSObject<MLCustomLayer> *customImpl; // @synthesize customImpl=_customImpl;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) _Bool ndMode; // @synthesize ndMode=_ndMode;
- (_Bool)hasGPUSupport;	// IMP=0x00000000000975f9
- (void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;	// IMP=0x00000000000971ef
- (void)setMappedWeights:(void *)arg1 sizeInBytes:(unsigned long long)arg2;	// IMP=0x0000000000096d58
- (id)initWithParameters:(id)arg1;	// IMP=0x0000000000096574
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x0000000000095f67
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x000000000009561a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
