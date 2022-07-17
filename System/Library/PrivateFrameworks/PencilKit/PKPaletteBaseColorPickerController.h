//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKPaletteColorPicker-Protocol.h>
#import <PencilKit/PKPaletteColorPickerController-Protocol.h>

@class NSString, UIColor, UIViewController;
@protocol PKPaletteColorPicker, PKPaletteColorPickerControllerDelegate;

@interface PKPaletteBaseColorPickerController : NSObject <PKPaletteColorPickerController, PKPaletteColorPicker>
{
    id <PKPaletteColorPicker> _colorPicker;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    id <PKPaletteColorPickerControllerDelegate> _delegate;	// 24 = 0x18
    UIColor *_selectedColor;	// 32 = 0x20
    long long _colorUserInterfaceStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001cdf8c
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property(copy, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) __weak id <PKPaletteColorPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)setSelectedColorForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001cdf28
@property(readonly, nonatomic) id <PKPaletteColorPicker> colorPicker; // @synthesize colorPicker=_colorPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
