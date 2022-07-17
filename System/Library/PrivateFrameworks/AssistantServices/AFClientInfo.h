//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _processIdentifier;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016a070
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000016a3c2
- (void).cxx_destruct;	// IMP=0x000000000016a201
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016a14e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016a078
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016a065
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000169f96
- (unsigned long long)hash;	// IMP=0x0000000000169f23
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000169d5d
- (id)description;	// IMP=0x0000000000169d49
- (id)initWithProcessIdentifier:(int)arg1 processName:(id)arg2;	// IMP=0x0000000000169ccb
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000000016a431

@end
