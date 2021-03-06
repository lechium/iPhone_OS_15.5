//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol MUDynamicButtonCellModelChangeDelegate;

__attribute__((visibility("hidden")))
@interface ParkedCarContaineeAction
{
    CDUnknownBlockType _actionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000057a5cc
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) long long actionStyle;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) NSString *symbolName;
- (void)loadSubtitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000057a556
@property(readonly, nonatomic) NSString *titleString;

// Remaining properties
@property(nonatomic) __weak id <MUDynamicButtonCellModelChangeDelegate> changeDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

