//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPCAudioSpectrumObserver : NSObject
{
    struct _MPCAudioSpectrumAnalyzerBandInternal *_bands;	// 8 = 0x8
    unsigned long long _bandsStorageSize;	// 16 = 0x10
    float _powerLevel;	// 24 = 0x18
    long long _numberOfBands;	// 32 = 0x20
    CDUnknownBlockType _onUpdate;	// 40 = 0x28
}

+ (id)defaultObserver;	// IMP=0x0000000000141621
- (void).cxx_destruct;	// IMP=0x0000000000141611
@property(copy, nonatomic) CDUnknownBlockType onUpdate; // @synthesize onUpdate=_onUpdate;
@property(nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
- (void)finishReport;	// IMP=0x000000000014151a
- (void)beginReport;	// IMP=0x00000000001414d9
- (void)_resizeBandStorage;	// IMP=0x000000000014145c
- (float)averagePowerOfBandAtIndex:(long long)arg1 band:(out struct MPCAudioSpectrumAnalyzerBand *)arg2;	// IMP=0x0000000000141448
- (long long)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand)arg1;	// IMP=0x00000000001413c6
@property(readonly, nonatomic) long long numberOfBands; // @synthesize numberOfBands=_numberOfBands;
- (void)dealloc;	// IMP=0x000000000014137d

@end

