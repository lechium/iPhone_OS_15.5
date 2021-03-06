//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, SDXPCHelperConnection, UIColor;

__attribute__((visibility("hidden")))
@interface SDShareSheetLoadingConfiguration : NSObject
{
    UIColor *_textColor;	// 8 = 0x8
    UIColor *_tintColor;	// 16 = 0x10
    NSLocale *_hostLocale;	// 24 = 0x18
    SDXPCHelperConnection *_helperConnection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000142488
@property(retain, nonatomic) SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(retain, nonatomic) NSLocale *hostLocale; // @synthesize hostLocale=_hostLocale;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (id);	// IMP=0x0010000000142437
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

@end

