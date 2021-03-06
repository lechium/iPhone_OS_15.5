//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFLoggable-Protocol.h>
#import <EmailFoundation/NSCopying-Protocol.h>
#import <EmailFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate, NSString;

@interface EFQuery : NSObject <EFLoggable, NSSecureCoding, NSCopying>
{
    Class _targetClass;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
    unsigned long long _queryOptions;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e758
+ (_Bool)_isValidSortDescriptor:(id)arg1 forTargetClass:(Class)arg2;	// IMP=0x000000000002e439
+ (void)addValidSortDescriptorKeyPaths:(id)arg1 forTargetClass:(Class)arg2;	// IMP=0x000000000002e2d0
+ (id)log;	// IMP=0x000000000002e1f3
- (void).cxx_destruct;	// IMP=0x000000000002f484
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long queryOptions; // @synthesize queryOptions=_queryOptions;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f3d7
- (_Bool)_isEqualToQuery:(id)arg1;	// IMP=0x000000000002f22b
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ecb8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e760
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e74d
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 label:(id)arg5;	// IMP=0x000000000002e583
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000000002e55d

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

