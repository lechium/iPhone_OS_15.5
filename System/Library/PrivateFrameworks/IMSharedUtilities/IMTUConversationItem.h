//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@interface IMTUConversationItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    unsigned long long _flags;	// 8 = 0x8
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (_Bool)isFromMe;	// IMP=0x000000000001b681
- (id)conversationUUID;	// IMP=0x000000000001b66f
- (id)copyDictionaryRepresentation;	// IMP=0x000000000001b5ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b590
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001b516
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b4b1

@end

