//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface HMDSiriEndpointSessionStateTypeWrapper : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042a0f3
@property(nonatomic) long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000429fcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000429f7a
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000429f60
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000429e35
- (id)initWithValue:(long long)arg1;	// IMP=0x0000000000429df8
- (id)init;	// IMP=0x0000000000429dbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

