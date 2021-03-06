//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _UIActivityItemCustomization : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006d419
+ (id)pickerCustomizationWithIdentifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006d34e
+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 value:(_Bool)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006d283
- (void).cxx_destruct;	// IMP=0x000000000006d604
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_initWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3;	// IMP=0x000000000006d4db

@end

