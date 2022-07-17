//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSString;

@interface MPMediaPersistentIDsPredicate <MPPProtobufferCoding>
{
    long long *_persistentIDs;	// 8 = 0x8
    _Bool _shouldContain;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bc561
+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;	// IMP=0x00000000000bc4e2
@property(readonly, nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
@property(readonly, nonatomic) const long long *persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;	// IMP=0x00000000000bc3d4
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;	// IMP=0x00000000000bc247
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bc168
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bbfc7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bbd34
- (void)dealloc;	// IMP=0x00000000000bbcee
- (id)ML3PredicateForContainer;	// IMP=0x000000000015bd28
- (id)ML3PredicateForTrack;	// IMP=0x000000000015bcfa
- (id)_ML3PredicateForEntityClass:(Class)arg1;	// IMP=0x000000000015bc8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
