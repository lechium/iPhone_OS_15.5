//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HUDataAnalyticsModuleControllerDelegate;

@interface HUDataAnalyticsModuleController
{
    id <HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e6b7b
@property(nonatomic) __weak id <HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate; // @synthesize dataAnalyticsModuleControllerDelegate=_dataAnalyticsModuleControllerDelegate;
- (unsigned long long)didSelectItem:(id)arg1;	// IMP=0x00000000000e6aa1
- (_Bool)canSelectItem:(id)arg1;	// IMP=0x00000000000e6a28
- (void)setupCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000e6871
- (Class)cellClassForItem:(id)arg1;	// IMP=0x00000000000e6860
- (id)module;	// IMP=0x00000000000e6819
- (id)initWithModule:(id)arg1;	// IMP=0x00000000000e67ea

@end
