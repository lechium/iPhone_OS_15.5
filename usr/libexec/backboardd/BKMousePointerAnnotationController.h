//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, CADisplay, NSString;

@interface BKMousePointerAnnotationController : NSObject
{
    double _startTime;	// 8 = 0x8
    long long _inputEventsPerSecond;	// 16 = 0x10
    long long _outputEventsPerSecond;	// 24 = 0x18
    CADisplay *_currentDisplay;	// 32 = 0x20
    BKDisplayAnnotationController *_currentAnnotationController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003e0a4
@property(retain, nonatomic) BKDisplayAnnotationController *currentAnnotationController; // @synthesize currentAnnotationController=_currentAnnotationController;
@property(retain, nonatomic) CADisplay *currentDisplay; // @synthesize currentDisplay=_currentDisplay;
- (id)_stringDescribingContextID:(unsigned int)arg1 pid:(int)arg2;	// IMP=0x001000000003df50
- (void)observeMouseAvailabilityDidChange:(_Bool)arg1;	// IMP=0x001000000003df2d
- (void)observeMouseTouchCountDidChange:(long long)arg1;	// IMP=0x001000000003de62
- (void)observeMouseButtonMaskDidChange:(unsigned int)arg1;	// IMP=0x001000000003dbf8
- (void)observeMouseDidExitContextID:(unsigned int)arg1 pid:(int)arg2;	// IMP=0x001000000003db99
- (void)observeMouseDidEnterContextID:(unsigned int)arg1 pid:(int)arg2;	// IMP=0x001000000003da9d
- (void)observeMouseScrollPhaseDidChange:(unsigned short)arg1;	// IMP=0x001000000003d9aa
- (void)observeMouseModelPointDidChange:(struct CGPoint)arg1 display:(id)arg2 reason:(id)arg3;	// IMP=0x001000000003d6f4
- (void)observeMouseRelativePointDidChange:(struct CGPoint)arg1;	// IMP=0x001000000003d61f
- (void)didPostEvent;	// IMP=0x001000000003d609
- (void)didReceiveEventFromDevice;	// IMP=0x001000000003d5f3
- (void)_updateEventsPerSecond;	// IMP=0x001000000003d4d7
- (void)invalidate;	// IMP=0x001000000003d486
- (void)dealloc;	// IMP=0x001000000003d301

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

