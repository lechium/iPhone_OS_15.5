//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSString, TRIPBEnumDescriptor;

@interface TRIPBExtensionDescriptor : NSObject <NSCopying>
{
    struct TRIPBExtensionDescription *description_;	// 8 = 0x8
    CDUnion_a49d1a5a defaultValue_;	// 16 = 0x10
    Class containingMessageClass_;	// 24 = 0x18
}

@property(readonly, nonatomic) Class containingMessageClass; // @synthesize containingMessageClass=containingMessageClass_;
- (long long)compareByFieldNumber:(id)arg1;	// IMP=0x000000000001b5fc
@property(readonly, nonatomic) id defaultValue;
@property(readonly, nonatomic) TRIPBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic) int alternateWireType;
@property(readonly, nonatomic) int wireType;
@property(readonly, nonatomic) unsigned char dataType;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (const char *)singletonNameC;	// IMP=0x000000000001b3a1
@property(readonly, nonatomic) NSString *singletonName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b372
- (void)dealloc;	// IMP=0x000000000001b327
- (id)initWithExtensionDescription:(struct TRIPBExtensionDescription *)arg1;	// IMP=0x000000000001b1e4

@end

