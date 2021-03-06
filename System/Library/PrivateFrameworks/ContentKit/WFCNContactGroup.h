//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNGroup, NSArray;

@interface WFCNContactGroup
{
    CNGroup *_group;	// 8 = 0x8
    NSArray *_cachedMembers;	// 16 = 0x10
}

+ (id)contactGroupWithCNGroup:(id)arg1;	// IMP=0x000000000008f718
+ (id)allContactGroups;	// IMP=0x000000000008f650
- (void).cxx_destruct;	// IMP=0x000000000008f603
@property(retain, nonatomic) NSArray *cachedMembers; // @synthesize cachedMembers=_cachedMembers;
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
- (_Bool)containsContact:(id)arg1;	// IMP=0x000000000008f1f5
@property(readonly, nonatomic) NSArray *contacts;
- (id)name;	// IMP=0x000000000008eefd
- (id)initWithCNGroup:(id)arg1;	// IMP=0x000000000008ee01

@end

