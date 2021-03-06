//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NENetworkRule;

@interface NEFilterRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    NENetworkRule *_networkRule;	// 8 = 0x8
    long long _action;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001836a9
- (void).cxx_destruct;	// IMP=0x000000000018382f
@property(readonly) long long action; // @synthesize action=_action;
@property(readonly, copy) NENetworkRule *networkRule; // @synthesize networkRule=_networkRule;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001837d4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000183723
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001836b1
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000183602
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x0000000000183364
- (id)initWithNetworkRule:(id)arg1 action:(long long)arg2;	// IMP=0x00000000001832e6

@end

