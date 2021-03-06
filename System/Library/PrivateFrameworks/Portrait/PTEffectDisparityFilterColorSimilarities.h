//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PTDisparityFilterColorSimilarity;
@protocol MTLCommandQueue, MTLTexture;

@interface PTEffectDisparityFilterColorSimilarities
{
    int _frameIndex;	// 24 = 0x18
    id <MTLTexture> _colorBuffersBlurred[2];	// 32 = 0x20
    id <MTLTexture> _filteredDisparity[2];	// 48 = 0x30
    id <MTLCommandQueue> _commandQueue;	// 64 = 0x40
    PTDisparityFilterColorSimilarity *_disparityFilter;	// 72 = 0x48
    id <MTLTexture> _inputRGB;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006d127
- (id)debugTexture;	// IMP=0x000000000006d0f6
- (unsigned int)reset;	// IMP=0x000000000006d0e0
- (unsigned int)applyFilter:(id)arg1 inOutFilteredDisparity:(id)arg2 updateCoefficient:(float)arg3;	// IMP=0x000000000006cfd5
- (unsigned int)prepareFilter:(id)arg1 network:(id)arg2;	// IMP=0x000000000006ce00
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 library:(id)arg3 pipelineLibrary:(id)arg4 disparityWidth:(unsigned long long)arg5 disparityHeight:(unsigned long long)arg6 effectUtil:(id)arg7;	// IMP=0x000000000006cc6e

@end

