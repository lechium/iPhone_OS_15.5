//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, UITextView;
@protocol CKConversationListControllerProtocol;

@interface CKInboxViewController : UIViewController <UITextViewDelegate, UICollectionViewDelegate>
{
    _Bool _isVisible;	// 8 = 0x8
    UIViewController<CKConversationListControllerProtocol> *_conversationListController;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_collectionViewDataSource;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    NSMutableArray *_tableCellDataArray;	// 40 = 0x28
    NSMutableArray *_categoriesCellDataArray;	// 48 = 0x30
    NSMutableArray *_junkCellDataArray;	// 56 = 0x38
    NSMutableArray *_footerCellDataArray;	// 64 = 0x40
    UITextView *_stickyFooterTextView;	// 72 = 0x48
    UITextView *_scrollingFooterTextView;	// 80 = 0x50
    long long _primaryIndexSection;	// 88 = 0x58
    long long _categoriesIndexSection;	// 96 = 0x60
    long long _junkIndexSection;	// 104 = 0x68
    long long _footerIndexSection;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000524687
@property(nonatomic) long long footerIndexSection; // @synthesize footerIndexSection=_footerIndexSection;
@property(nonatomic) long long junkIndexSection; // @synthesize junkIndexSection=_junkIndexSection;
@property(nonatomic) long long categoriesIndexSection; // @synthesize categoriesIndexSection=_categoriesIndexSection;
@property(nonatomic) long long primaryIndexSection; // @synthesize primaryIndexSection=_primaryIndexSection;
@property(retain, nonatomic) UITextView *scrollingFooterTextView; // @synthesize scrollingFooterTextView=_scrollingFooterTextView;
@property(retain, nonatomic) UITextView *stickyFooterTextView; // @synthesize stickyFooterTextView=_stickyFooterTextView;
@property(retain, nonatomic) NSMutableArray *footerCellDataArray; // @synthesize footerCellDataArray=_footerCellDataArray;
@property(retain, nonatomic) NSMutableArray *junkCellDataArray; // @synthesize junkCellDataArray=_junkCellDataArray;
@property(retain, nonatomic) NSMutableArray *categoriesCellDataArray; // @synthesize categoriesCellDataArray=_categoriesCellDataArray;
@property(retain, nonatomic) NSMutableArray *tableCellDataArray; // @synthesize tableCellDataArray=_tableCellDataArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController; // @synthesize conversationListController=_conversationListController;
- (id)_getHeaderStringForExtension:(id)arg1;	// IMP=0x00000000005243e2
- (id)_setHeaderAttributedString;	// IMP=0x0000000000524158
- (id)_getSpamExtensionName;	// IMP=0x0000000000524140
- (_Bool)_spamFilteringEnabled;	// IMP=0x0000000000524130
- (void)_contentSizeCategoryChanged;	// IMP=0x00000000005240af
- (void)_spamFilteringStateChanged;	// IMP=0x0000000000524021
- (void)_chatUnreadCountDidChange:(id)arg1;	// IMP=0x0000000000523ff6
- (id)_conversationList;	// IMP=0x0000000000523fdd
- (void)updateBackButton;	// IMP=0x0000000000523d94
- (void)reloadCollectionViewDataWithConversationListUpdate:(_Bool)arg1;	// IMP=0x0000000000523b3f
- (void)reloadCollectionViewData;	// IMP=0x0000000000523b28
- (id)footerTextView;	// IMP=0x0000000000523079
- (_Bool)shouldHideInboxFooterTextView;	// IMP=0x000000000052306c
- (unsigned long long)_filterModeForIndexPath:(id)arg1;	// IMP=0x0000000000522c16
- (id)_indexPathForFilterMode:(unsigned long long)arg1;	// IMP=0x0000000000522bd2
- (id)_unreadCountStringForIndexPath:(id)arg1;	// IMP=0x0000000000522b1a
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000005229cc
- (void)_highlightCurrentfilterMode;	// IMP=0x00000000005228d1
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000522557
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000521144
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000521093
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000520f81
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000520bc8
- (void)viewDidLoad;	// IMP=0x00000000005208e6
- (id)initWithConversationListController:(id)arg1;	// IMP=0x0000000000520869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

