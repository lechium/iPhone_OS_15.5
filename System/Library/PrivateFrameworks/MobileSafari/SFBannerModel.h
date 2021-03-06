//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SFBannerModel : NSObject
{
    long long _userInterfaceStyle;	// 8 = 0x8
    CDUnknownBlockType _action;	// 16 = 0x10
    long long _contentVariant;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    long long _numberOfTrackers;	// 56 = 0x38
}

+ (id)bannerWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007f506
+ (id)bannerWithTitle:(id)arg1 message:(id)arg2 dismissHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007f4e9
+ (id)privacyReportBannerWithNumberOfTrackers:(long long)arg1 selectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f48c
- (void).cxx_destruct;	// IMP=0x000000000007f8bb
@property(readonly, nonatomic) long long numberOfTrackers; // @synthesize numberOfTrackers=_numberOfTrackers;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long contentVariant; // @synthesize contentVariant=_contentVariant;
@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
- (unsigned long long)hash;	// IMP=0x000000000007f824
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f778
- (id)description;	// IMP=0x000000000007f688
- (id)initWithContentVariant:(long long)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f5ff

@end

