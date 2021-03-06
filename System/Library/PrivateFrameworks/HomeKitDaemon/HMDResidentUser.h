//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice;

@interface HMDResidentUser
{
    HMDDevice *_device;	// 280 = 0x118
    unsigned long long _configurationState;	// 288 = 0x120
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009bbabe
- (void).cxx_destruct;	// IMP=0x00000000009bb7f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009bb6ca
- (id)encodingRemoteDisplayName;	// IMP=0x00000000009bb6b8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009bb1f9
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000009bae37
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000009bacc5
- (id)legacyUser;	// IMP=0x00000000009bac8f
@property unsigned long long configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, getter=isBlocked) _Bool blocked;
- (_Bool)updateWithDevice:(id)arg1;	// IMP=0x00000000009ba7c3
- (void)setDevice:(id)arg1;	// IMP=0x00000000009ba6f8
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)registerIdentity;	// IMP=0x00000000009ba523
- (_Bool)requiresMakoSupport;	// IMP=0x00000000009ba51b
- (id)displayName;	// IMP=0x00000000009ba4cb
- (_Bool)refreshDisplayName;	// IMP=0x00000000009ba4c3
- (id)deviceIdentifier;	// IMP=0x00000000009ba449
- (id)userID;	// IMP=0x00000000009ba3f9
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000009ba2c7
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;	// IMP=0x00000000009ba222
- (id)initWithModelObject:(id)arg1;	// IMP=0x00000000009ba0f3

@end

