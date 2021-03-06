//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSObject, UIActivity, UIImage;
@protocol OS_dispatch_queue, SUActivityItemProviderDelegate;

@interface SUActivityItemProvider : UIActivityItemProvider
{
    UIActivity *_activity;	// 8 = 0x8
    id <SUActivityItemProviderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    id _lastProvidedItem;	// 32 = 0x20
    UIImage *_previewImage;	// 40 = 0x28
}

- (id)item;	// IMP=0x000000000011e57d
@property(retain, setter=setSUPreviewImage:) UIImage *suPreviewImage;
@property(readonly) id suLastProvidedItem;
@property(retain, setter=setSUActivity:) UIActivity *suActivity;
@property __weak id <SUActivityItemProviderDelegate> delegate;
- (void)dealloc;	// IMP=0x000000000011df65
- (id)initWithPlaceholderItem:(id)arg1;	// IMP=0x000000000011dec7

@end

