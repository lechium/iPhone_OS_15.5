//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isUserCentric;	// 8 = 0x8
    _Bool _isEphemeral;	// 9 = 0x9
    _Bool _sensitiveContents;	// 10 = 0xa
    NSString *_key;	// 16 = 0x10
    NSString *_deviceID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009918
+ (id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x0000000000009377
+ (id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2;	// IMP=0x000000000000935a
+ (id)ephemeralKeyPathWithKey:(id)arg1;	// IMP=0x00000000000092a1
+ (id)keyPathWithKey:(id)arg1;	// IMP=0x00000000000091eb
+ (id)keyPathWithKey:(id)arg1 isUserCentric:(_Bool)arg2;	// IMP=0x0000000000009131
- (void).cxx_destruct;	// IMP=0x0000000000009ea2
@property(nonatomic) _Bool sensitiveContents; // @synthesize sensitiveContents=_sensitiveContents;
@property(nonatomic) _Bool isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(nonatomic) _Bool isUserCentric; // @synthesize isUserCentric=_isUserCentric;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000009e03
- (unsigned long long)hash;	// IMP=0x0000000000009dd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009cf1
- (id)description;	// IMP=0x0000000000009bd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009b68
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000099d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009920
- (_Bool)isMultiDeviceKeyPath;	// IMP=0x0000000000009464
- (id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(_Bool)arg3 isEphemeral:(_Bool)arg4;	// IMP=0x0000000000009082
- (id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(_Bool)arg3 isEphemeral:(_Bool)arg4;	// IMP=0x0000000000009074
- (id)init;	// IMP=0x0000000000009066

@end
