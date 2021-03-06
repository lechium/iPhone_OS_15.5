//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/APUISuggestionsWidgetViewDelegate-Protocol.h>
#import <AppPredictionUIWidget/ATXHomeScreenSuggestionClientObserver-Protocol.h>
#import <AppPredictionUIWidget/INUIAddVoiceShortcutViewControllerDelegate-Protocol.h>
#import <AppPredictionUIWidget/SBHWidgetContextMenuControlling-Protocol.h>

@class APUISuggestionsWidgetView, ATXProactiveSuggestion, NSArray, NSString;

@interface APUISuggestionsWidgetViewController <ATXHomeScreenSuggestionClientObserver, APUISuggestionsWidgetViewDelegate, SBHWidgetContextMenuControlling, INUIAddVoiceShortcutViewControllerDelegate>
{
    ATXProactiveSuggestion *_selectedSuggestion;	// 8 = 0x8
    _Bool _showingContextMenu;	// 16 = 0x10
    APUISuggestionsWidgetView *_widgetView;	// 24 = 0x18
}

+ (id)_actionWithSuggestion:(id)arg1;	// IMP=0x000000000000beec
+ (_Bool)_isSuggestionShortcut:(id)arg1;	// IMP=0x000000000000be75
+ (id)_shortcutWithSuggestion:(id)arg1;	// IMP=0x000000000000bb88
- (void).cxx_destruct;	// IMP=0x000000000000c128
@property(retain, nonatomic) APUISuggestionsWidgetView *widgetView; // @synthesize widgetView=_widgetView;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu; // @synthesize showingContextMenu=_showingContextMenu;
- (void)addVoiceShortcutViewControllerDidCancel:(id)arg1;	// IMP=0x000000000000c04e
- (void)addVoiceShortcutViewController:(id)arg1 didFinishWithVoiceShortcut:(id)arg2 error:(id)arg3;	// IMP=0x000000000000bf7d
- (void)didSelectApplicationShortcutItem:(id)arg1;	// IMP=0x000000000000b75e
- (_Bool)_canSaveSelectedSuggestion;	// IMP=0x000000000000b650
- (_Bool)_canDismissSelectedSuggestion;	// IMP=0x000000000000b4ac
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
- (void)willShowContextMenuAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000000b288
- (void)view:(id)arg1 didFailExecutingSuggestion:(id)arg2;	// IMP=0x000000000000af5f
- (void)view:(id)arg1 didFinishExecutingSuggestion:(id)arg2;	// IMP=0x000000000000ada7
- (void)view:(id)arg1 didTapSuggestion:(id)arg2;	// IMP=0x000000000000ac41
- (void)verifyLayoutSizeCompatibility;	// IMP=0x000000000000a9f7
- (void)_updateLayoutWithSuggestionClient:(id)arg1;	// IMP=0x000000000000a60e
- (void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)arg1;	// IMP=0x000000000000a53a
- (id)_suggestionIdsInLayout:(id)arg1;	// IMP=0x000000000000a323
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000a262
- (void)_updateWidgetViewIfPossible;	// IMP=0x000000000000a12b
- (void)viewDidLoad;	// IMP=0x0000000000009c05
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000009bfd
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000009b5b
- (id)initWithIdentifier:(id)arg1 suggestionsClient:(id)arg2 layoutSize:(unsigned long long)arg3;	// IMP=0x000000000000991e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

