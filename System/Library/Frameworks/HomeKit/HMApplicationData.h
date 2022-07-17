//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface HMApplicationData : NSObject
{
    NSMutableDictionary *_applicationData;	// 8 = 0x8
    NSSet *_allowedObjectClasses;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006925f
@property(retain, nonatomic) NSSet *allowedObjectClasses; // @synthesize allowedObjectClasses=_allowedObjectClasses;
@property(retain, nonatomic) NSMutableDictionary *applicationData; // @synthesize applicationData=_applicationData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000068ee5
- (_Bool)isAllowedClassForObject:(id)arg1;	// IMP=0x0000000000068ab5
- (unsigned long long)hash;	// IMP=0x0000000000068a71
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000689a6
- (id)dictionary;	// IMP=0x000000000006895e
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000006894c
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000006893a
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000687c9
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000068746
@property(readonly, copy, nonatomic) NSArray *allValues;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (id)init;	// IMP=0x0000000000068692
- (id)initWithContentsOfDictionary:(id)arg1;	// IMP=0x0000000000068549
- (id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2;	// IMP=0x0000000000067fcd

@end
