//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PKPerformActionSelectItemExpiresHeader : UIView
{
    UILabel *_leadingLabel;	// 8 = 0x8
    UILabel *_trailingLabel;	// 16 = 0x10
    NSString *_leadingString;	// 24 = 0x18
    NSString *_trailingString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000402060
@property(retain, nonatomic) NSString *trailingString; // @synthesize trailingString=_trailingString;
@property(retain, nonatomic) NSString *leadingString; // @synthesize leadingString=_leadingString;
- (void)layoutSubviews;	// IMP=0x0000000000401d28
- (id)init;	// IMP=0x0000000000401b6a

@end

