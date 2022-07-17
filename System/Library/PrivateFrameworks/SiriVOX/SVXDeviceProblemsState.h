//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface SVXDeviceProblemsState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isFixingProblems;	// 8 = 0x8
    unsigned long long _problems;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017b77
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017ea9
@property(readonly, nonatomic) unsigned long long problems; // @synthesize problems=_problems;
@property(readonly, nonatomic) _Bool isFixingProblems; // @synthesize isFixingProblems=_isFixingProblems;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017c61
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017b7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017b6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017ac5
- (unsigned long long)hash;	// IMP=0x0000000000017a25
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000017851
- (id)description;	// IMP=0x000000000001783d
- (id)initWithIsFixingProblems:(_Bool)arg1 problems:(unsigned long long)arg2;	// IMP=0x00000000000177f7
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017f18

@end
