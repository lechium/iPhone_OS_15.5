//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKColorPickerDelegate-Protocol.h>

@class NSString, PKColorPicker;

@interface PKPaletteStandardColorPickerController <PKColorPickerDelegate>
{
    PKColorPicker *_colorPickerViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001ce26b
@property(retain, nonatomic) PKColorPicker *colorPickerViewController; // @synthesize colorPickerViewController=_colorPickerViewController;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;	// IMP=0x00000000001ce1fa
- (void)setSelectedColorForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001ce1a1
- (void)setColorUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000001ce155
- (long long)colorUserInterfaceStyle;	// IMP=0x00000000001ce111
- (void)setSelectedColor:(id)arg1;	// IMP=0x00000000001ce09f
- (id)selectedColor;	// IMP=0x00000000001ce04f
- (id)viewController;	// IMP=0x00000000001ce03d
- (id)init;	// IMP=0x00000000001cdfc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
