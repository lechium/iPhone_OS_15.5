//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKCropAnnotation, AKInkAnnotation, AKStatistics, NSArray, NSMutableOrderedSet, NSMutableSet, NSSet;

@interface AKPageModelController : NSObject
{
    NSMutableOrderedSet *_mutableAnnotations;	// 8 = 0x8
    NSMutableSet *_mutableSelectedAnnotations;	// 16 = 0x10
    AKInkAnnotation *_inkCanvasAnnotation;	// 24 = 0x18
    id _representedObject;	// 32 = 0x20
    AKCropAnnotation *_cropAnnotation;	// 40 = 0x28
    AKStatistics *_statisticsLogger;	// 48 = 0x30
    struct CGRect _appliedCropRect;	// 56 = 0x38
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000f7159
- (void).cxx_destruct;	// IMP=0x00000000000fa670
@property(nonatomic) __weak AKStatistics *statisticsLogger; // @synthesize statisticsLogger=_statisticsLogger;
@property(retain) AKCropAnnotation *cropAnnotation; // @synthesize cropAnnotation=_cropAnnotation;
@property struct CGRect appliedCropRect; // @synthesize appliedCropRect=_appliedCropRect;
@property __weak id representedObject; // @synthesize representedObject=_representedObject;
- (void)_postSelectedAnnotationsChangedNotification;	// IMP=0x00000000000fa526
- (void)_logAnnotationAdded:(id)arg1;	// IMP=0x00000000000fa4b4
- (void)_coalescedEnsureInkAnnotationIsInFront:(id)arg1;	// IMP=0x00000000000fa325
- (void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;	// IMP=0x00000000000fa218
- (void)restoreSelectionStateForUndo:(id)arg1;	// IMP=0x00000000000fa19f
- (id)selectionStateForUndo;	// IMP=0x00000000000fa157
- (id)initWithArchivableRepresentation:(id)arg1;	// IMP=0x00000000000f9e29
- (id)archivableRepresentation;	// IMP=0x00000000000f9bef
- (_Bool)hasMaskBorderAnnotation;	// IMP=0x00000000000f9ac5
- (void)setInkCanvasAnnotationOneTime:(id)arg1;	// IMP=0x00000000000f99ea
@property(retain) AKInkAnnotation *inkCanvasAnnotation; // @synthesize inkCanvasAnnotation=_inkCanvasAnnotation;
- (void)removeCropToolAnnotation;	// IMP=0x00000000000f9880
- (void)addCropToolAnnotation;	// IMP=0x00000000000f976e
- (void)sendSelectedAnnotationsToBack;	// IMP=0x00000000000f95ae
- (void)sendSelectedAnnotationsBackward;	// IMP=0x00000000000f930d
- (void)bringSelectedAnnotationsToFront;	// IMP=0x00000000000f910f
- (void)bringSelectedAnnotationsForward;	// IMP=0x00000000000f8e0f
- (void)selectAllAnnotations;	// IMP=0x00000000000f8d8d
- (void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(_Bool)arg2;	// IMP=0x00000000000f8cf0
- (void)selectAnnotation:(id)arg1 byExtendingSelection:(_Bool)arg2;	// IMP=0x00000000000f8c7f
- (_Bool)containsAnnotation:(id)arg1;	// IMP=0x00000000000f8c69
- (void)setSelectedAnnotations:(id)arg1;	// IMP=0x00000000000f8ace
- (void)intersectSelectedAnnotations:(id)arg1;	// IMP=0x00000000000f8a39
- (void)removeSelectedAnnotations:(id)arg1;	// IMP=0x00000000000f8837
- (void)removeSelectedAnnotationsObject:(id)arg1;	// IMP=0x00000000000f8774
- (void)addSelectedAnnotations:(id)arg1;	// IMP=0x00000000000f83d3
- (void)addSelectedAnnotationsObject:(id)arg1;	// IMP=0x00000000000f82ca
@property(readonly) NSSet *selectedAnnotations;
- (void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2;	// IMP=0x00000000000f7d4c
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000f7c21
- (void)removeAnnotationsAtIndexes:(id)arg1;	// IMP=0x00000000000f796b
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f7866
- (void)removeAllAnnotations;	// IMP=0x00000000000f77d5
- (void)_enableEditObservationForAnnotationIfNew:(id)arg1;	// IMP=0x00000000000f776e
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000f7389
- (void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000f729a
@property(readonly) NSArray *annotations;
- (id)init;	// IMP=0x00000000000f71d4

@end

