//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/UIContentView-Protocol.h>

@class HFUserHandle, NSArray, NSLayoutConstraint, NSString, UIListContentView;
@protocol CNAvatarViewController, UIContentConfiguration;

@interface HUAvatarContentView : UIView <UIContentView>
{
    id <UIContentConfiguration> _configuration;	// 8 = 0x8
    HFUserHandle *_userHandle;	// 16 = 0x10
    UIListContentView *_listContentView;	// 24 = 0x18
    double _avatarSize;	// 32 = 0x20
    id <CNAvatarViewController> _avatarViewController;	// 40 = 0x28
    NSArray *_dynamicConstraints;	// 48 = 0x30
    NSLayoutConstraint *_avatarWidth;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003dc547
@property(retain, nonatomic) NSLayoutConstraint *avatarWidth; // @synthesize avatarWidth=_avatarWidth;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(readonly, nonatomic) id <CNAvatarViewController> avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(nonatomic) double avatarSize; // @synthesize avatarSize=_avatarSize;
@property(retain, nonatomic) UIListContentView *listContentView; // @synthesize listContentView=_listContentView;
@property(retain, nonatomic) HFUserHandle *userHandle; // @synthesize userHandle=_userHandle;
@property(copy, nonatomic) id <UIContentConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) UIView *avatarView;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000003db617

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

