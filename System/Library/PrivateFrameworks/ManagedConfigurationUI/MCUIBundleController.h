//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSBundleController.h>

@class PSListController, PSSpecifier;
@protocol MCUIDataManagerProtocol;

@interface MCUIBundleController : PSBundleController
{
    id <MCUIDataManagerProtocol> _dataManager;	// 16 = 0x10
    PSListController *_parentController;	// 24 = 0x18
    PSSpecifier *_specifier;	// 32 = 0x20
}

+ (_Bool)isRunningInBridge;	// IMP=0x000000000002e8af
+ (id)sharedInstance;	// IMP=0x000000000002e227
- (void).cxx_destruct;	// IMP=0x000000000002f54d
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) __weak PSListController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) id <MCUIDataManagerProtocol> dataManager; // @synthesize dataManager=_dataManager;
- (void)_reloadTopLevelSpecifier;	// IMP=0x000000000002f40d
- (void)_mcuiUpdated:(id)arg1;	// IMP=0x000000000002f2ca
- (_Bool)_updateTopLevelSpecifier;	// IMP=0x000000000002efd6
- (_Bool)_swizzlingFromSpecifier:(id)arg1;	// IMP=0x000000000002eeb8
- (id)specifiersWithSpecifier:(id)arg1;	// IMP=0x000000000002ece5
- (id)_detailsFromSpecifier:(id)arg1;	// IMP=0x000000000002ec8b
- (void)decrementNanoProfileCount;	// IMP=0x000000000002eae2
- (void)incrementNanoProfileCount;	// IMP=0x000000000002ea56
@property(nonatomic) unsigned long long nanoProfileCount;
- (id)nanoDomainAccessor;	// IMP=0x000000000002e92e
- (void)unload;	// IMP=0x000000000002e82d
- (void)load;	// IMP=0x000000000002e468
- (void)dealloc;	// IMP=0x000000000002e3d5
- (id)initWithParentListController:(id)arg1 dataManager:(id)arg2;	// IMP=0x000000000002e35d
- (id)initWithParentListController:(id)arg1 properties:(id)arg2;	// IMP=0x000000000002e2cd
- (id)_initWithDataManager:(id)arg1;	// IMP=0x000000000002e1b9

@end

