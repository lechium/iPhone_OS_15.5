//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/CNContactPickerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface PKContactPicker : NSObject <CNContactPickerDelegate>
{
    UIViewController *_pickerViewController;	// 8 = 0x8
    CDUnknownBlockType _selectionHandler;	// 16 = 0x10
    CDUnknownBlockType _cancelationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000040cbd9
@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(retain, nonatomic) UIViewController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x000000000040c7bc
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x000000000040c7a9
- (id)initWithSelectionHandler:(CDUnknownBlockType)arg1 cancelationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000040c63e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

