//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEvent, EKUIEventInviteesViewController, NSDate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesEditViewController
{
    EKEvent *_event;	// 72 = 0x48
    EKUIEventInviteesViewController *_controller;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000e812
@property(readonly, nonatomic) NSDate *selectedEndDate;
@property(readonly, nonatomic) NSDate *selectedStartDate;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000e782
- (void)loadView;	// IMP=0x000000000000e5be
- (id)initWithEvent:(id)arg1;	// IMP=0x000000000000e54c

@end
