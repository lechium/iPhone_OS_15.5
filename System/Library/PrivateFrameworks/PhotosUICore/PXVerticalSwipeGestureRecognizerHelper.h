//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject
{
    struct {
        _Bool shouldRecognizeSwipeDownGestureRecognizer;
    } _delegateRespondsTo;	// 8 = 0x8
    _Bool _allowSwipeUp;	// 9 = 0x9
    _Bool _allowSwipeDown;	// 10 = 0xa
    id <PXVerticalSwipeGestureRecognizerHelperDelegate> _delegate;	// 16 = 0x10
    NSMapTable *_dependentScrollViews;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000070b7e1
@property(readonly, nonatomic) NSMapTable *dependentScrollViews; // @synthesize dependentScrollViews=_dependentScrollViews;
@property(nonatomic) _Bool allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
@property(nonatomic) _Bool allowSwipeUp; // @synthesize allowSwipeUp=_allowSwipeUp;
@property(nonatomic) __weak id <PXVerticalSwipeGestureRecognizerHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1;	// IMP=0x000000000070b6ee
- (_Bool)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000070b560
- (_Bool)verticalSwipeGestureRecognizerShouldBegin:(id)arg1 ignoringScrollViews:(_Bool)arg2;	// IMP=0x000000000070b128
- (_Bool)verticalSwipeGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000070b114
- (id)init;	// IMP=0x000000000070b040

@end

