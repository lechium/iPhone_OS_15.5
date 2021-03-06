//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>

@class AALocalContactInfo, AAUIProfilePictureStore, NSArray, NSString, UIBarButtonItem;
@protocol AAUIAccountContactSelectorDelegate;

@interface AAUIAccountContactSelectorViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_suggestedContacts;	// 8 = 0x8
    AALocalContactInfo *_selectedContact;	// 16 = 0x10
    AAUIProfilePictureStore *_pictureStore;	// 24 = 0x18
    UIBarButtonItem *_continueButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000061912
- (void)_selectContact;	// IMP=0x00000000000618bb
- (void)_setupTableView;	// IMP=0x000000000006168e
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006165f
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000006161b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000614a0
- (_Bool)_isOtherContactRowForIndexPath:(id)arg1;	// IMP=0x0000000000061402
- (id)_suggestedContactCellForTableView:(id)arg1 atRow:(long long)arg2;	// IMP=0x000000000006131e
- (id)_otherContactCellForTableView:(id)arg1;	// IMP=0x0000000000061117
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006105d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000006103c
- (id)_pictureStore;	// IMP=0x0000000000060ffb
- (void)dealloc;	// IMP=0x0000000000060f77
- (void)viewDidLoad;	// IMP=0x0000000000060dc4
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000000060d3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUIAccountContactSelectorDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

