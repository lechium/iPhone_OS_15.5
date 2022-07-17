//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_iphone;	// 8 = 0x8
    NSString *_ipad;	// 16 = 0x10
    NSString *_ipod;	// 24 = 0x18
    NSString *_appletv;	// 32 = 0x20
    NSString *_mac;	// 40 = 0x28
    NSString *_watch;	// 48 = 0x30
    NSString *_specifiediphone;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000297aed
+ (id)fromDeviceVersion;	// IMP=0x0000000000297630
- (void).cxx_destruct;	// IMP=0x00000000002980c0
@property(readonly, nonatomic) NSString *specifiediphone; // @synthesize specifiediphone=_specifiediphone;
@property(readonly, nonatomic) NSString *watch; // @synthesize watch=_watch;
@property(readonly, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(readonly, nonatomic) NSString *appletv; // @synthesize appletv=_appletv;
@property(readonly, nonatomic) NSString *ipod; // @synthesize ipod=_ipod;
@property(readonly, nonatomic) NSString *ipad; // @synthesize ipad=_ipad;
@property(readonly, nonatomic) NSString *iphone; // @synthesize iphone=_iphone;
- (_Bool)isEqualToOSVersionRequirement:(id)arg1;	// IMP=0x0000000000297fdb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000297f6f
- (unsigned long long)hash;	// IMP=0x0000000000297eb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000297d9e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000297ccd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000297af5
- (id)versionForDeviceClass:(id)arg1;	// IMP=0x00000000002979f6
- (long long)compare:(id)arg1 deviceClass:(id)arg2;	// IMP=0x0000000000297893
- (id)asDictionary;	// IMP=0x000000000029770c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000297478

@end
