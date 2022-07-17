//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKSEConsistencyCheckDeviceCredential, PKSECredentialAddress;

@interface PKSEConsistencyCheckRequestedAction : NSObject
{
    long long _actions;	// 8 = 0x8
    PKSEConsistencyCheckDeviceCredential *_deviceCredential;	// 16 = 0x10
    PKSECredentialAddress *_address;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000375373
@property(readonly, nonatomic) PKSECredentialAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) PKSEConsistencyCheckDeviceCredential *deviceCredential; // @synthesize deviceCredential=_deviceCredential;
@property(readonly, nonatomic) long long actions; // @synthesize actions=_actions;
- (id)description;	// IMP=0x000000000037527d
- (id)initWithActions:(long long)arg1 deviceCredential:(id)arg2 address:(id)arg3;	// IMP=0x00000000003751d8
- (id)init;	// IMP=0x00000000003751ca

@end
