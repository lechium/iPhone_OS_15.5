//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, PKPaletteOptionButtonCell, PKPaletteOptionSwitchCell, UIStackView, UITraitCollection;
@protocol PKPaletteMoreOptionsViewControllerDelegate;

@interface PKPaletteMoreOptionsViewController : UIViewController
{
    _Bool _shouldShowAutoMinimizeOption;	// 8 = 0x8
    _Bool _shouldShowFingerDrawsOption;	// 9 = 0x9
    _Bool _autoHideOn;	// 10 = 0xa
    _Bool _isFingerDrawsOn;	// 11 = 0xb
    _Bool _shouldShowTapToRadarOption;	// 12 = 0xc
    _Bool _shouldShowOpenPencilSettingsOption;	// 13 = 0xd
    id <PKPaletteMoreOptionsViewControllerDelegate> _delegate;	// 16 = 0x10
    UITraitCollection *_externalTraitCollection;	// 24 = 0x18
    NSArray *_stackViewPositioningConstraints;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    PKPaletteOptionSwitchCell *_autoMinimizeCell;	// 48 = 0x30
    PKPaletteOptionSwitchCell *_shapesCell;	// 56 = 0x38
    PKPaletteOptionSwitchCell *_fingerDrawsCell;	// 64 = 0x40
    PKPaletteOptionButtonCell *_tapToRadarCell;	// 72 = 0x48
    PKPaletteOptionButtonCell *_openPencilSettingsCell;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f3f4a
@property(retain, nonatomic) PKPaletteOptionButtonCell *openPencilSettingsCell; // @synthesize openPencilSettingsCell=_openPencilSettingsCell;
@property(retain, nonatomic) PKPaletteOptionButtonCell *tapToRadarCell; // @synthesize tapToRadarCell=_tapToRadarCell;
@property(retain, nonatomic) PKPaletteOptionSwitchCell *fingerDrawsCell; // @synthesize fingerDrawsCell=_fingerDrawsCell;
@property(retain, nonatomic) PKPaletteOptionSwitchCell *shapesCell; // @synthesize shapesCell=_shapesCell;
@property(retain, nonatomic) PKPaletteOptionSwitchCell *autoMinimizeCell; // @synthesize autoMinimizeCell=_autoMinimizeCell;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *stackViewPositioningConstraints; // @synthesize stackViewPositioningConstraints=_stackViewPositioningConstraints;
@property(retain, nonatomic) UITraitCollection *externalTraitCollection; // @synthesize externalTraitCollection=_externalTraitCollection;
@property(nonatomic) _Bool shouldShowOpenPencilSettingsOption; // @synthesize shouldShowOpenPencilSettingsOption=_shouldShowOpenPencilSettingsOption;
@property(nonatomic) _Bool shouldShowTapToRadarOption; // @synthesize shouldShowTapToRadarOption=_shouldShowTapToRadarOption;
@property(nonatomic) _Bool isFingerDrawsOn; // @synthesize isFingerDrawsOn=_isFingerDrawsOn;
@property(nonatomic, getter=isAutoHideOn) _Bool autoHideOn; // @synthesize autoHideOn=_autoHideOn;
@property(nonatomic) _Bool shouldShowFingerDrawsOption; // @synthesize shouldShowFingerDrawsOption=_shouldShowFingerDrawsOption;
@property(nonatomic) _Bool shouldShowAutoMinimizeOption; // @synthesize shouldShowAutoMinimizeOption=_shouldShowAutoMinimizeOption;
@property(nonatomic) __weak id <PKPaletteMoreOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_contentSizeMinWidth;	// IMP=0x00000000000f3d34
- (void)_updateContentSize;	// IMP=0x00000000000f3be7
- (void)_removeCell:(id)arg1;	// IMP=0x00000000000f3b68
- (void)_installCell:(id)arg1;	// IMP=0x00000000000f3af6
- (_Bool)_isCellInstalled:(id)arg1;	// IMP=0x00000000000f3a61
- (void)_reloadItems;	// IMP=0x00000000000f319b
- (void)_handleOpenPencilSettingsCellTapped;	// IMP=0x00000000000f30fe
- (_Bool)_shouldRemoveOpenPencilSettingsCell;	// IMP=0x00000000000f3095
- (_Bool)_shouldInstallOpenPencilSettingsCell;	// IMP=0x00000000000f3029
- (id)_makeOpenPencilSettingsCell;	// IMP=0x00000000000f2e1e
- (void)_handleTapToRadarCellTapped;	// IMP=0x00000000000f2d5e
- (_Bool)_shouldRemoveTapToRadarCell;	// IMP=0x00000000000f2ce2
- (_Bool)_shouldInstallTapToRadarCell;	// IMP=0x00000000000f2c63
- (id)_makeTapToRadarCell;	// IMP=0x00000000000f2a58
- (void)_fingerDrawsCellDidChangeValue:(id)arg1;	// IMP=0x00000000000f29c2
- (void)_autoMinimizeCellDidChangeValue:(id)arg1;	// IMP=0x00000000000f294f
- (void)_updateFingerDrawsCell;	// IMP=0x00000000000f2726
- (void)_updateAutoMinimizeCell;	// IMP=0x00000000000f26a6
- (id)_makeAutoMinimizeCell;	// IMP=0x00000000000f2572
- (void)updateUIForTraitCollection:(id)arg1;	// IMP=0x00000000000f24dc
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000f242c
- (void)viewDidLoad;	// IMP=0x00000000000f1e15

@end

