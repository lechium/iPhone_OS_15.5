//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIMenuElement;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDMenuElement : NSObject
{
    UIMenuElement *_uiMenuElement;	// 8 = 0x8
}

+ (id)elementWithUIMenuElement:(id)arg1;	// IMP=0x0000000000eef349
- (void).cxx_destruct;	// IMP=0x0000000000eef5f7
@property(readonly, nonatomic) UIMenuElement *uiMenuElement; // @synthesize uiMenuElement=_uiMenuElement;
- (unsigned long long)hash;	// IMP=0x0000000000eef5d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000eef505
- (id)description;	// IMP=0x0000000000eef42a
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 shortcutVisit:(CDUnknownBlockType)arg2;	// IMP=0x0000000000eef424
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

@end
