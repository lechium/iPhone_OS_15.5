//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccountHandle, NSString, NSUUID;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000263b4c
+ (id)identifierNamespace;	// IMP=0x0000000000263b1c
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x0000000000263a66
- (void).cxx_destruct;	// IMP=0x0000000000263a53
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002639c9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026393c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000263931
@property(readonly, copy, nonatomic) HMDAccountHandle *accountHandle;
@property(readonly, nonatomic, getter=isGlobal) _Bool global;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000002637c3
- (id)initWithDestination:(id)arg1;	// IMP=0x000000000026370d
@property(readonly, copy, nonatomic) NSString *destination;
- (id)init;	// IMP=0x00000000002635bd

@end

