//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSMutableDictionary, NSString, UIView, _UIGestureStudyClickInteraction, _UIGestureStudyMetricsGestureRecognizer;
@protocol _UIGestureStudyInteractionDelegate;

@interface _UIGestureStudyInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;	// 8 = 0x8
    id <_UIGestureStudyInteractionDelegate> _delegate;	// 16 = 0x10
    _UIGestureStudyClickInteraction *_forceClickInteraction;	// 24 = 0x18
    _UIGestureStudyClickInteraction *_longPressClickInteraction;	// 32 = 0x20
    _UIGestureStudyMetricsGestureRecognizer *_metricsGestureRecognizer;	// 40 = 0x28
    NSMutableDictionary *_eventMetadata;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000010bff02
@property(retain, nonatomic) NSMutableDictionary *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(retain, nonatomic) _UIGestureStudyMetricsGestureRecognizer *metricsGestureRecognizer; // @synthesize metricsGestureRecognizer=_metricsGestureRecognizer;
@property(retain, nonatomic) _UIGestureStudyClickInteraction *longPressClickInteraction; // @synthesize longPressClickInteraction=_longPressClickInteraction;
@property(retain, nonatomic) _UIGestureStudyClickInteraction *forceClickInteraction; // @synthesize forceClickInteraction=_forceClickInteraction;
@property(nonatomic) __weak id <_UIGestureStudyInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (id)_numberOfActiveTouches;	// IMP=0x00000000010bfd76
- (id)_viewRegionForTriggeredParticipant:(id)arg1;	// IMP=0x00000000010bfb03
- (id)_baseMetadataForTriggeredParticipant:(id)arg1;	// IMP=0x00000000010bf7e9
- (void)_reportEventForTriggeredParticipant:(id)arg1;	// IMP=0x00000000010bf3e3
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000010bf385
- (void)_handleMetricsEvent:(id)arg1;	// IMP=0x00000000010bed61
- (void)_interactionDidTrigger:(id)arg1;	// IMP=0x00000000010bed4f
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000010bea98
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000010be916
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x00000000010be829
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000010be6e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
