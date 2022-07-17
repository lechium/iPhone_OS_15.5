//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRAVDistantOutputDevice, MRDistantExternalDevice, NSArray, NSObject, NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint <NSSecureCoding>
{
    _Bool _canModifyGroupMembership;	// 8 = 0x8
    long long _connectionType;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalDeviceQueue;	// 40 = 0x28
    NSArray *_distantOutputDevices;	// 48 = 0x30
    NSArray *_distantPersonalOutputDevices;	// 56 = 0x38
    MRAVDistantOutputDevice *_distantGroupLeader;	// 64 = 0x40
    MRDistantExternalDevice *_distantExternalDevice;	// 72 = 0x48
    NSXPCListenerEndpoint *_externalDeviceListenerEndpoint;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000125667
- (void).cxx_destruct;	// IMP=0x0000000000125fe9
@property(retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint; // @synthesize externalDeviceListenerEndpoint=_externalDeviceListenerEndpoint;
@property(retain, nonatomic) MRDistantExternalDevice *distantExternalDevice; // @synthesize distantExternalDevice=_distantExternalDevice;
@property(retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader; // @synthesize distantGroupLeader=_distantGroupLeader;
@property(copy, nonatomic) NSArray *distantPersonalOutputDevices; // @synthesize distantPersonalOutputDevices=_distantPersonalOutputDevices;
@property(copy, nonatomic) NSArray *distantOutputDevices; // @synthesize distantOutputDevices=_distantOutputDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue; // @synthesize externalDeviceQueue=_externalDeviceQueue;
- (void)setUniqueIdentifier:(id)arg1;	// IMP=0x0000000000125f11
- (id)uniqueIdentifier;	// IMP=0x0000000000125f00
- (void)setLocalizedName:(id)arg1;	// IMP=0x0000000000125eec
- (id)localizedName;	// IMP=0x0000000000125edb
- (long long)connectionType;	// IMP=0x0000000000125eca
- (_Bool)canModifyGroupMembership;	// IMP=0x0000000000125eba
- (_Bool)isProxyGroupPlayer;	// IMP=0x0000000000125d7e
- (id)designatedGroupLeader;	// IMP=0x0000000000125d69
- (id)externalDevice;	// IMP=0x0000000000125aed
- (id)personalOutputDevices;	// IMP=0x0000000000125ad8
- (id)outputDevices;	// IMP=0x0000000000125ac3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012566f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000125596
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000125060

@end
