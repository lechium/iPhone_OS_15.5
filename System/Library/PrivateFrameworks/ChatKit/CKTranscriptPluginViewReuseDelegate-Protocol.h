//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class UIView;
@protocol CKTranscriptPluginView;

@protocol CKTranscriptPluginViewReuseDelegate <NSObject>

@optional
@property(readonly, nonatomic) _Bool allowsReusablePluginViews;
- (void)pluginViewDidEnterReuseQueue:(UIView<CKTranscriptPluginView> *)arg1;
- (Class)pluginViewClassType;
- (UIView<CKTranscriptPluginView> *)createNewPluginView;
@end
