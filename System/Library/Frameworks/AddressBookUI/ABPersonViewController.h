//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AddressBookUI/CNContactViewControllerPrivateDelegate-Protocol.h>
#import <AddressBookUI/UIViewControllerRestoration-Protocol.h>

@class CNContactStore, CNContactViewController, NSArray, NSString;
@protocol ABPersonViewControllerDelegate;

@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration>
{
    _Bool _allowsEditing;	// 8 = 0x8
    _Bool _allowsActions;	// 9 = 0x9
    _Bool _shouldShowLinkedPeople;	// 10 = 0xa
    _Bool _highlightedImportant;	// 11 = 0xb
    int _style;	// 12 = 0xc
    int _highlightedProperty;	// 16 = 0x10
    int _highlightedMultiValueIdentifier;	// 20 = 0x14
    const void *_addressBook;	// 24 = 0x18
    const void *_displayedPerson;	// 32 = 0x20
    id <ABPersonViewControllerDelegate> _personViewDelegate;	// 40 = 0x28
    NSArray *_displayedProperties;	// 48 = 0x30
    CNContactViewController *_cnContactViewController;	// 56 = 0x38
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x00000000000036be
@property(retain, nonatomic) CNContactViewController *cnContactViewController; // @synthesize cnContactViewController=_cnContactViewController;
@property(nonatomic) _Bool highlightedImportant; // @synthesize highlightedImportant=_highlightedImportant;
@property(nonatomic) int highlightedMultiValueIdentifier; // @synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier;
@property(nonatomic) int highlightedProperty; // @synthesize highlightedProperty=_highlightedProperty;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(nonatomic) id <ABPersonViewControllerDelegate> personViewDelegate; // @synthesize personViewDelegate=_personViewDelegate;
- (void)reloadContactViewController;	// IMP=0x0000000000003b8c
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(_Bool)arg4;	// IMP=0x0000000000003b77
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;	// IMP=0x0000000000003b65
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(_Bool)arg3;	// IMP=0x0000000000003b16
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x0000000000003abd
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;	// IMP=0x000000000000399b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000003945
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000003910
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000000359b
- (void)loadView;	// IMP=0x00000000000034e0
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;	// IMP=0x00000000000034cb
@property(nonatomic) const void *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(nonatomic) const void *addressBook; // @synthesize addressBook=_addressBook;
- (void)dealloc;	// IMP=0x000000000000329d
- (id)initWithAddressBook:(void *)arg1;	// IMP=0x0000000000003284
- (id)initWithStyle:(int)arg1;	// IMP=0x0000000000003268
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000003253
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;	// IMP=0x000000000000323e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;	// IMP=0x0000000000003143
- (id)init;	// IMP=0x000000000000312d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
