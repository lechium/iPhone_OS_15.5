//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpController, NSDictionary, NSString, NSURL;

@interface MDMFollowUp : NSObject
{
    FLFollowUpController *_followUpController;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    NSString *_itemIdentifier;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    NSDictionary *_userInfo;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSString *_notificationInfo;	// 64 = 0x40
}

+ (void)clearFollowUpWithClientID:(id)arg1;	// IMP=0x0000000000003e4e
- (void).cxx_destruct;	// IMP=0x0000000000004384
@property(retain, nonatomic) NSString *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
- (id)_constructFollowUp;	// IMP=0x0000000000003f59
- (void)clearFollowUp;	// IMP=0x0000000000003d16
- (void)presentFollowUp;	// IMP=0x0000000000003bae
- (id)initWithStyle:(long long)arg1 clientIdentifier:(id)arg2 itemIdentifier:(id)arg3 url:(id)arg4 title:(id)arg5 notificationInfo:(id)arg6 userInfo:(id)arg7;	// IMP=0x0000000000003a55

@end
