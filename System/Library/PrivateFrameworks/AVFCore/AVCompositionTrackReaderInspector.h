//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCompositionTrackReaderInspector
{
    struct OpaqueFigMutableComposition *_figMutableComposition;	// 88 = 0x58
}

- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(_Bool *)arg1;	// IMP=0x00000000000ecc10
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000ec8f5
- (id)segments;	// IMP=0x00000000000ec6c9
@property(readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition *mutableComposition;
- (int)decodabilityValidationResult;	// IMP=0x00000000000ec6b0
- (_Bool)isDecodable;	// IMP=0x00000000000ec6a8
- (int)playabilityValidationResult;	// IMP=0x00000000000ec6a0
- (_Bool)isPlayable;	// IMP=0x00000000000ec698
- (void)dealloc;	// IMP=0x00000000000ec652
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000000ec5e0

@end

