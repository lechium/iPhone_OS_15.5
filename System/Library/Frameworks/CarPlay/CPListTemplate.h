//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPListClientTemplateDelegate-Protocol.h>

@class CPAssistantCellConfiguration, CPBarButton, NAFuture, NSArray, NSMutableSet, NSString;
@protocol CPListTemplateDelegate;

@interface CPListTemplate <CPListClientTemplateDelegate, CPBarButtonProviding>
{
    id <CPListTemplateDelegate> _delegate;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSArray *_emptyViewTitleVariants;	// 32 = 0x20
    NSArray *_emptyViewSubtitleVariants;	// 40 = 0x28
    CPAssistantCellConfiguration *_assistantCellConfiguration;	// 48 = 0x30
    NSMutableSet *_itemsToReload;	// 56 = 0x38
}

+ (unsigned long long)maximumSectionCount;	// IMP=0x000000000001751b
+ (unsigned long long)maximumItemCount;	// IMP=0x00000000000174d1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000174c9
- (void).cxx_destruct;	// IMP=0x0000000000019ad4
@property(retain, nonatomic) NSMutableSet *itemsToReload; // @synthesize itemsToReload=_itemsToReload;
@property(retain, nonatomic) CPAssistantCellConfiguration *assistantCellConfiguration; // @synthesize assistantCellConfiguration=_assistantCellConfiguration;
@property(copy, nonatomic) NSArray *emptyViewSubtitleVariants; // @synthesize emptyViewSubtitleVariants=_emptyViewSubtitleVariants;
@property(copy, nonatomic) NSArray *emptyViewTitleVariants; // @synthesize emptyViewTitleVariants=_emptyViewTitleVariants;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <CPListTemplateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleActionForControlIdentifier:(id)arg1;	// IMP=0x000000000001952a
- (void)listTemplateWithIdentifier:(id)arg1 didSelectImageAtIndex:(unsigned long long)arg2 inImageRowItemWithIdentifier:(id)arg3;	// IMP=0x000000000001912f
- (void)listTemplateWithIdentifier:(id)arg1 didSelectListItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018e88
- (id)_itemForHostItemWithIdentifier:(id)arg1;	// IMP=0x0000000000018b21
- (void)performUpdate;	// IMP=0x000000000001890d
- (void)_setItemNeedsUpdate:(id)arg1;	// IMP=0x000000000001888e
- (void)_linkItemsInSection:(id)arg1;	// IMP=0x000000000001878a
- (id)indexPathForItem:(id)arg1;	// IMP=0x0000000000018685
- (void)updateHeaderImage:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x000000000001857c
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) unsigned long long sectionCount;
- (void)updateSections:(id)arg1;	// IMP=0x000000000001806e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017ef1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017c11
- (id)initWithTitle:(id)arg1 sections:(id)arg2 assistantCellConfiguration:(id)arg3;	// IMP=0x0000000000017b44
- (id)initWithTitle:(id)arg1 sections:(id)arg2;	// IMP=0x0000000000017a4c
- (id)_sectionsByTrimmingAndLinkingSections:(id)arg1;	// IMP=0x0000000000017526

// Remaining properties
@property(retain, nonatomic) CPBarButton *backButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property(readonly) Class superclass;
@property(retain, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;

@end
