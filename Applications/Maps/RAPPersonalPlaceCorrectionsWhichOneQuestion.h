//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface RAPPersonalPlaceCorrectionsWhichOneQuestion
{
    long long _shortcutType;	// 24 = 0x18
    _Bool _isRefreshing;	// 32 = 0x20
    NSString *_localizedServerControlledDescription;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003ccb37
@property(readonly, nonatomic) long long shortcutType; // @synthesize shortcutType=_shortcutType;
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
- (_Bool)_isRecursivelyComplete;	// IMP=0x00100000003cca8d
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) UIImage *image;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x00100000003cc6e0
- (id)allMenuItems;	// IMP=0x00100000003cc6ce
- (void)refreshMainMenuItemsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000003cc175
- (void)_createQuestionsFromShortcuts:(id)arg1;	// IMP=0x00100000003cbf2c
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 shortcutType:(long long)arg3;	// IMP=0x00100000003cbd92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

