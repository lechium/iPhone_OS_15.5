//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNUICoreContactPropertyFilterBuilder : NSObject
{
    _Bool _excludeNickname;	// 8 = 0x8
    _Bool _excludePhoto;	// 9 = 0x9
    _Bool _excludeNote;	// 10 = 0xa
    _Bool _excludeRelationships;	// 11 = 0xb
}

+ (id)whitelistedContactsFilterBuilder;	// IMP=0x000000000003c73a
+ (id)managedContactsFilterBuilder;	// IMP=0x000000000003c6c9
@property(nonatomic) _Bool excludeRelationships; // @synthesize excludeRelationships=_excludeRelationships;
@property(nonatomic) _Bool excludeNote; // @synthesize excludeNote=_excludeNote;
@property(nonatomic) _Bool excludePhoto; // @synthesize excludePhoto=_excludePhoto;
@property(nonatomic) _Bool excludeNickname; // @synthesize excludeNickname=_excludeNickname;
- (id)build;	// IMP=0x000000000003c7a8

@end

