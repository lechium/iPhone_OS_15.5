//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKDrawingPowerSavingController : NSObject
{
    vector_0e047154 _movementDistanceHistoryBuffer;	// 8 = 0x8
    struct CGPoint _previousDrawingLocation;	// 32 = 0x20
    double _currentMovement;	// 48 = 0x30
    double _accumulatedMovement;	// 56 = 0x38
    double _previousRenderTimestamp;	// 64 = 0x40
    _Bool _valid;	// 72 = 0x48
    double _minimumMovementDistancePencil;	// 80 = 0x50
    double _minimumMovementDistanceFinger;	// 88 = 0x58
    double _minimumMovementDistanceTimeout;	// 96 = 0x60
    _Bool _isDrawingWithPencil;	// 104 = 0x68
    _Bool _isDrawingWithMarkerOrEraser;	// 105 = 0x69
}

- (id).cxx_construct;	// IMP=0x0000000000143173
- (void).cxx_destruct;	// IMP=0x0000000000143157
- (id)init;	// IMP=0x0000000000142bbe

@end

