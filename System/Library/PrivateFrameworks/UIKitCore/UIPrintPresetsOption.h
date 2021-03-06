//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPrintOptionListDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPrintPresetsOption <UIPrintOptionListDelegate>
{
    NSArray *_presets;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSMutableArray *_presetNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008f2fa6
@property(retain, nonatomic) NSMutableArray *presetNames; // @synthesize presetNames=_presetNames;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *presets; // @synthesize presets=_presets;
- (void)didSelectPrintOption;	// IMP=0x00000000008f2f0b
- (id)summary;	// IMP=0x00000000008f2e50
- (void)updatePrinterInfo;	// IMP=0x00000000008f2d8f
- (void)setCurrentPrinter:(id)arg1;	// IMP=0x00000000008f2c76
- (id)supportedPresets;	// IMP=0x00000000008f259e
- (void)listItemSelected:(id)arg1;	// IMP=0x00000000008f23e0
- (id)selectedItem;	// IMP=0x00000000008f23ce
- (id)itemList;	// IMP=0x00000000008f236b
- (id)printOptionTableViewCell;	// IMP=0x00000000008f2207
- (_Bool)shouldShow;	// IMP=0x00000000008f1ed9
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;	// IMP=0x00000000008f1de1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

