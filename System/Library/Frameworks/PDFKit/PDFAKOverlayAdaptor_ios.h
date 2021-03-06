//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDFAKOverlayAdaptorPrivate_ios;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptor_ios
{
    PDFAKOverlayAdaptorPrivate_ios *_privateIOS;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004c77e
- (void)_adjustScrollViewWithAnimationProperties:(CDStruct_c23cc2dc)arg1 delta:(double)arg2;	// IMP=0x000000000004c568
- (void)adjustScrollViewForKeyboardNotification:(id)arg1;	// IMP=0x000000000004be77
- (unsigned long long)pageIndexForAnnotation:(id)arg1;	// IMP=0x000000000004bd79
- (void)annotationDidEndEditing:(id)arg1;	// IMP=0x000000000004bcfa
- (void)annotationWillBeginEditing:(id)arg1;	// IMP=0x000000000004bc66
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004b956
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3;	// IMP=0x000000000004b267
- (void)removeDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;	// IMP=0x000000000004b200
- (void)addDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;	// IMP=0x000000000004b18e
- (void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004af30
- (void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a88c
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;	// IMP=0x000000000004a5dc
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;	// IMP=0x0000000000049f29
- (void)updatePDFScrollViewMinimumNumberOfTouches;	// IMP=0x0000000000049bf7
- (unsigned long long)_scrollViewMinimumNumberOfTouches;	// IMP=0x0000000000049b90
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000049a9a
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000049369
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000492a6
- (void)dealloc;	// IMP=0x000000000004920e
- (void)_resetAnimationProperties;	// IMP=0x00000000000491d5
- (id)initWithPDFView:(id)arg1;	// IMP=0x0000000000049024

@end

