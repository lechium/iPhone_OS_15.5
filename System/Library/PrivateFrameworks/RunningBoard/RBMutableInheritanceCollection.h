//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCountedSet;

@interface RBMutableInheritanceCollection
{
    NSCountedSet *_countedNamespaces;	// 32 = 0x20
}

+ (id)collectionWithInheritances:(id)arg1;	// IMP=0x0000000000026c53
- (void).cxx_destruct;	// IMP=0x0000000000027637
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027609
- (void)unionCollection:(id)arg1;	// IMP=0x00000000000274df
- (void)removeInheritance:(id)arg1;	// IMP=0x00000000000272cc
- (void)addInheritance:(id)arg1;	// IMP=0x00000000000270b8
- (id)allNamespaces;	// IMP=0x0000000000027091
- (id)_initWithCollection:(id)arg1;	// IMP=0x0000000000026cf0

@end
