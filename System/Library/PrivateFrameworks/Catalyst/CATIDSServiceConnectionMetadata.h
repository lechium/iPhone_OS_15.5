//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID;

@interface CATIDSServiceConnectionMetadata : NSObject
{
    NSUUID *_connectionIdentifier;	// 8 = 0x8
    NSString *_destinationAppleID;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000382b4
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *destinationAppleID; // @synthesize destinationAppleID=_destinationAppleID;
@property(readonly, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
- (_Bool)isEqualToMetadata:(id)arg1;	// IMP=0x00000000000380f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037f5f
- (unsigned long long)hash;	// IMP=0x0000000000037ea0
- (id)description;	// IMP=0x0000000000037dc9
- (id)initWithConnectionIdentifier:(id)arg1 destinationAppleID:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000037ce8

@end

