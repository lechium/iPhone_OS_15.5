//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPTableCheckmarkRadioSection, RAPTablePart;

__attribute__((visibility("hidden")))
@interface RAPTransitLineSchedulesIncorrectViewController
{
    RAPTablePart *_delaysPart;	// 24 = 0x18
    RAPTableCheckmarkRadioSection *_delaysSection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000353d38
- (id)_delaysSection;	// IMP=0x0010000000353a9b
- (id)tableParts;	// IMP=0x001000000035385e
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003537b8

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

