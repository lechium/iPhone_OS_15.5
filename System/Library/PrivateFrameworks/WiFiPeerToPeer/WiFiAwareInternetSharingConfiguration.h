//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSString;

@interface WiFiAwareInternetSharingConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _provider;	// 8 = 0x8
    _Bool _automatic;	// 9 = 0x9
    NSString *_interfaceName;	// 16 = 0x10
    NSObject *_policy;	// 24 = 0x18
}

+ (id)automaticallyRequestInternetFromInitiators;	// IMP=0x00000000000074b1
+ (id)requestInterentFromResponder;	// IMP=0x0000000000007481
+ (id)automaticallyProvideInternetToResponders;	// IMP=0x000000000000744b
+ (id)provideInternetToInitiatorsFromInterface:(id)arg1;	// IMP=0x00000000000073f6
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000714c
- (void).cxx_destruct;	// IMP=0x000000000000783e
@property(retain, nonatomic) NSObject *policy; // @synthesize policy=_policy;
@property(nonatomic) _Bool automatic; // @synthesize automatic=_automatic;
@property(nonatomic) _Bool provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)description;	// IMP=0x00000000000076b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000075c7
- (_Bool)interfaceNameEqual:(id)arg1;	// IMP=0x00000000000074e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007364
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000072a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000071dd
- (id)initWithInterfaceName:(id)arg1 isProvider:(_Bool)arg2 isAutomatic:(_Bool)arg3;	// IMP=0x0000000000007154

@end

