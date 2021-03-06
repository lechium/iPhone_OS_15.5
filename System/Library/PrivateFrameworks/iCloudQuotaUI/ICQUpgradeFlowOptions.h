//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/NSCopying-Protocol.h>
#import <iCloudQuotaUI/NSSecureCoding-Protocol.h>

@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding>
{
    UIColor *_navigationBarTintColor;	// 8 = 0x8
    UIColor *_buttonTintColor;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004f49a
+ (id)flowOptionsFromData:(id)arg1;	// IMP=0x000000000004f756
- (void).cxx_destruct;	// IMP=0x000000000004f61c
@property(copy, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property(copy, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004f510
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004f4a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f3e5
- (id)serializedData;	// IMP=0x000000000004f644

@end

