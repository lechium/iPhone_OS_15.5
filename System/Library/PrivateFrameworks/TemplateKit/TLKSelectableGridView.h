//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerGridView;
@protocol TLKSelectableGridViewDelegate;

@interface TLKSelectableGridView <NUIContainerViewDelegate>
{
    long long _selectedIndex;	// 8 = 0x8
    NSArray *_tuples;	// 16 = 0x10
    id <TLKSelectableGridViewDelegate> _delegate;	// 24 = 0x18
    NSMutableArray *_buttons;	// 32 = 0x20
}

+ (unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(struct CGSize)arg2 containerView:(id)arg3;	// IMP=0x0000000000028962
+ (unsigned long long)maxColumns;	// IMP=0x0000000000028909
- (void).cxx_destruct;	// IMP=0x000000000002951e
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property __weak id <TLKSelectableGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
- (id)arrangedEntrySubviews;	// IMP=0x000000000002946b
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;	// IMP=0x0000000000029445
- (void)selectableGridButtonPressed:(id)arg1;	// IMP=0x0000000000029134
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)_createButton;	// IMP=0x0000000000029011
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;	// IMP=0x000000000002827e
- (void)observedPropertiesChanged;	// IMP=0x0000000000028066
- (id)setupContentView;	// IMP=0x0000000000027ba2

// Remaining properties
@property(retain, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

