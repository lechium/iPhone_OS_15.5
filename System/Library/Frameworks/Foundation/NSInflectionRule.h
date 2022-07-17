//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSInflectionRule : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001958f2
+ (id)automaticRule;	// IMP=0x0000000000195822
+ (_Bool)canInflectLanguage:(id)arg1;	// IMP=0x0000000000195c4e
+ (_Bool)canInflectPreferredLocalization;	// IMP=0x0000000000195bf2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001958c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019589e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000195877
- (id)_init;	// IMP=0x00000000001957d0

@end
