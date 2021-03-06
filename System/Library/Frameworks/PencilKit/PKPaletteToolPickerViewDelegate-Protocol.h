//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>
#import <PencilKit/PKPalettePopoverPresenting-Protocol.h>

@class PKPaletteToolPickerView, PKPaletteToolView;

@protocol PKPaletteToolPickerViewDelegate <NSObject, PKPalettePopoverPresenting>
- (double)toolPickerView:(PKPaletteToolPickerView *)arg1 widthForToolAtIndex:(long long)arg2 isCompactSize:(_Bool)arg3;
- (void)toolPickerViewDidChangeTraitCollectionSizeClass:(PKPaletteToolPickerView *)arg1;
- (void)toolPickerDidToggleRulerTool:(PKPaletteToolPickerView *)arg1;
- (void)toolPicker:(PKPaletteToolPickerView *)arg1 didSelectTool:(PKPaletteToolView *)arg2 atIndex:(unsigned long long)arg3;
@end

