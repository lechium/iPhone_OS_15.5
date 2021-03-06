//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSSet, NSString;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    NSSet *mInterfaceTypes;	// 8 = 0x8
}

+ (id)WiFiIPAddressProvider;	// IMP=0x000000000001067b
+ (id)ethernetIPAddressProvider;	// IMP=0x0000000000010669
- (void).cxx_destruct;	// IMP=0x00000000000107b8
- (_Bool)isAllowedInterfaceType:(id)arg1;	// IMP=0x00000000000107a2
@property(readonly, copy, nonatomic) NSString *IPAddress;
- (id)initWithInterfaceTypes:(id)arg1;	// IMP=0x0000000000010727
- (id)initWithInterfaceType:(id)arg1;	// IMP=0x00000000000106cd
- (id)init;	// IMP=0x000000000001068d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

