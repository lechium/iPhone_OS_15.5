//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject
{
    CNUIUserActionItem *_defaultAction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    NSArray *_directoryServiceActions;	// 24 = 0x18
    NSArray *_foundOnDeviceActions;	// 32 = 0x20
}

+ (id)emptyModel;	// IMP=0x00000000000435aa
- (void).cxx_destruct;	// IMP=0x0000000000043c20
@property(copy, nonatomic) NSArray *foundOnDeviceActions; // @synthesize foundOnDeviceActions=_foundOnDeviceActions;
@property(copy, nonatomic) NSArray *directoryServiceActions; // @synthesize directoryServiceActions=_directoryServiceActions;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNUIUserActionItem *defaultAction; // @synthesize defaultAction=_defaultAction;
- (id)description;	// IMP=0x00000000000439d1
@property(readonly, nonatomic) _Bool isEmpty;
- (id)allActions;	// IMP=0x00000000000437f1
- (id)initWithModel:(id)arg1 actions:(id)arg2;	// IMP=0x0000000000043710
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4;	// IMP=0x000000000004361e

@end

