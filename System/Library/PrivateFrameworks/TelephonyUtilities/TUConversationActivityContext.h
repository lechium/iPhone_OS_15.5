//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface TUConversationActivityContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_actionDescription;	// 16 = 0x10
    NSString *_ongoingDescription;	// 24 = 0x18
    NSString *_completedDescription;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001dfe4
- (void).cxx_destruct;	// IMP=0x000000000001e41c
@property(copy, nonatomic) NSString *completedDescription; // @synthesize completedDescription=_completedDescription;
@property(copy, nonatomic) NSString *ongoingDescription; // @synthesize ongoingDescription=_ongoingDescription;
@property(copy, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e212
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001dfec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001defa
- (unsigned long long)hash;	// IMP=0x000000000001de09
- (_Bool)isEqualToActivityContext:(id)arg1;	// IMP=0x000000000001dc42
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001dbe5
- (id)description;	// IMP=0x000000000001db9d
- (id)initWithContextIdentifier:(id)arg1 actionDescription:(id)arg2 ongoingDescription:(id)arg3 completedDescription:(id)arg4;	// IMP=0x000000000001dabb

@end

