//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@interface NSNull : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011ea2f
+ (id)null;	// IMP=0x000000000011ea06
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e9fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011ea35
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011ea32
- (id)description;	// IMP=0x000000000011ea27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011ea23
- (void)dealloc;	// IMP=0x000000000011ea22
- (unsigned long long)retainCount;	// IMP=0x000000000011ea1a
- (id)autorelease;	// IMP=0x000000000011ea16
- (oneway void)release;	// IMP=0x000000000011ea15
- (id)retain;	// IMP=0x000000000011ea11
- (unsigned long long)_cfTypeID;	// IMP=0x000000000011e9f6

@end

