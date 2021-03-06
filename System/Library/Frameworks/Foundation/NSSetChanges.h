//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014af49
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b064
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014b039
@property(readonly) unsigned long long changeCount;
- (void)addChange:(id)arg1;	// IMP=0x000000000014afe0
- (long long)_toManyPropertyType;	// IMP=0x000000000014afd8
- (_Bool)_isToManyChangeInformation;	// IMP=0x000000000014afd0
- (void)applyChangesToSet:(id)arg1;	// IMP=0x000000000014b14b
- (void)removeObject:(id)arg1;	// IMP=0x000000000014b0ed
- (void)addObject:(id)arg1;	// IMP=0x000000000014b08f

@end

