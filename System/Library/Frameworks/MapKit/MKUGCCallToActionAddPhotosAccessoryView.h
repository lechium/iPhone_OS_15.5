//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface MKUGCCallToActionAddPhotosAccessoryView : UIView
{
    UIButton *_addPhotosButton;	// 8 = 0x8
    NSString *_glyphName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000067aea
@property(copy, nonatomic) NSString *glyphName; // @synthesize glyphName=_glyphName;
- (void)_contentSizeChanged;	// IMP=0x00000000000679e5
- (void)_setupButtons;	// IMP=0x0000000000067602
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000675df
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006752d

@end

