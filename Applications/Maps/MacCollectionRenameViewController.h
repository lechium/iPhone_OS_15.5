//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MKMapItem, NSString, UIButton, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface MacCollectionRenameViewController : UIViewController
{
    UILabel *_label;	// 8 = 0x8
    UITextField *_textField;	// 16 = 0x10
    UIButton *_cancelButton;	// 24 = 0x18
    UIButton *_saveButton;	// 32 = 0x20
    MKMapItem *_mapItem;	// 40 = 0x28
    CDUnknownBlockType _saveHandler;	// 48 = 0x30
    CDUnknownBlockType _cancelHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000694867
@property(readonly, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(readonly, nonatomic) CDUnknownBlockType saveHandler; // @synthesize saveHandler=_saveHandler;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000069481f
- (id)keyCommands;	// IMP=0x001000000069477a
- (void)_cancel;	// IMP=0x0010000000694741
- (void)_save;	// IMP=0x00100000006946c9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000694680
- (void)viewDidLoad;	// IMP=0x0010000000693610
- (void)loadView;	// IMP=0x00100000006935a3
- (id)initWithMapItem:(id)arg1 saveHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006934bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
