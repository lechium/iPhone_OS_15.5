//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFCacheable-Protocol.h>
#import <Email/EMCollectionItemID-Protocol.h>

@class NSString;

@interface EMThreadCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>
{
    long long _conversationID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000084bce
@property(readonly, nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000084d2c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000084bd6
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000084a6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084a61
- (id)initWithConversationID:(long long)arg1;	// IMP=0x00000000000849e0
- (id)init;	// IMP=0x0000000000084991
- (id)cachedSelf;	// IMP=0x0000000000083cdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
