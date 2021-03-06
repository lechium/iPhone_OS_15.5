//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSSet *_senderDescriptors;	// 8 = 0x8
    NSSet *_descriptors;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000390fa
- (void).cxx_destruct;	// IMP=0x0000000000036bae
@property(readonly, copy, nonatomic) NSSet *descriptors; // @synthesize descriptors=_descriptors;
@property(readonly, copy, nonatomic) NSSet *senderDescriptors; // @synthesize senderDescriptors=_senderDescriptors;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000036a63
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000036a13
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000369f7
- (id)succinctDescription;	// IMP=0x00000000000369a7
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000368e9
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036292
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036224
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000361e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000361dc
- (_Bool)containsDescriptor:(id)arg1;	// IMP=0x00000000000361c6
- (_Bool)specifiesDescriptor:(id)arg1;	// IMP=0x00000000000360d8
@property(readonly, copy, nonatomic) NSSet *displays; // @dynamic displays;
- (id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2;	// IMP=0x0000000000035e45
- (id)init;	// IMP=0x0000000000035d17

// Remaining properties
@property(readonly) Class superclass;

@end

