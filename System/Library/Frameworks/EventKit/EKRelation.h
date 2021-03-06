//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface EKRelation : NSObject
{
    NSString *_entityName;	// 8 = 0x8
    _Bool _toMany;	// 16 = 0x10
    _Bool _ownsRelated;	// 17 = 0x11
    NSSet *_inversePropertyNames;	// 24 = 0x18
    CDUnknownBlockType _inversePropertyIsApplicable;	// 32 = 0x20
}

+ (id)relationWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyNames:(id)arg3 ownsRelated:(_Bool)arg4;	// IMP=0x00000000000e1e71
+ (id)relationWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyNames:(id)arg3;	// IMP=0x00000000000e1df0
- (void).cxx_destruct;	// IMP=0x00000000000e2109
@property(copy, nonatomic) CDUnknownBlockType inversePropertyIsApplicable; // @synthesize inversePropertyIsApplicable=_inversePropertyIsApplicable;
- (_Bool)shouldSetInverseProperty:(id)arg1 onObject:(id)arg2 forObject:(id)arg3;	// IMP=0x00000000000e201d
@property(readonly, nonatomic) NSSet *inversePropertyNames;
@property(readonly, nonatomic) _Bool ownsRelatedObject;
@property(readonly, nonatomic) _Bool toMany;
- (id)description;	// IMP=0x00000000000e1fbc
- (id)initWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyNames:(id)arg3 ownsRelated:(_Bool)arg4;	// IMP=0x00000000000e1ef4

@end

