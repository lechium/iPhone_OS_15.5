//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteSupplementalGroup : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSArray *_groupMembers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003dba8
@property(readonly, copy) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3;	// IMP=0x000000000003da86

@end
