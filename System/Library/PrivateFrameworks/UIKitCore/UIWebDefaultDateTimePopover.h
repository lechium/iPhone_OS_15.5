//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWebFormControl-Protocol.h>

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover <UIWebFormControl>
{
    UIWebDateTimePopoverViewController *_webDateTimeViewController;	// 8 = 0x8
}

@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController; // @synthesize _webDateTimeViewController;
- (void)controlEndEditing;	// IMP=0x000000000070bb95
- (void)controlBeginEditing;	// IMP=0x000000000070bb50
- (id)controlView;	// IMP=0x000000000070bb48
- (void)dealloc;	// IMP=0x000000000070bb08
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x000000000070b8de
- (void)clear:(id)arg1;	// IMP=0x000000000070b8a8

@end
