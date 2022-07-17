//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSCopying-Protocol.h>
#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableOrderedSet *_changeset;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e9df
- (void).cxx_destruct;	// IMP=0x000000000000eb01
@property(retain, nonatomic) NSMutableOrderedSet *changeset; // @synthesize changeset=_changeset;
- (id)description;	// IMP=0x000000000000ea70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e9e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e9bc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e8ee
- (_Bool)isConflictingChange:(id)arg1;	// IMP=0x000000000000e7b6
- (void)mergeSnapshot:(id)arg1;	// IMP=0x000000000000e757
- (void)addChanges:(id)arg1;	// IMP=0x000000000000e4cc
- (void)updateItem:(id)arg1;	// IMP=0x000000000000e3fb
- (void)removeItem:(id)arg1;	// IMP=0x000000000000e32a
- (void)addItem:(id)arg1;	// IMP=0x000000000000e259
@property(readonly, nonatomic) NSArray *changes;
- (id)initWithChanges:(id)arg1;	// IMP=0x000000000000e196
- (id)init;	// IMP=0x000000000000e13c

@end
