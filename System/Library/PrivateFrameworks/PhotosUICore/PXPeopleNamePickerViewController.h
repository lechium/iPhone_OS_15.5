//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>
#import <PhotosUICore/UITextFieldDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PXPeopleNamePickerResultsTableViewController, PXPeopleNamePickerTitleView;
@protocol PXPeopleNamePickerViewControllerDelegate;

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate>
{
    PXPeopleNamePickerTitleView *_titleView;	// 8 = 0x8
    id <PXPeopleNamePickerViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_savedRightBarItems;	// 24 = 0x18
    double _yOffset;	// 32 = 0x20
    NSLayoutConstraint *_resultsViewBottomConstraint;	// 40 = 0x28
    PXPeopleNamePickerResultsTableViewController *_resultsController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009363f3
@property(retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) NSLayoutConstraint *resultsViewBottomConstraint; // @synthesize resultsViewBottomConstraint=_resultsViewBottomConstraint;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(retain, nonatomic) NSArray *savedRightBarItems; // @synthesize savedRightBarItems=_savedRightBarItems;
@property(nonatomic) __weak id <PXPeopleNamePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPeopleNamePickerTitleView *titleView; // @synthesize titleView=_titleView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000936205
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000936172
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000009360f6
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000935fbb
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0000000000935f49
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000935e82
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000935dc4
- (void)_changePlaceholderTextOfTextField:(id)arg1 toColor:(id)arg2;	// IMP=0x0000000000935cf3
- (void)_hideResultsView;	// IMP=0x0000000000935c1f
- (void)_showResultsView;	// IMP=0x00000000009358c5
- (double)_titleViewMaxWidthForEditing:(_Bool)arg1;	// IMP=0x00000000009356e9
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x0000000000935453
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000000935413
- (void)_applicationDidEnterBackground;	// IMP=0x0000000000935401
- (void)endNamingSession;	// IMP=0x00000000009353ef
- (void)adjustForAccessoryViewYOffset:(double)arg1;	// IMP=0x00000000009353dd
- (void)viewDidLayoutSubviews;	// IMP=0x000000000093534d
- (void)viewDidLoad;	// IMP=0x0000000000935212
- (id)initWithPerson:(id)arg1 orFace:(id)arg2;	// IMP=0x0000000000934c37
- (id)initWithFace:(id)arg1;	// IMP=0x0000000000934b78
- (id)initWithPerson:(id)arg1;	// IMP=0x0000000000934ab9
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000934a32
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009349ab
- (id)init;	// IMP=0x0000000000934924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

