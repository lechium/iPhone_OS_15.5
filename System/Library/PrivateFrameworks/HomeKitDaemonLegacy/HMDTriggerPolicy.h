//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HMDTriggerPolicy : HMFObject <NSSecureCoding>
{
    NSUUID *_uuid;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000008d9c3a
- (void).cxx_destruct;	// IMP=0x00000000008d9c27
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008d9b4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008d9abc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008d9a07
- (void)applyPolicy:(id)arg1;	// IMP=0x00000000008d9951
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000008d98e3
- (id)init;	// IMP=0x00000000008d98d5

@end

