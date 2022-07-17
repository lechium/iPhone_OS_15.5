//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>
#import <MediaRemote/NSMutableCopying-Protocol.h>
#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying, NSCopying>
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSString *_primaryApplicationDisplayID;	// 16 = 0x10
    NSString *_secondaryApplicationDisplayID;	// 24 = 0x18
    int _status;	// 32 = 0x20
    int _creatorProcessID;	// 36 = 0x24
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002652a4
- (void).cxx_destruct;	// IMP=0x000000000026564b
@property(readonly, nonatomic) int creatorProcessID; // @synthesize creatorProcessID=_creatorProcessID;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *secondaryApplicationDisplayID; // @synthesize secondaryApplicationDisplayID=_secondaryApplicationDisplayID;
@property(readonly, nonatomic) NSString *primaryApplicationDisplayID; // @synthesize primaryApplicationDisplayID=_primaryApplicationDisplayID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002655f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000265557
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026538e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002652ac
- (id)description;	// IMP=0x0000000000265156
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002650cf
- (id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2;	// IMP=0x0000000000264ff0

@end
