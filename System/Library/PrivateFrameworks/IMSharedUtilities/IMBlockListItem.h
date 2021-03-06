//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, IMBlockListPerson, NSString;

@interface IMBlockListItem : NSObject
{
    NSString *_address;	// 8 = 0x8
    void *_cmfItem;	// 16 = 0x10
    IMBlockListPerson *_person;	// 24 = 0x18
    NSString *_cachedFormattedHandle;	// 32 = 0x20
    NSString *_cachedFormattedPersonName;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *cachedFormattedPersonName; // @synthesize cachedFormattedPersonName=_cachedFormattedPersonName;
@property(retain, nonatomic) NSString *cachedFormattedHandle; // @synthesize cachedFormattedHandle=_cachedFormattedHandle;
@property(retain, nonatomic) IMBlockListPerson *person; // @synthesize person=_person;
@property(nonatomic) void *cmfItem; // @synthesize cmfItem=_cmfItem;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (_Bool)isEqualToBlockListItem:(id)arg1;	// IMP=0x0000000000008b0e
- (id)formattedAddress;	// IMP=0x0000000000008ab8
- (id)formattedHandle;	// IMP=0x0000000000008995
- (id)fullName;	// IMP=0x000000000000893d
- (void)lookupPerson;	// IMP=0x00000000000088f6
- (void)dealloc;	// IMP=0x00000000000088b7
@property(readonly, nonatomic) CNContact *cnPerson;
- (id)initWithCNContact:(id)arg1 address:(id)arg2 cmfItemRef:(void *)arg3;	// IMP=0x000000000000884e
- (id)initWithPerson:(id)arg1 address:(id)arg2 cmfItemRef:(void *)arg3;	// IMP=0x00000000000087d9

@end

