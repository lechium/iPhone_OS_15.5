//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPUI/NSCopying-Protocol.h>

@class NSArray, NSString, UIImage;

@interface CDPUICustodianOSSelectionViewModel : NSObject <NSCopying>
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    long long _tableViewStyle;	// 32 = 0x20
    NSArray *_escapeOffers;	// 40 = 0x28
    NSArray *_options;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001ee7f
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *escapeOffers; // @synthesize escapeOffers=_escapeOffers;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ed20

@end
