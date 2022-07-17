//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface RCTrimmedCompositionWaveformDataSource
{
    NSURL *_destinationWaveformURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002de2b
@property(readonly, nonatomic) NSURL *destinationWaveformURL; // @synthesize destinationWaveformURL=_destinationWaveformURL;
- (id)generatedWaveformOutputURL;	// IMP=0x000000000002de05
- (_Bool)preferLoadingFragmentWaveforms;	// IMP=0x000000000002ddfd
- (id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2;	// IMP=0x000000000002dd70

@end
