//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UIStatusBarDataEntry : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enabled;	// 8 = 0x8
}

+ (id)disabledEntry;	// IMP=0x0000000000e3febb
+ (id)entry;	// IMP=0x0000000000e3fea9
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000e3fea1
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)description;	// IMP=0x0000000000e4019b
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000e400ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e40044
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e3ffba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e3ff97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3ff60
- (unsigned long long)hash;	// IMP=0x0000000000e3ff35
- (id)init;	// IMP=0x0000000000e3fee9
- (id)initFromData:(const CDStruct_e9def42b *)arg1 type:(int)arg2;	// IMP=0x0000000000e49224

@end
