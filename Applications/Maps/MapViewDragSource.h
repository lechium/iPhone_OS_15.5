//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DragAndDropMapItem, DragAndDropPreview, MKMapView, NSString, SearchResult, UITargetedDragPreview, VKLabelMarker;
@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface MapViewDragSource : NSObject
{
    DragAndDropMapItem *_dragItem;	// 8 = 0x8
    DragAndDropPreview *_previewView;	// 16 = 0x10
    UITargetedDragPreview *_liftPreview;	// 24 = 0x18
    VKLabelMarker *_labelMarker;	// 32 = 0x20
    SearchResult *_searchResult;	// 40 = 0x28
    _Bool _draggingCallout;	// 48 = 0x30
    id <UIDragSession> _currentDragSession;	// 56 = 0x38
    MKMapView *_mapView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000077d18b
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)reset;	// IMP=0x001000000077d0c4
- (void)updatePreviewDrag;	// IMP=0x001000000077cf04
- (void)dragAndDropPreviewDidUpdate:(id)arg1;	// IMP=0x001000000077cea5
- (_Bool)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;	// IMP=0x001000000077ce9d
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x001000000077cd1b
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;	// IMP=0x001000000077cd13
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x001000000077cbb4
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x001000000077c99a
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x001000000077c84e
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x001000000077c557
- (_Bool)_isValidLabelMarkerForDragging:(id)arg1;	// IMP=0x001000000077c49b
- (_Bool)shouldBeginDragFromLocation:(struct CGPoint)arg1;	// IMP=0x001000000077c1b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

