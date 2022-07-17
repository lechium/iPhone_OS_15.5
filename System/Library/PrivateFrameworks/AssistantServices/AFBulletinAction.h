//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BBAction, NSMutableSet, NSString;

@interface AFBulletinAction : NSObject
{
    BBAction *_bbAction;	// 8 = 0x8
    NSString *_bbActionID;	// 16 = 0x10
    NSMutableSet *_titleVariants;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f27b
@property(retain, nonatomic) NSMutableSet *titleVariants; // @synthesize titleVariants=_titleVariants;
@property(readonly, copy, nonatomic) NSString *bbActionID; // @synthesize bbActionID=_bbActionID;
@property(readonly, nonatomic) BBAction *bbAction; // @synthesize bbAction=_bbAction;
- (id)getTitleVariants;	// IMP=0x000000000007f22e
- (void)addTitleVariant:(id)arg1;	// IMP=0x000000000007f211
- (id)initWithBulletinAction:(id)arg1;	// IMP=0x000000000007f100

@end
