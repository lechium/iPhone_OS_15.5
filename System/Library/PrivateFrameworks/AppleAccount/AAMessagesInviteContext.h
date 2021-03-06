//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface AAMessagesInviteContext : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    NSArray *_recipients;	// 32 = 0x20
    NSString *_messageBody;	// 40 = 0x28
    NSURL *_inviteURL;	// 48 = 0x30
    NSString *_secondaryTitle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005c783
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(copy, nonatomic) NSURL *inviteURL; // @synthesize inviteURL=_inviteURL;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000005c599

@end

