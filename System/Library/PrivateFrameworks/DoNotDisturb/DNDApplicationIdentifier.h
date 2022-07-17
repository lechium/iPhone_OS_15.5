//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSString;

@interface DNDApplicationIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _platform;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000de2f
- (void).cxx_destruct;	// IMP=0x000000000000df66
@property(readonly, nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dee0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000de37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000de24
- (id)diffDescription;	// IMP=0x000000000000dda4
- (id)description;	// IMP=0x000000000000dcc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000db36
- (unsigned long long)hash;	// IMP=0x000000000000dad4
- (id)initWithBundleID:(id)arg1 platform:(unsigned long long)arg2;	// IMP=0x000000000000da56
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000000000da3f

@end
