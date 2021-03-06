//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

@interface UIHoverEvent
{
    NSMapTable *_touchesByContextId;	// 56 = 0x38
    NSMapTable *_deliveryTableByTouch;	// 64 = 0x40
    _Bool _pointerLocked;	// 72 = 0x48
    _Bool _hasOutstandingUpdates;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x0000000000d6efed
@property(nonatomic) _Bool hasOutstandingUpdates; // @synthesize hasOutstandingUpdates=_hasOutstandingUpdates;
@property(nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) _Bool _pointerLocked; // @synthesize _pointerLocked;
- (void)_pointerStateDidChange:(id)arg1;	// IMP=0x0000000000d6ee08
- (void)_cancelAllGestureRecognizers;	// IMP=0x0000000000d6ecd1
- (id)_deliveryTableByTouchCreateIfNeeded:(id)arg1;	// IMP=0x0000000000d6ec30
- (id)_touchesByContextId:(unsigned int)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000d6eb4a
- (void)_completelyRemoveHoverTouchAndDeliveryTableForContextIdNumber:(id)arg1;	// IMP=0x0000000000d6e920
- (void)_windowDidBecomeHidden:(id)arg1;	// IMP=0x0000000000d6e839
- (void)_windowDidDetachContext:(id)arg1;	// IMP=0x0000000000d6e7bd
- (void)removeHoverTouchForContextId:(unsigned int)arg1 pathIndex:(long long)arg2;	// IMP=0x0000000000d6e646
- (void)setHoverTouch:(id)arg1 forContextId:(unsigned int)arg2 pathIndex:(long long)arg3;	// IMP=0x0000000000d6e5c3
- (id)hoverTouchForContextId:(unsigned int)arg1 pathIndex:(long long)arg2;	// IMP=0x0000000000d6e415
- (void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;	// IMP=0x0000000000d6e395
- (void)setNeedsHitTestResetForWindow:(id)arg1;	// IMP=0x0000000000d6e37e
- (void)setNeedsUpdateForWindow:(id)arg1;	// IMP=0x0000000000d6e36a
- (void)_setNeedsUpdateForWindow:(id)arg1 forcingHitTest:(_Bool)arg2;	// IMP=0x0000000000d6e1ad
- (unsigned long long)_inputPrecision;	// IMP=0x0000000000d6e1a2
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;	// IMP=0x0000000000d6e03d
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;	// IMP=0x0000000000d6dd10
- (id)_gestureRecognizersForWindow:(id)arg1;	// IMP=0x0000000000d6da9e
- (id)_windows;	// IMP=0x0000000000d6d791
- (id)touchesForGestureRecognizer:(id)arg1;	// IMP=0x0000000000d6d77c
- (id)touchesForView:(id)arg1;	// IMP=0x0000000000d6d774
- (id)touchesForWindow:(id)arg1;	// IMP=0x0000000000d6d6f4
- (id)allTouches;	// IMP=0x0000000000d6d591
- (long long)subtype;	// IMP=0x0000000000d6d589
- (long long)type;	// IMP=0x0000000000d6d57e
- (void)dealloc;	// IMP=0x0000000000d6d509
- (id)_init;	// IMP=0x0000000000d6d380

@end

