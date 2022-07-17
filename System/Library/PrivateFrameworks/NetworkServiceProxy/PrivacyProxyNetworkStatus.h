//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSString;

@interface PrivacyProxyNetworkStatus : NSObject <NSSecureCoding, NSCopying>
{
    int _networkType;	// 8 = 0x8
    unsigned long long _networkStatus;	// 16 = 0x10
    NSString *_networkName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cbd43
- (void).cxx_destruct;	// IMP=0x00000000000cc1ce
@property(retain) NSString *networkName; // @synthesize networkName=_networkName;
@property int networkType; // @synthesize networkType=_networkType;
@property unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (id)initWithData:(id)arg1;	// IMP=0x00000000000cc065
- (id)serialize;	// IMP=0x00000000000cbfed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cbf2f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cbe15
- (id)initWithStatus:(unsigned long long)arg1 type:(int)arg2 name:(id)arg3;	// IMP=0x00000000000cbd4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cbc97
- (id)description;	// IMP=0x00000000000cbc7e
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000cbb4c
- (id)networkTypeString;	// IMP=0x00000000000cbada
- (id)networkStatusString;	// IMP=0x00000000000cba94

@end
