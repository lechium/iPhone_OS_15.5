//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLCustomLayer-Protocol.h>

__attribute__((visibility("hidden")))
@interface InternalCustomGatherTree : NSObject <MLCustomLayer>
{
    vector_cd3186ef _shape;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000126097
- (void).cxx_destruct;	// IMP=0x000000000012607b
@property(readonly, nonatomic) vector_cd3186ef shape; // @synthesize shape=_shape;
- (_Bool)setWeightData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000126057
- (id)outputShapesForInputShapes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000125cf7
- (id)initWithParameterDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000125cc8
- (_Bool)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012583f

@end

