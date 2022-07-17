//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFDiffableItemGroup-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface HFSimpleDiffableItemGroup : NSObject <HFDiffableItemGroup, NSCopying>
{
    NSString *_groupIdentifier;	// 8 = 0x8
    NSArray *_diffableItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012965f
@property(copy, nonatomic) NSArray *diffableItems; // @synthesize diffableItems=_diffableItems;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
