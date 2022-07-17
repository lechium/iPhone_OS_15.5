//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterServiceType : NSObject <NSCopying, HAPTLVProtocol>
{
    NSString *_name;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dbe2a
- (void).cxx_destruct;	// IMP=0x00000000004dbe1a
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004dbc5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004dbbf3
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004dba16
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004db6ed
- (id)initWithName:(id)arg1;	// IMP=0x00000000004db682
- (id)init;	// IMP=0x00000000004db653

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
