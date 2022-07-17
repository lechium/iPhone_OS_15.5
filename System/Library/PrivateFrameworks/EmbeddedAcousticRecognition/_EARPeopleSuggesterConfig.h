//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARPeopleSuggesterConfig : NSObject
{
    unsigned int _contactsCount;	// 8 = 0x8
    unsigned int _bestContactsCount;	// 12 = 0xc
    unsigned int _bestContactsBonus;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned int bestContactsBonus; // @synthesize bestContactsBonus=_bestContactsBonus;
@property(readonly, nonatomic) unsigned int bestContactsCount; // @synthesize bestContactsCount=_bestContactsCount;
@property(readonly, nonatomic) unsigned int contactsCount; // @synthesize contactsCount=_contactsCount;
- (id)initWithContactsCount:(unsigned int)arg1 bestContactsCount:(unsigned int)arg2 bestContactsBonus:(unsigned int)arg3;	// IMP=0x0000000000058a6e

@end
