//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;
@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;

@interface TKVibrationRecorderTouchSurface
{
    _Bool _isRecordingModeEnabled;	// 8 = 0x8
    double _vibrationPatternMaximumDuration;	// 16 = 0x10
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;	// 24 = 0x18
    _Bool _shouldIgnoreCurrentTouch;	// 32 = 0x20
    _Bool _isReplayModeEnabled;	// 33 = 0x21
    TLVibrationPattern *_vibrationPatternToReplay;	// 40 = 0x28
    double _replayModeWasEnteredStartTime;	// 48 = 0x30
    id <NSCopying> _displayLinkManagerObserverToken;	// 56 = 0x38
    id <TKVibrationRecorderTouchSurfaceDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000293e9
@property(nonatomic) __weak id <TKVibrationRecorderTouchSurfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTouchLocationForReplayMode:(id)arg1;	// IMP=0x00000000000291d0
- (void)exitReplayMode;	// IMP=0x00000000000290f7
- (void)enterReplayModeWithVibrationPattern:(id)arg1;	// IMP=0x0000000000028fd8
- (void)_recordTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2;	// IMP=0x0000000000028f2b
- (void)currentVibrationComponentShouldEnd;	// IMP=0x0000000000028ed3
- (void)exitRecordingMode;	// IMP=0x0000000000028e01
- (void)enterRecordingMode;	// IMP=0x0000000000028d9d
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000028d8b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000028bf6
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000028a4d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000288d0
- (void)dealloc;	// IMP=0x000000000002887d
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;	// IMP=0x00000000000287a6

@end

