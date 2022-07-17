//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSSecureCoding-Protocol.h>

@class NSData, NSString, RMManagementChannel;

@interface RMAsset : NSObject <NSSecureCoding>
{
    NSString *_type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_serverToken;	// 24 = 0x18
    NSData *_content;	// 32 = 0x20
    RMManagementChannel *_channel;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003ed7
- (void).cxx_destruct;	// IMP=0x00000000000045c1
@property(readonly, copy, nonatomic) RMManagementChannel *channel; // @synthesize channel=_channel;
@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x000000000000446a
- (_Bool)isEqualToAsset:(id)arg1;	// IMP=0x0000000000004202
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000419b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000404f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003edf
- (id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 channel:(id)arg5;	// IMP=0x0000000000003da3

@end
