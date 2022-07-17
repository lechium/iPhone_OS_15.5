//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKActionMenuGestureRecognizer, NSDate, UIButton;
@protocol CKActionMenuGestureRecognizerButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKActionMenuGestureRecognizerButton : NSObject
{
    CKActionMenuGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    id <CKActionMenuGestureRecognizerButtonDelegate> _delegate;	// 24 = 0x18
    NSDate *_gestureDidBeginDate;	// 32 = 0x20
}

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)arg1;	// IMP=0x000000000002334d
- (void).cxx_destruct;	// IMP=0x000000000002389f
@property(retain, nonatomic) NSDate *gestureDidBeginDate; // @synthesize gestureDidBeginDate=_gestureDidBeginDate;
@property(nonatomic) __weak id <CKActionMenuGestureRecognizerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)gestureRecognized:(id)arg1;	// IMP=0x000000000002360c
- (void)touchUpOutsideButton:(id)arg1;	// IMP=0x00000000000235a9
- (void)touchUpInsideButton:(id)arg1;	// IMP=0x000000000002353d
- (void)touchDownButton:(id)arg1;	// IMP=0x00000000000234f1
- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;	// IMP=0x00000000000233d2

@end
