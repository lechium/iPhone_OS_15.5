//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSString;

@interface CRKSingleInterfaceIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    NSString *mInterfaceName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000306c5
@property(readonly, copy, nonatomic) NSString *IPAddress;
- (id)initWithInterfaceName:(id)arg1;	// IMP=0x0000000000030605
- (id)init;	// IMP=0x00000000000305ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

