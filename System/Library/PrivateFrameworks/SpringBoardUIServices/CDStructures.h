//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool showScanningState;
    _Bool showScanningStateDuringFaceDetect;
    double minimumDurationBeforeShowScanningState;
    _Bool bkCoachingHintsEnabled;
    double minimumDurationBetweenLeavingCoachingAndCoaching;
    double minimumDurationShowingCoaching;
    double durationOnCameraCoveredGlyphBeforeCoaching;
    double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
    _Bool coachingDelaysUnlock;
    _Bool suppressFaceIDDisabledState;
    _Bool spinBeforeCoaching;
    unsigned long long substate;
} CDStruct_29b32c11;

typedef struct {
    long long fromState;
    long long toState;
    double progress;
} CDStruct_930a33b1;
