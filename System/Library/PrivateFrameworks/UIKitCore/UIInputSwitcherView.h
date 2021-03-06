//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIInputSwitcherSplitMenu-Protocol.h>

@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView <_UIInputSwitcherSplitMenu>
{
    NSMutableArray *m_inputModes;	// 264 = 0x108
    NSArray *m_inputSwitcherItems;	// 272 = 0x110
    _Bool m_isForDictation;	// 280 = 0x118
    UIInputSwitcherGestureState *m_gestureState;	// 288 = 0x120
    _Bool _messagesWriteboardFromSwitcher;	// 296 = 0x128
    _Bool _fileReportFromSwitcher;	// 297 = 0x129
    _Bool _showsSwitches;	// 298 = 0x12a
    CDUnknownBlockType m_finishSplitTransitionBlock;	// 304 = 0x130
}

+ (_Bool)canShowKeyboardSettings;	// IMP=0x00000000008f921c
+ (id)activeInstance;	// IMP=0x00000000008f8ee9
+ (id)sharedInstance;	// IMP=0x00000000008f8e95
@property(nonatomic) _Bool showsSwitches; // @synthesize showsSwitches=_showsSwitches;
@property(nonatomic) _Bool fileReportFromSwitcher; // @synthesize fileReportFromSwitcher=_fileReportFromSwitcher;
@property(nonatomic) _Bool messagesWriteboardFromSwitcher; // @synthesize messagesWriteboardFromSwitcher=_messagesWriteboardFromSwitcher;
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=m_finishSplitTransitionBlock;
@property(readonly, nonatomic) NSArray *inputModes; // @synthesize inputModes=m_inputModes;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3 isForDictation:(_Bool)arg4 tapAction:(CDUnknownBlockType)arg5;	// IMP=0x00000000008fbc7f
- (_Bool)didHitDockItemWithinTypingWindow;	// IMP=0x00000000008fbbd6
- (_Bool)_isHandBiasSwitchVisible;	// IMP=0x00000000008fbb8a
- (void)switchAction;	// IMP=0x00000000008fbb76
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000008fb7e8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000008fb714
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fb6de
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fb67f
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fb605
- (id)fontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fb5b4
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fb57e
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fb548
- (unsigned long long)defaultSelectedIndex;	// IMP=0x00000000008fb4fb
- (id)defaultInputMode;	// IMP=0x00000000008fb427
- (id)_itemWithIdentifier:(id)arg1;	// IMP=0x00000000008fb2f8
- (struct CGSize)preferredSize;	// IMP=0x00000000008faede
- (unsigned long long)numberOfItems;	// IMP=0x00000000008fae9a
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fab32
- (void)willFade;	// IMP=0x00000000008fab16
- (void)didShow;	// IMP=0x00000000008fa9f5
- (_Bool)shouldShow;	// IMP=0x00000000008fa9a2
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;	// IMP=0x00000000008fa919
- (void)selectPreviousInputMode;	// IMP=0x00000000008fa8cc
- (id)previousInputMode;	// IMP=0x00000000008fa824
- (void)selectNextInputMode;	// IMP=0x00000000008fa7d7
- (id)nextInputMode;	// IMP=0x00000000008fa740
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fa5b7
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fa564
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000008fa2cc
- (void)_segmentControlValueDidChange:(id)arg1;	// IMP=0x00000000008fa22e
- (void)selectInputMode:(id)arg1;	// IMP=0x00000000008fa1f4
- (void)setInputMode:(id)arg1;	// IMP=0x00000000008f9fed
- (void)returnToKeyboardIfNeeded;	// IMP=0x00000000008f9f8d
- (void)fadeWithDelay:(double)arg1;	// IMP=0x00000000008f9f4c
- (void)selectRowForInputMode:(id)arg1;	// IMP=0x00000000008f9eb3
- (long long)_indexOfFastSwitchToggleModeForIdentifier:(id)arg1;	// IMP=0x00000000008f9e01
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1;	// IMP=0x00000000008f9d54
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;	// IMP=0x00000000008f9cd2
- (id)selectedInputMode;	// IMP=0x00000000008f9c2a
- (void)toggleKeyboardFloatingPreference;	// IMP=0x00000000008f9bc3
- (void)_reloadInputSwitcherItems;	// IMP=0x00000000008f92eb
- (_Bool)_canAddLaunchItem;	// IMP=0x00000000008f9214
- (void)reloadInputModes;	// IMP=0x00000000008f8f54
- (void)didFinishSplitTransition;	// IMP=0x00000000008f8ef6
- (void)dealloc;	// IMP=0x00000000008f8e21
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008f8d5a

@end

