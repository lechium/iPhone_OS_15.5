//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectMultiplePicker : NSObject <UIPopoverPresentationControllerDelegate, WKFormControl>
{
    WKContentView *_view;	// 8 = 0x8
    struct RetainPtr<UINavigationController> _navigationController;	// 16 = 0x10
    struct RetainPtr<WKSelectPickerTableViewController> _tableViewController;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000041fd68
- (void).cxx_destruct;	// IMP=0x000000000041fd21
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000041fc9b
- (id)_indexPathForRow:(long long)arg1;	// IMP=0x000000000041fc20
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000041fc02
- (void)controlEndEditing;	// IMP=0x000000000041fbc3
- (void)controlBeginEditing;	// IMP=0x000000000041fb46
- (id)controlView;	// IMP=0x000000000041fb3e
- (void)configurePresentation;	// IMP=0x000000000041f90f
- (id)initWithView:(id)arg1;	// IMP=0x000000000041f844

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
