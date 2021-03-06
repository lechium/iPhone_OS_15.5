//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEHotspotNetwork : NSObject
{
    struct __CNNetwork *_network;	// 8 = 0x8
    long long _securityType;	// 16 = 0x10
}

+ (void)fetchCurrentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000086ed2
@property long long securityType; // @synthesize securityType=_securityType;
- (_Bool)isChosenHelper;	// IMP=0x0000000000086eb2
- (_Bool)didJustJoin;	// IMP=0x0000000000086e92
- (_Bool)didAutoJoin;	// IMP=0x0000000000086e72
- (_Bool)isSecure;	// IMP=0x0000000000086e52
- (void)setPassword:(id)arg1;	// IMP=0x0000000000086e08
- (void)setConfidence:(long long)arg1;	// IMP=0x0000000000086db6
- (double)signalStrength;	// IMP=0x0000000000086d9c
@property(readonly) NSString *BSSID;
@property(readonly) NSString *SSID;
@property(readonly) NSString *interfaceName;
@property struct __CNNetwork *network; // @synthesize network=_network;
- (id)initWithNetwork:(struct __CNNetwork *)arg1 securityType:(id)arg2;	// IMP=0x0000000000086c75
- (id)initWithNetwork:(struct __CNNetwork *)arg1;	// IMP=0x0000000000086c1f
- (id)description;	// IMP=0x0000000000086bef
- (void)dealloc;	// IMP=0x0000000000086baf

@end

