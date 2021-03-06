//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <SearchUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITextField;
@protocol SearchUIKeyboardableTableViewDelegate;

@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate>
{
    _Bool _shouldHideTableCellsUnderKeyboard;	// 8 = 0x8
    double _currentKeyboardHeight;	// 16 = 0x10
    UITextField *_textField;	// 24 = 0x18
    id <SearchUIKeyboardableTableViewDelegate> _interactionDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000757e5
@property __weak id <SearchUIKeyboardableTableViewDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool shouldHideTableCellsUnderKeyboard; // @synthesize shouldHideTableCellsUnderKeyboard=_shouldHideTableCellsUnderKeyboard;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
- (void)keyboardFrameChanged:(id)arg1;	// IMP=0x00000000000755f4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000755ec
- (void)selectAllTextInTextField;	// IMP=0x0000000000075363
- (void)showKeyboard;	// IMP=0x0000000000075220
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000075191
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000074f2a
- (_Bool)contentVisibleUnderKeyboard;	// IMP=0x0000000000074e51
- (double)contentHeight;	// IMP=0x0000000000074e01
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000074cf3
- (void)scrollIndexPathToVisible:(id)arg1;	// IMP=0x0000000000074c51
- (void)moveCursorToPosition:(id)arg1;	// IMP=0x0000000000074b94
- (void)moveCursorToEnd;	// IMP=0x0000000000074b25
- (void)moveCursorToBeginning;	// IMP=0x0000000000074ab6
- (_Bool)canHighlightRowAtIndexPath:(id)arg1;	// IMP=0x0000000000074aae
- (void)selectHighlightedRow;	// IMP=0x00000000000749d5
- (id)indexPathForNextSelectableIndexPath:(id)arg1 upward:(_Bool)arg2;	// IMP=0x0000000000074683
- (void)highlightNextRowAtIndexPath:(id)arg1 upward:(_Bool)arg2;	// IMP=0x0000000000074605
- (void)downArrowPressed:(id)arg1;	// IMP=0x00000000000742f9
- (void)upArrowPressed:(id)arg1;	// IMP=0x0000000000074039
- (void)highlightRowAtIndexPath:(id)arg1;	// IMP=0x0000000000073fad
- (id)indexPathToSelectForKeyboardOnQuickReturn;	// IMP=0x0000000000073f90
- (void)returnKeyPressed;	// IMP=0x0000000000073ecb
- (void)goBack;	// IMP=0x0000000000073e81
- (void)deletePressed;	// IMP=0x0000000000073e6f
- (void)leftArrowPressed;	// IMP=0x0000000000073e2a
- (void)rightArrowPressed;	// IMP=0x0000000000073de5
- (void)escapeButtonPressed;	// IMP=0x0000000000073ccf
- (_Bool)isOnCard;	// IMP=0x0000000000073c5c
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000073c54
- (void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000073b8c
- (void)setCollectionView:(id)arg1;	// IMP=0x0000000000073abf
- (void)viewDidLoad;	// IMP=0x0000000000073a90
- (id)init;	// IMP=0x00000000000739fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

