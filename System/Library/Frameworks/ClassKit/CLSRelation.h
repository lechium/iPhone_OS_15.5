//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CLSRelation : NSObject
{
    _Bool _faultable;	// 8 = 0x8
    Class _fromEntity;	// 16 = 0x10
    NSString *_fromKey;	// 24 = 0x18
    Class _toEntity;	// 32 = 0x20
    NSString *_toKey;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000085919
@property(readonly, nonatomic, getter=isFaultable) _Bool faultable; // @synthesize faultable=_faultable;
@property(readonly, nonatomic) NSString *toKey; // @synthesize toKey=_toKey;
@property(readonly, nonatomic) Class toEntity; // @synthesize toEntity=_toEntity;
@property(readonly, nonatomic) NSString *fromKey; // @synthesize fromKey=_fromKey;
@property(readonly, nonatomic) Class fromEntity; // @synthesize fromEntity=_fromEntity;
- (id)description;	// IMP=0x0000000000085787
- (_Bool)isEquivalentToRelation:(id)arg1;	// IMP=0x0000000000085461
- (_Bool)isInverseOfRelation:(id)arg1;	// IMP=0x00000000000850e4
- (id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(_Bool)arg5;	// IMP=0x0000000000085023

@end
