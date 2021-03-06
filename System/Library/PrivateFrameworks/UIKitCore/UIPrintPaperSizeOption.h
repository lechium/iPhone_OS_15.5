//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPrintOptionListDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIPrintPaperSizeOption <UIPrintOptionListDelegate>
{
    NSObject<OS_dispatch_queue> *_pkPrinterQueue;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSArray *_loadedPaperSizes;	// 24 = 0x18
    NSArray *_supportedPaperSizes;	// 32 = 0x20
    NSArray *_loadedPaperNames;	// 40 = 0x28
    NSArray *_supportedPaperNames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004bd601
@property(retain, nonatomic) NSArray *supportedPaperNames; // @synthesize supportedPaperNames=_supportedPaperNames;
@property(retain, nonatomic) NSArray *loadedPaperNames; // @synthesize loadedPaperNames=_loadedPaperNames;
@property(retain, nonatomic) NSArray *supportedPaperSizes; // @synthesize supportedPaperSizes=_supportedPaperSizes;
@property(retain, nonatomic) NSArray *loadedPaperSizes; // @synthesize loadedPaperSizes=_loadedPaperSizes;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (void)didSelectPrintOption;	// IMP=0x00000000004bd53e
- (id)summary;	// IMP=0x00000000004bd4df
- (id)selectedPaperName:(id)arg1;	// IMP=0x00000000004bd3a8
- (void)setCurrentPrinter:(id)arg1;	// IMP=0x00000000004bd2f1
- (void)updatePrinterInfo;	// IMP=0x00000000004bd26a
- (void)updateSelectedPaper;	// IMP=0x00000000004bce0f
- (id)defaultPaperIndex;	// IMP=0x00000000004bca78
- (id)printOptionTableViewCell;	// IMP=0x00000000004bc914
- (void)listItemSelected:(id)arg1;	// IMP=0x00000000004bc83d
- (id)selectedItem;	// IMP=0x00000000004bc82b
- (id)itemList;	// IMP=0x00000000004bc706
- (id)getPaperNames:(id)arg1;	// IMP=0x00000000004bc423
- (_Bool)shouldShow;	// IMP=0x00000000004bc1e7
- (id)paperList;	// IMP=0x00000000004bbe49
- (id)_removeRollsFrom:(id)arg1;	// IMP=0x00000000004bbd75
- (void)dealloc;	// IMP=0x00000000004bbd2b
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;	// IMP=0x00000000004bbbfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

