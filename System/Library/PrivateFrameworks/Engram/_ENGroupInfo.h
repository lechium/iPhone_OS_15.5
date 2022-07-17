//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding>
{
    ENAccountIdentity *_accountIdentity;	// 8 = 0x8
    NSArray *_participants;	// 16 = 0x10
    NSData *_sharedApplicationData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e62c
- (void).cxx_destruct;	// IMP=0x000000000000e970
@property(retain, nonatomic) NSData *sharedApplicationData; // @synthesize sharedApplicationData=_sharedApplicationData;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e834
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e6eb
- (id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3;	// IMP=0x000000000000e634

@end
