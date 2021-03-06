//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DOMWheelEvent
{
}

- (void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(_Bool)arg8 altKey:(_Bool)arg9 shiftKey:(_Bool)arg10 metaKey:(_Bool)arg11;	// IMP=0x000000000009c150
@property(readonly) _Bool isHorizontal;
- (_Bool)webkitDirectionInvertedFromDevice;	// IMP=0x000000000009c050
@property(readonly) int wheelDelta;
@property(readonly) int wheelDeltaY;
@property(readonly) int wheelDeltaX;
- (unsigned int)deltaMode;	// IMP=0x000000000009bcd0
- (double)deltaZ;	// IMP=0x000000000009bbf0
- (double)deltaY;	// IMP=0x000000000009bb10
- (double)deltaX;	// IMP=0x000000000009ba30

@end

