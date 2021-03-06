//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/UIGestureRecognizerDelegate-Protocol.h>

@class CapsuleNavigationBarViewController, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CapsuleHidingStepperViewController <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_tapRecognizer;	// 16 = 0x10
    CapsuleNavigationBarViewController *_capsuleViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000dd9da
@property __weak CapsuleNavigationBarViewController *capsuleViewController; // @synthesize capsuleViewController=_capsuleViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000dd904
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000dd8fc
- (void)_didReceivePan:(id)arg1;	// IMP=0x00000000000dd810
- (void)_didReceiveTap:(id)arg1;	// IMP=0x00000000000dd7f7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000dd70d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000dd5da
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000dd574
- (void)viewDidLoad;	// IMP=0x00000000000dd49b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

