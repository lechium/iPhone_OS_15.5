//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableMessagesExtensionViewModel-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;
@protocol PXCMMSuggestion;

@interface PXMessagesExtensionViewModel <PXMutableMessagesExtensionViewModel>
{
    _Bool _drawerActive;	// 8 = 0x8
    id <PXCMMSuggestion> _selectedSuggestion;	// 16 = 0x10
    NSURL *_selectedURL;	// 24 = 0x18
    unsigned long long _selectedActivityType;	// 32 = 0x20
    NSString *_selectedMessageText;	// 40 = 0x28
    NSDate *_selectedMessageDate;	// 48 = 0x30
    UIViewController *_presentedViewController;	// 56 = 0x38
    NSArray *_recipients;	// 64 = 0x40
}

+ (id)sharedRootViewModel;	// IMP=0x000000000053f051
- (void).cxx_destruct;	// IMP=0x000000000053efdc
@property(readonly, nonatomic, getter=isDrawerActive) _Bool drawerActive; // @synthesize drawerActive=_drawerActive;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) NSDate *selectedMessageDate; // @synthesize selectedMessageDate=_selectedMessageDate;
@property(readonly, copy, nonatomic) NSString *selectedMessageText; // @synthesize selectedMessageText=_selectedMessageText;
@property(readonly, nonatomic) unsigned long long selectedActivityType; // @synthesize selectedActivityType=_selectedActivityType;
@property(readonly, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property(readonly, nonatomic) id <PXCMMSuggestion> selectedSuggestion; // @synthesize selectedSuggestion=_selectedSuggestion;
- (void)setRecipients:(id)arg1;	// IMP=0x000000000053eed7
- (void)clearSelection;	// IMP=0x000000000053ee87
- (void)setSelectedMessageDate:(id)arg1;	// IMP=0x000000000053ee21
- (void)setSelectedMessageText:(id)arg1;	// IMP=0x000000000053edbc
- (void)setPresentedViewController:(id)arg1;	// IMP=0x000000000053ed56
- (void)setDrawerActive:(_Bool)arg1;	// IMP=0x000000000053ed2e
- (void)setSelectedActivityType:(unsigned long long)arg1;	// IMP=0x000000000053ed04
- (void)setSelectedURL:(id)arg1;	// IMP=0x000000000053ec8f
- (void)setSelectedSuggestion:(id)arg1;	// IMP=0x000000000053ec1a
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000053ebeb
- (id)mutableChangeObject;	// IMP=0x000000000053ebe2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

