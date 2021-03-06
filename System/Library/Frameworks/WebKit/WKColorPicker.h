//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/UIColorPickerViewControllerDelegate-Protocol.h>
#import <WebKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKColorPicker : NSObject <WKFormControl, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    WKContentView *_view;	// 8 = 0x8
    struct RetainPtr<UIColorPickerViewController> _colorPickerViewController;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000041a817
- (void).cxx_destruct;	// IMP=0x000000000041a7e6
- (void)colorPickerViewControllerDidFinish:(id)arg1;	// IMP=0x000000000041a7c8
- (void)colorPickerViewControllerDidSelectColor:(id)arg1;	// IMP=0x000000000041a77f
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000041a761
- (void)controlEndEditing;	// IMP=0x000000000041a722
- (void)controlBeginEditing;	// IMP=0x000000000041a698
- (id)controlView;	// IMP=0x000000000041a690
- (void)configurePresentation;	// IMP=0x000000000041a5c1
- (void)updateColorPickerState;	// IMP=0x000000000041a4f3
- (id)focusedElementSuggestedColors;	// IMP=0x000000000041a3df
- (void)selectColor:(id)arg1;	// IMP=0x000000000041a3a9
- (id)initWithView:(id)arg1;	// IMP=0x000000000041a30e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

