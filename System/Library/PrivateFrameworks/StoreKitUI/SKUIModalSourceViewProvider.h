//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView;
@protocol SKUIModalSourceViewProviderDelegate;

@interface SKUIModalSourceViewProvider : NSObject
{
    id <SKUIModalSourceViewProviderDelegate> _delegate;	// 8 = 0x8
    _Bool _hideOriginalSourceView;	// 16 = 0x10
    UIView *_originalSourceView;	// 24 = 0x18
    UIBarButtonItem *_sourceButtonBarItem;	// 32 = 0x20
    id _userInfo;	// 40 = 0x28
    UIView *_sourceView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002f38c3
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIBarButtonItem *sourceButtonBarItem; // @synthesize sourceButtonBarItem=_sourceButtonBarItem;
@property(retain, nonatomic) UIView *originalSourceView; // @synthesize originalSourceView=_originalSourceView;
@property(nonatomic) __weak id <SKUIModalSourceViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showOriginalSourceView;	// IMP=0x00000000002f3825
- (void)hideOriginalSourceView;	// IMP=0x00000000002f37a6
- (id)animationView;	// IMP=0x00000000002f3731

@end

