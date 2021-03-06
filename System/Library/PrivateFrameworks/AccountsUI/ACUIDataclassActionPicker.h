//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACDataclassAction, NSArray, NSMutableArray;

@interface ACUIDataclassActionPicker : NSObject
{
    NSMutableArray *_affectedDataclasses;	// 8 = 0x8
    ACAccount *_affectedAccount;	// 16 = 0x10
    NSArray *_actions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018180
@property(readonly, nonatomic) ACAccount *affectedAccount; // @synthesize affectedAccount=_affectedAccount;
@property(copy, nonatomic) NSArray *affectedDataclasses; // @synthesize affectedDataclasses=_affectedDataclasses;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)descriptionForDataclassAction:(id)arg1;	// IMP=0x0000000000017990
- (id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3;	// IMP=0x00000000000174c0
- (id)message;	// IMP=0x0000000000016580
- (id)title;	// IMP=0x00000000000161b0
- (id)showInViewController:(id)arg1;	// IMP=0x0000000000015520
@property(readonly, nonatomic) long long priorityIndex;
- (_Bool)hasActionOfType:(long long)arg1;	// IMP=0x0000000000015440
- (id)actionOfType:(long long)arg1;	// IMP=0x00000000000151d0
@property(readonly, nonatomic) ACDataclassAction *firstDestructiveAction;
@property(readonly, nonatomic) _Bool hasDestructiveActions;
- (void)addAffectedDataclass:(id)arg1;	// IMP=0x0000000000014e70
- (id)initWithActions:(id)arg1 affectingAccount:(id)arg2;	// IMP=0x0000000000014ba0

@end

