//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem
{
    NSString *_bodyText;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _slot;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002009a4
@property(readonly, nonatomic) long long slot; // @synthesize slot=_slot;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x000000000020082d
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3;	// IMP=0x0000000000200778

@end
